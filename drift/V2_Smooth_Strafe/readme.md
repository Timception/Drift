# DRIFT Keyboard by Timception

DRIFT Keyboard is a 68-key Staggered Ortholinear Split Keyboard made by [Timception](https://github.com/timception).

It uses the RP2040-Zero, has two oleds and encoders.

Tested to be working with Vial 0.7.1

VIAL Firmware GUI can be found here:  [get.vial.today](https://get.vial.today/)

Quantum Mechanical Keyboard Firmware (VIAL Version) - [QMK fork with Vial-specific features](https://github.com/vial-kb/vial-qmk)

=====================================================================

Use this command line to flash the left side:
qmk flash -kb keyboard/folder/location -km vial -bl uf2-split-left



Use this command line to flash the right side:
qmk flash -kb keyboard/folder/location -km vial -bl uf2-split-right