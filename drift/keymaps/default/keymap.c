#include QMK_KEYBOARD_H
#include <stdio.h>
#include "drift.h"

// d e f i n e   l a y e r s

enum Layers {
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};



// K E Y M A P 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 
   [_QWERTY] = LAYOUT(
 
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
          KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
	                              KC_R, KC_T, KC_Y,             KC_U, KC_I, KC_O
 ),


   [_LOWER] = LAYOUT(

    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
          KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
	                              KC_R, KC_T, KC_Y,             KC_U, KC_I, KC_O
 ),
  

   [_RAISE] = LAYOUT(
 
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
          KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
	                              KC_R, KC_T, KC_Y,             KC_U, KC_I, KC_O
 ),
 

   [_ADJUST] = LAYOUT(
 
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
          KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T,             KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P,
    KC_Q, KC_W, KC_E, KC_R, KC_T, KC_E, KC_R, KC_T, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_I, KC_O, KC_P, KC_P,
	                              KC_R, KC_T, KC_Y,             KC_U, KC_I, KC_O
 )
};



#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("One\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Two\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Three\n"), false);
            break;
		case 3:
            oled_write_P(PSTR("Four\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};