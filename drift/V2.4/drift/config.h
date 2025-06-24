/* Copyright (c) 2025 Timception

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */

#pragma once

#define DEBUG_MATRIX_SCAN_RATE


/* Serial settings */
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP0 //TX in Schematic
#define SERIAL_USE_MULTI_TRANSACTION


/* Communication between Sides: The PIO driver */
// The PIO subsystem is a Raspberry Pi RP2040 specific implementation,
// using the integrated PIO peripheral and is therefore only available on this MCU.
// Because of the flexible nature of the PIO peripherals, any GPIO pin can be used as a TX or RX pin.
#define SERIAL_PIO_USE_PIO1
// Half-duplex and Full-duplex operation is fully supported.
// The Half-duplex operation mode uses the built-in pull-ups and GPIO manipulation on the RP2040
// to drive the line high by default. An external pull-up is therefore not necessary.


/* Handedness https://docs.qmk.fm/features/split_keyboard */
// qmk flash -kb drift -km vial -bl uf2-split-left
// qmk flash -kb drift -km vial -bl uf2-split-left
//#define MASTER_LEFT
//#define MASTER_RIGHT
#define EE_HANDS


/* Detection and Watchdog */
// for rp2040 | When USB_VBUS_PIN is not defined, SPLIT_USB_DETECT is used.
//#undef SPLIT_USB_DETECT
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT_POLL 10
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000


/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* OLED Definitions */
#define I2C_DRIVER I2CD0
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13
#define OLED_DISPLAY_128X64

/* Audio Definitions */
#ifdef AUDIO_ENABLE
#	define AUDIO_PIN GP1
#	define AUDIO_PWM_DRIVER PWMD0
#	define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_B
#endif

//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define DEBOUNCE 5

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
