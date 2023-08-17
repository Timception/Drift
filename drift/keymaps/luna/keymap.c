#include QMK_KEYBOARD_H
#include <stdio.h>
#include "drift.h"

// d e f i n e   l a y e r s

enum Layers {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

enum custom_keycodes {
    BASE,
    LOWER,
    RAISE,
    ADJUST
};

#define BASE MO(_QWERTY)
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ADJUST MO(_ADJUST)


// K E Y M A P 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 
   [_BASE] = LAYOUT(
 
    KC_DEL,  KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,    KC_4,   KC_5,                    KC_6,  KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    C(KC_C), ADJUST,  KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                    KC_Y,  KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                    KC_H,  KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,  KC_TRNS, KC_TRNS, KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RALT, KC_RCTL, KC_DEL,
	                                       KC_LSFT, KC_SPC, LOWER,                   RAISE, KC_SPC, KC_RSFT
 ),


   [_LOWER] = LAYOUT(

    QK_BOOT, KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,    KC_4,   KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_EQL,  QK_BOOT,
    C(KC_C), KC_TRNS, KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_UP,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,    KC_TRNS, KC_TRNS, KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT,
	                                       KC_LSFT, KC_SPC, KC_TRNS,                   KC_TRNS, KC_SPC, KC_RSFT
 ),
  

   [_RAISE] = LAYOUT(
 
    KC_DEL,  KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,    KC_4,   KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_WH_U, QK_BOOT,
    C(KC_C), KC_TRNS, KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_WH_D, KC_BTN2,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, KC_BTN1, KC_MS_U,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,    KC_TRNS, KC_TRNS, KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_MS_L, KC_MS_D, KC_MS_R,
	                                       KC_LSFT, KC_SPC, KC_TRNS,                   KC_TRNS, KC_SPC, KC_RSFT
 ),
 

   [_ADJUST] = LAYOUT(
 
    KC_TRNS, KC_ESC,  KC_GRV,  KC_1, KC_2, KC_3,    KC_4,   KC_5,                      KC_6,    KC_7,   KC_8,    KC_9,   KC_0,    KC_MINS, KC_WH_U, KC_BSPC,
    C(KC_C), KC_TRNS, KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_WH_D, KC_BTN2,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, KC_BTN1, KC_MS_U,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,    KC_TRNS, KC_TRNS, KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_MS_L, KC_MS_D, KC_MS_R,
	                                       KC_LSFT, KC_SPC, KC_TRNS,                   KC_TRNS, KC_SPC, KC_RSFT
 )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};