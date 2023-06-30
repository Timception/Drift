/* Copyright 2023 MAJIN <@timception>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */
/*
#define VENDOR_ID       0x6D6A
#define PRODUCT_ID      0x5965
#define DEVICE_VER      0x0001
#define MANUFACTURER    MAJIN
#define PRODUCT         DRIFT
*/

/* Key Matrix Size */
// rows are doubled-up in split keyboards
#define MATRIX_COLS 8
#define MATRIX_ROWS 10
#define DIODE_DIRECTION COL2ROW

/* Wiring of Columns and Rows */
#define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9 }		// 8 Pins
#define MATRIX_ROW_PINS { GP10, GP11, GP14, GP15, GP26 }				// 5 Pins

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

/* External VBUS via 5V through diode to GP29 */
// for rp2040 | When USB_VBUS_PIN is not defined, SPLIT_USB_DETECT is used.
#undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP29

/* -==== Encoder Pins ====- */
#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP27 }
#define ENCODERS_PAD_A_RIGHT { GP27 }
#define ENCODERS_PAD_B_RIGHT { GP28 }

#define ENCODER_DIRECTION_FLIP
//#define ENCODER_RESOLUTION 4
//#define ENCODER_RESOLUTION 2
#define ENCODER_DEFAULT_POS 0x3

/* Split Definitions */
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_MODS_ENABLE

/* Serial settings */
#define USE_SERIAL
#define SOFT_SERIAL_PIN GP0
#define SERIAL_USE_MULTI_TRANSACTION
/* Communication between Sides: The PIO driver */
// The PIO subsystem is a Raspberry Pi RP2040 specific implementation,
// using the integrated PIO peripheral and is therefore only available on this MCU.
// Because of the flexible nature of the PIO peripherals, any GPIO pin can be used as a TX or RX pin.
#define SERIAL_PIO_USE_PIO1
// Half-duplex and Full-duplex operation is fully supported.
// The Half-duplex operation mode uses the built-in pull-ups and GPIO manipulation on the RP2040
// to drive the line high by default. An external pull-up is therefore not necessary.

/* Fix for the RP2040 Wake up bug - you can't enter BIOS with these enabled tho */
//#define SPLIT_USB_TIMEOUT 10000
//#define SPLIT_USB_TIMEOUT_POLL 10


/* OLED Definitions */
#define OLED_DISPLAY_128X64
#define OLED_FONT_H  "./lib/glcdfont.c"
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP12
#define I2C1_SCL_PIN GP13

//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define DEBOUNCE 5


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U