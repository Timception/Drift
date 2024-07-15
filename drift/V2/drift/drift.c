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

//#include "drift.h"
#include "quantum.h"


/* this section still needs work
#ifdef SWAP_HANDS_ENABLE

__attribute__ ((weak))
const keypos_t PROGMEM hand_swap_config[MATRIX_ROWS][MATRIX_COLS] =
    // The LAYOUT macro could work for this, but it was harder to figure out the
    // identity using it.

    // This is the identity layout.

{ \
 { {0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}, {6, 0}, {7, 0} }, \
 { {0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}, {6, 1}, {7, 1} }, \
 {         {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}, {6, 2}, {7, 2} }, \
 { {0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}, {6, 3}, {7, 3} }, \
 {                                 {4, 4}, {5, 4}, {6, 4}, {7, 4} }, \
    \
 { {0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}, {6, 5}, {7, 5} }, \
 { {0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}, {6, 6}, {7, 6} }, \
 {         {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}, {6, 7}, {7, 7} }, \
 { {0, 8}, {1, 8}, {2, 8}, {3, 8}, {4, 8}, {5, 8}, {6, 8}, {7, 8} }, \
 {                                 {4, 9}, {5, 9}, {6, 9}, {7, 9},   \
};
*/

    // This is the mirror, q <-> p, w <-> o, etc...
/*	
	
{ \
 { {7, 5}, {6, 5}, {5, 5}, {4, 5}, {3, 5}, {2, 5}, {1, 5}, {0, 5} }, \
 { {7, 6}, {6, 6}, {5, 6}, {4, 6}, {3, 6}, {2, 6}, {1, 6}, {0, 6} }, \
 { {7, 7}, {6, 7}, {5, 7}, {4, 7}, {3, 7}, {2, 7}, {1, 7}         }, \
 { {7, 8}, {6, 8}, {5, 8}, {4, 8}, {3, 8}, {2, 8}, {1, 8}, {0, 8} }, \
 { {7, 9}, {6, 9}, {5, 9}, {4, 9}                                 }, \
                                             \
 { {7, 0}, {6, 0}, {5, 0}, {4, 0}, {3, 0}, {2, 0}, {1, 0}, {0, 0} }, \
 { {7, 1}, {6, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}, {1, 1}, {0, 1} }, \
 { {7, 2}, {6, 2}, {5, 2}, {4, 2}, {3, 2}, {2, 2}, {1, 2}         }, \
 { {7, 3}, {6, 3}, {5, 3}, {4, 3}, {3, 3}, {2, 3}, {1, 3}, {0, 3} },
 { {7, 4}, {6, 4}, {5, 4}, {4, 4}                                 }, \
};

#    ifdef ENCODER_MAP_ENABLE
const uint8_t PROGMEM encoder_hand_swap_config[NUM_ENCODERS] = {1, 0};
#    endif

#endif //SWAP_HANDS_ENABLE

*/


void suspend_power_down_kb(void) {
    //rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    //rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}



