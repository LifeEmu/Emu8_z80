; appBackUpScreen reserved for variable-related stuff.
;		pointer table		10 bytes
;		overlapping size	2 bytes
;		mounting mode		1 byte
;				755 bytes left

SavePtrTable		equ	ti.appBackUpScreen
SavePtrTableSize	equ	10
WorkRAMPtr		equ	SavePtrTable
; The 5 pointers above are modified to point to the ACTUAL data field!

OverlapSize		equ	(SavePtrTable + SavePtrTableSize)
OverlapSizeSize		equ	2
MountMode		equ	(OverlapSize + OverlapSizeSize)
MountModeSize		equ	1

; Emulated R/W memory pointers
MountSlot		equ	$C000
U8RAM			equ	MountSlot
U8RAMSize		equ	3584
U8SFR			equ	(U8RAM + U8RAMSize)
U8SFRSize		equ	256
U8VRAM			equ	(U8SFR + U8SFRSize)
U8VRAMSize		equ	512
U8Regs			equ	(U8VRAM + U8VRAMSize)
U8RegsSize		equ	39

; savestate-related equates
SizeFieldSize		equ	2
HeaderSize		equ	4
SaveSize		equ	(U8RAMSize + U8SFRSize + U8VRAMSize + U8RegsSize)
SaveRequired		equ	(15 + SizeFieldSize + HeaderSize + SaveSize)
WorkRAMSize		equ	SaveSize
WorkRAMRequired		equ	(15 + SizeFieldSize + HeaderSize + WorkRAMSize)

; savestate name/header definitions
SaveName:
	db	ti.AppVarObj
SaveHeader:
	db	"Emu8"
	db	"sav0"

; AppVar object's data structure:
; size field		2	bytes
; content		size	bytes

; AppVar object's VAT entry:
; Type			1	byte
; Type2			1	byte
; Version		1	byte
; Data pointer		2	bytes
; Page number		1	byte
; Name length		1	byte
; Name			NameLen	bytes

; So in my case I should call _EnoughMem with HL = SaveSize + 15 + 2

; Emu8sav0 uses 4395 bytes
; savestate		4395	bytes

; Savestate data structure below uses 4395 bytes

; Header "Emu8"		4	bytes
; RAM	$8000 - $8dff	3584	bytes
; SFR	$f000 - $f0ff	256	bytes
; VRAM	$f800 - $f9ff	512	bytes
; U8 registers		39	bytes
; R0		1
; R1		1
; R2		1
; R3		1
; R4		1
; R5		1
; R6		1
; R7		1
; R8		1
; R9		1
; R10		1
; R11		1
; R12		1
; R13		1
; R14		1
; R15		1

; PSW		1
; EPSW1		1
; EPSW2		1
; EPSW3		1

; SP		2

; CSR		1
; PC		2
; LCSR		1
; LR		2
; ECSR1		1
; ELR1		2
; ECSR2		1
; ELR2		2
; ECSR3		1
; ELR3		2

; EA		2
; AR is invisible to programmer. I will use HL instead.
; (Emu8sav0-specific)	1	bytes
;	raw keycode	1	byte