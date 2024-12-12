/* Copyright 2023
 * MAJIN @timception
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

//#pragma once
#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/*
// readability
#define ___ KC_NO

// |SW01|SW02|SW03|SW04|SW05|SW06|SW07|SW08|            |SW08|SW07|SW06|SW05|SW04|SW03|SW02|SW01|
// |SW09|SW10|SW11|SW12|SW13|SW14|SW15|SW16|            |SW16|SW15|SW14|SW13|SW12|SW11|SW10|SW09| 
//      |SW17|SW18|SW19|SW20|SW21|SW22|SW23|            |SW23|SW22|SW21|SW20|SW19|SW18|SW17|
// |SW24|SW25|SW26|SW27|SW28|SW29|SW30|SW31|SW35|  |SW35|SW31|SW30|SW29|SW28|SW27|SW26|SW25|SW24|
//                          |SW32|SW33|SW34|            |SW34|SW33|SW32|

#define LAYOUT_8x5( \
    L00, L01, L02, L03, L04, L05, L06, L07,           R00, R01, R02, R03, R04, R05, R06, R07,     \
    L10, L11, L12, L13, L14, L15, L16, L17,           R10, R11, R12, R13, R14, R15, R16, R17,     \
         L21, L22, L23, L24, L25, L26, L27,           R20, R21, R22, R23, R24, R25, R26,          \
	L30, L31, L32, L33, L34, L35, L36, L37, L47, R40, R30, R31, R32, R33, R34, R35, R36, R37,     \
                             L44, L45, L46,           R41, R42, R43     \
    )                                                             \
    {                                                             \
        { L00,   L01,   L02,   L03,   L04,   L05,   L06,   L07 }, \
        { L10,   L11,   L12,   L13,   L14,   L15,   L16,   L17 }, \
        { ___,   L21,   L22,   L23,   L24,   L25,   L26,   L27 }, \
        { L30,   L31,   L32,   L33,   L34,   L35,   L36,   L37 }, \
		{ ___,   ___,   ___,   ___,   L44,   L45,   L46,   L47 }, \
        { R07,   R06,   R05,   R04,   R03,   R02,   R01,   R00 }, \
        { R17,   R16,   R15,   R14,   R13,   R12,   R11,   R10 }, \
        { ___,   R26,   R25,   R24,   R23,   R22,   R21,   R20 }, \
        { R37,   R36,   R35,   R34,   R33,   R32,   R31,   R30 }, \
		{ ___,   ___,   ___,   ___,   R43,   R42,   R41,   R40 }, \
    }


#define LAYOUT LAYOUT_8x5
*/