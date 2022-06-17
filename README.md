# Emu8_z80
A CASIO fx-ES PLUS series calculator emulator for TI-83 Plus series calculator.

## Introduction
NOTE: This program is still under developmenting.

The goal of this program is to emulate an Lapis LSI named ML610901, which is used by CASIO fx-ES PLUS series scientific calculators, on a TI-83 Plus series calculator.

Currently the target is only TI-83 Plus and its monochrome variants.

## Installing
*This project is still under developmenting*

Since the ROMs of CASIO fx-ES PLUS calculators are copyrighted by CASIO, I can't place ROM here and you need to build the application by yourself.

## Building
*This project is still under developmenting on and cannot be built currently*

You will need [fasmg](http://flatassembler.net/index.php) to build this application.

## Contributing
* If you are a user who has any question about this project, feel free to send me PMs on [Cemetech](https://www.cemetech.net) or open an issue here
* If you are a developer and wants to contribute to this project, just open an issue or a pull request
* Also check out [this post on Cemetech](http://ceme.tech/p298849)

## Special Thanks to...
* Zeroko for overall program structure
* calc84maniac for their look-up table idea
* Tari for variable/application data structure information
* fghsgh for helps on memory stuff, and fasmg information
* jacobly for [his fasmg header files](https://github.com/jacobly0/fasmg-z80)
* LogicalJoe for fasmg stuff
* Cemetech for providing such an amazing calculator community
* You for using this program

## Miscellaneous

### Current progress

* The vector table is finished
* Overall structure of the emulator had been worked out
* Some of the memory functions are tested to work
* Switched to fasmg
* Savestate functions and workRAM-related stuffs are working properly

### Copyrights

You can use **my** code for your non-commercial stuff as long as you keep a link to this repository.

You should ask the respective authors of these not-written-by-me code for permissions:
* fasmg_inc by [jacobly0](https://github.com/jacobly0/fasmg-z80)
* ti83plusg_.inc by fghsgh (in Cemetech chat)
* `CP HL, DE` routine by [calc84maniac](https://www.cemetech.net/forum/viewtopic.php?p=67697#67697)
* code for swapping two chunks of memory by jacobly0 (in Cemetech chat)

### Others
im not familiar with z80 assembly nor git nor github nor English pls do not blame me if i did silly things *sobs*