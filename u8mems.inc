#ifndef U8MEMS_INC_INCLUDED

#define U8MEMS_INC_INCLUDED
; tempSwapArea:
;		U8 registers	39 bytes
;		save pointers	16 bytes
;				268 bytes left
U8regs		.equ	tempSwapArea
saveTable	.equ	tempSwapArea + 39

; appBackUpScreen reserved for custom ISR and variable-related stuff.
;		U8 RAM ptr	2 bytes
;		free space	36 bytes
;	$9898	custom ISR	0 bytes
;		vector table	257 bytes
;				473 bytes left
pU8RAM		.equ	appBackUpScreen
ISR		.equ	$9898

; saveSScreen:
;		U8 SFRs		256 bytes
;		U8 VRAM		512 bytes
;				0 bytes left
U8SFR		.equ	saveSScreen
U8VRAM		.equ	saveSScreen + 256

#endif