#include QMK_KEYBOARD_H
#include <stdio.h>
#include "drift.h"

#ifdef AUDIO_ENABLE
  #include "audio.h"
#endif

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
    ADJUST,
	QMKSONG1 = SAFE_RANGE,
    QMKSONG2,
    QMKSONG3,
    QMKSONG4,
	QMKSONG5,
	QMKSONG6,
	QMKSONG7,
	QMKSONG8,
	QMKSONG9,
	QMKSONG10,
	QMKSONG11,
    QMKSONG12,
    QMKSONG13,
    QMKSONG14,
	QMKSONG15,
	QMKSONG16,
	QMKSONG17,
	QMKSONG18,
	QMKSONG19,
	QMKSONG20,
	QMKSONG21,
    QMKSONG22,
    QMKSONG23,
    QMKSONG24,
	QMKSONG25,
	QMKSONG26,
	QMKSONG27,
	QMKSONG28,
	QMKSONG29,
	QMKSONG30,
	QMKSONG31,
    QMKSONG32,
    QMKSONG33,
    QMKSONG34,
	QMKSONG35,
	QMKSONG36,
	QMKSONG37,
	QMKSONG38,
	QMKSONG39,
	QMKSONG40,
	QMKSONG41,
    QMKSONG42
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
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B, MU_TOGG, KC_MUTE,  KC_N,  KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RALT, KC_RCTL, KC_DEL,
	                                       KC_LSFT, KC_SPC, LOWER,                   RAISE, KC_SPC, KC_RSFT
 ),


   [_LOWER] = LAYOUT(

    QK_BOOT, KC_ESC,  KC_GRV,  KC_F1,KC_F2,KC_F3,   KC_F4,  KC_F5,                     KC_F6,   KC_F8,  KC_F9,   KC_F10, KC_F11,  KC_F12,  KC_EQL,  QK_BOOT,
    C(KC_C), KC_TRNS, KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_UP,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,   MU_NEXT, KC_TRNS,  KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT,
	                                       KC_LSFT, KC_SPC, KC_TRNS,                   KC_TRNS, KC_SPC, KC_RSFT
 ),
  

   [_RAISE] = LAYOUT(
 
    KC_DEL,  KC_ESC,  KC_GRV,  KC_F1,KC_F2,KC_F3,   KC_F4,  KC_F5,                     KC_F6,   KC_F8,  KC_F9,   KC_F10, KC_F11,  KC_F12,  KC_WH_U, QK_BOOT,
    C(KC_C), KC_TRNS, KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,   KC_T,                      KC_Y,    KC_U,   KC_I,    KC_O,   KC_P,    KC_LBRC, KC_WH_D, KC_BTN2,
             KC_LGUI, KC_CAPS, KC_A, KC_S, KC_D,    KC_F,   KC_G,                      KC_H,    KC_J,   KC_K,    KC_L,   KC_SCLN, KC_BTN1, KC_MS_U,
    C(KC_V), KC_LCTL, KC_LALT, KC_Z, KC_X, KC_C,    KC_V,   KC_B,    KC_TRNS, KC_TRNS, KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_MS_L, KC_MS_D, KC_MS_R,
	                                       KC_LSFT, KC_SPC, KC_TRNS,                   KC_TRNS, KC_SPC, KC_RSFT
 ),
 

   [_ADJUST] = LAYOUT(
 
    KC_TRNS, KC_ESC,  KC_GRV,  QMKSONG1, QMKSONG2, QMKSONG3, QMKSONG4, QMKSONG5,                   QMKSONG6, QMKSONG7, QMKSONG8, QMKSONG9, QMKSONG10,KC_MINS,  KC_WH_U,  KC_BSPC,
    C(KC_C), KC_TRNS, KC_TAB,  QMKSONG11,QMKSONG12,QMKSONG13,QMKSONG14,QMKSONG15,                  QMKSONG16,QMKSONG17,QMKSONG18,QMKSONG19,QMKSONG20,KC_LBRC,  KC_WH_D,  KC_BTN2,
             KC_LGUI, KC_CAPS, QMKSONG21,QMKSONG22,QMKSONG23,QMKSONG24,QMKSONG25,                  QMKSONG26,QMKSONG27,QMKSONG28,QMKSONG29,QMKSONG30,KC_BTN1,  KC_MS_U,
    C(KC_V), KC_LCTL, KC_LALT, QMKSONG31,QMKSONG32,QMKSONG33,QMKSONG34,QMKSONG35, AU_TOGG, KC_TRNS,QMKSONG36,QMKSONG37,QMKSONG38,QMKSONG39,QMKSONG40,QMKSONG41,QMKSONG42,KC_MS_R,
	                                               KC_LSFT,  KC_SPC,   KC_TRNS,                    KC_TRNS,  KC_SPC,   KC_RSFT
 )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_WH_D, KC_WH_U) },
    [2] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
	//return OLED_ROTATION_90; // Long Vertical Screen - old version
	return OLED_ROTATION_180; // Horizontal Screen
}

bool oled_task_user(void) {
    // Host Keyboard Layer Status

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("   LAYER\n\n    ONE\n\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("   LAYER\n\n    TWO\n\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("   LAYER\n\n   THREE\n\n"), false);
            break;
		case _ADJUST:
            oled_write_P(PSTR("   LAYER\n\n    FOUR\n\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR(" NUM") : PSTR("   "), false);
    oled_write_P(led_state.caps_lock ? PSTR(" CAP") : PSTR("   "), false);
    oled_write_P(led_state.scroll_lock ? PSTR(" SCR") : PSTR("   "), false);
    
    return false;
}
#endif

#ifdef AUDIO_ENABLE
// Button Effects
float caps1[][2] = SONG(CAPS_LOCK_ON_SOUND);
float caps0[][2] = SONG(CAPS_LOCK_OFF_SOUND);
float lower1[][2] = SONG(QWERTY_SOUND);
float lower0[][2] = SONG(SCROLL_LOCK_OFF_SOUND);
float raise1[][2] = SONG(COLEMAK_SOUND);
float raise0[][2] = SONG(NUM_LOCK_OFF_SOUND);
float adjust1[][2] = SONG(DVORAK_SOUND);
float adjust0[][2] = SONG(TERMINAL_SOUND);
//float something1[][2] = SONG(IN_LIKE_FLINT);
//float something0[][2] = SONG(IMPERIAL_MARCH);

// Tunes on Layer 4
float song1[][2] = SONG(CLOSE_ENCOUNTERS_5_NOTE);
float song2[][2] = SONG(DOE_A_DEER);
float song3[][2] = SONG(IN_LIKE_FLINT);
float song4[][2] = SONG(IMPERIAL_MARCH);
float song5[][2] = SONG(BASKET_CASE);
float song6[][2] = SONG(COIN_SOUND);
float song7[][2] = SONG(ONE_UP_SOUND);
float song8[][2] = SONG(SONIC_RING);
float song9[][2] = SONG(ZELDA_PUZZLE);
float song10[][2] = SONG(ZELDA_TREASURE);
float song11[][2] = SONG(OVERWATCH_THEME);
float song12[][2] = SONG(MARIO_THEME);
float song13[][2] = SONG(MARIO_GAMEOVER);
float song14[][2] = SONG(MARIO_MUSHROOM);
float song15[][2] = SONG(E1M1_DOOM);
float song16[][2] = SONG(DISNEY_SONG);
float song17[][2] = SONG(NUMBER_ONE);
float song18[][2] = SONG(CABBAGE_SONG);
float song19[][2] = SONG(OLD_SPICE);
float song20[][2] = SONG(VICTORY_FANFARE_SHORT);
float song21[][2] = SONG(ALL_STAR);
float song22[][2] = SONG(RICK_ROLL);
float song23[][2] = SONG(FF_PRELUDE);
float song24[][2] = SONG(TO_BOLDLY_GO);
float song25[][2] = SONG(KATAWARE_DOKI);
float song26[][2] = SONG(MEGALOVANIA);
float song27[][2] = SONG(MICHISHIRUBE);
float song28[][2] = SONG(LIEBESLEID);
float song29[][2] = SONG(MELODIES_OF_LIFE);
float song30[][2] = SONG(EYES_ON_ME);
float song31[][2] = SONG(SONG_OF_THE_ANCIENTS);
float song32[][2] = SONG(NIER_AMUSEMENT_PARK);
float song33[][2] = SONG(COPIED_CITY);
float song34[][2] = SONG(VAGUE_HOPE_COLD_RAIN);
float song35[][2] = SONG(KAINE_SALVATION);
float song36[][2] = SONG(WEIGHT_OF_THE_WORLD);
float song37[][2] = SONG(ISABELLAS_LULLABY);
float song38[][2] = SONG(TERRAS_THEME);
float song39[][2] = SONG(RENAI_CIRCULATION);
float song40[][2] = SONG(PLATINUM_DISCO);
float song41[][2] = SONG(TOS_HYMN_RISEN);
float song42[][2] = SONG(NOCTURNE_OP_9_NO_1);


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
		case KC_LSFT:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(caps1);
            } else {
                // when keycode QMKSONG3 is released
				PLAY_SONG(caps0);
            }
            break;
		case KC_RSFT:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(caps1);
            } else {
                // when keycode QMKSONG3 is released
				PLAY_SONG(caps0);
            }
            break;
		case KC_CAPS:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(caps1);
            } else {
                // when keycode QMKSONG3 is released
				PLAY_SONG(caps0);
            }
            break;
		case LOWER:
            if (record->event.pressed) {
                // when keycode QMKSONG1 is pressed
                PLAY_SONG(adjust0);
            } else {
                // when keycode QMKSONG1 is released
				PLAY_SONG(lower0);
            }
            break;
        case RAISE:
            if (record->event.pressed) {
                // when keycode QMKSONG2 is pressed
                PLAY_SONG(adjust0);
            } else {
                // when keycode QMKSONG2 is released
				PLAY_SONG(lower0);
            }
            break;
        case ADJUST:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(adjust0);
            } else {
                // when keycode QMKSONG3 is released
				PLAY_SONG(lower0);
            }
            break;
			
        case QMKSONG1:
            if (record->event.pressed) {
                // when keycode QMKSONG1 is pressed
                PLAY_SONG(song1);
            } else {
                // when keycode QMKSONG1 is released
            }
            break;
        case QMKSONG2:
            if (record->event.pressed) {
                // when keycode QMKSONG2 is pressed
                PLAY_SONG(song2);
            } else {
                // when keycode QMKSONG2 is released
            }
            break;
        case QMKSONG3:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(song3);
            } else {
                // when keycode QMKSONG3 is released
            }
            break;
        case QMKSONG4:
            if (record->event.pressed) {
                // when keycode QMKSONG4 is pressed
                PLAY_SONG(song4);
            } else {
                // when keycode QMKSONG4 is released
            }
            break;
        case QMKSONG5:
            if (record->event.pressed) {
                // when keycode QMKSONG5 is pressed
                PLAY_SONG(song5);
            } else {
                // when keycode QMKSONG5 is released
            }
            break;
        case QMKSONG6:
            if (record->event.pressed) {
                // when keycode QMKSONG6 is pressed
                PLAY_SONG(song6);
            } else {
                // when keycode QMKSONG6 is released
            }
            break;
        case QMKSONG7:
            if (record->event.pressed) {
                // when keycode QMKSONG7 is pressed
                PLAY_SONG(song7);
            } else {
                // when keycode QMKSONG7 is released
            }
            break;
        case QMKSONG8:
            if (record->event.pressed) {
                // when keycode QMKSONG8 is pressed
                PLAY_SONG(song8);
            } else {
                // when keycode QMKSONG8 is released
            }
            break;
        case QMKSONG9:
            if (record->event.pressed) {
                // when keycode QMKSONG9 is pressed
                PLAY_SONG(song9);
            } else {
                // when keycode QMKSONG9 is released
            }
            break;
        case QMKSONG10:
            if (record->event.pressed) {
                // when keycode QMKSONG10 is pressed
                PLAY_SONG(song10);
            } else {
                // when keycode QMKSONG10 is released
            }
            break;
        case QMKSONG11:
            if (record->event.pressed) {
                // when keycode QMKSONG11 is pressed
                PLAY_SONG(song11);
            } else {
                // when keycode QMKSONG11 is released
            }
            break;
        case QMKSONG12:
            if (record->event.pressed) {
                // when keycode QMKSONG12 is pressed
                PLAY_SONG(song12);
            } else {
                // when keycode QMKSONG12 is released
            }
            break;
        case QMKSONG13:
            if (record->event.pressed) {
                // when keycode QMKSONG13 is pressed
                PLAY_SONG(song13);
            } else {
                // when keycode QMKSONG13 is released
            }
            break;
        case QMKSONG14:
            if (record->event.pressed) {
                // when keycode QMKSONG14 is pressed
                PLAY_SONG(song14);
            } else {
                // when keycode QMKSONG14 is released
            }
            break;
        case QMKSONG15:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song15);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG16:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song16);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG17:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song17);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG18:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song18);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG19:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song19);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG20:
            if (record->event.pressed) {
                // when keycode QMKSONG15 is pressed
                PLAY_SONG(song20);
            } else {
                // when keycode QMKSONG15 is released
            }
            break;
		case QMKSONG21:
            if (record->event.pressed) {
                // when keycode QMKSONG1 is pressed
                PLAY_SONG(song21);
            } else {
                // when keycode QMKSONG1 is released
            }
            break;
        case QMKSONG22:
            if (record->event.pressed) {
                // when keycode QMKSONG2 is pressed
                PLAY_SONG(song22);
            } else {
                // when keycode QMKSONG2 is released
            }
            break;
        case QMKSONG23:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(song23);
            } else {
                // when keycode QMKSONG3 is released
            }
            break;
        case QMKSONG24:
            if (record->event.pressed) {
                // when keycode QMKSONG4 is pressed
                PLAY_SONG(song24);
            } else {
                // when keycode QMKSONG4 is released
            }
            break;
        case QMKSONG25:
            if (record->event.pressed) {
                // when keycode QMKSONG5 is pressed
                PLAY_SONG(song25);
            } else {
                // when keycode QMKSONG5 is released
            }
            break;
        case QMKSONG26:
            if (record->event.pressed) {
                // when keycode QMKSONG6 is pressed
                PLAY_SONG(song26);
            } else {
                // when keycode QMKSONG6 is released
            }
            break;
        case QMKSONG27:
            if (record->event.pressed) {
                // when keycode QMKSONG7 is pressed
                PLAY_SONG(song27);
            } else {
                // when keycode QMKSONG7 is released
            }
            break;
        case QMKSONG28:
            if (record->event.pressed) {
                // when keycode QMKSONG8 is pressed
                PLAY_SONG(song28);
            } else {
                // when keycode QMKSONG8 is released
            }
            break;
        case QMKSONG29:
            if (record->event.pressed) {
                // when keycode QMKSONG9 is pressed
                PLAY_SONG(song29);
            } else {
                // when keycode QMKSONG9 is released
            }
            break;
		case QMKSONG30:
            if (record->event.pressed) {
                // when keycode QMKSONG9 is pressed
                PLAY_SONG(song30);
            } else {
                // when keycode QMKSONG9 is released
            }
            break;
		case QMKSONG31:
            if (record->event.pressed) {
                // when keycode QMKSONG1 is pressed
                PLAY_SONG(song31);
            } else {
                // when keycode QMKSONG1 is released
            }
            break;
        case QMKSONG32:
            if (record->event.pressed) {
                // when keycode QMKSONG2 is pressed
                PLAY_SONG(song32);
            } else {
                // when keycode QMKSONG2 is released
            }
            break;
        case QMKSONG33:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(song33);
            } else {
                // when keycode QMKSONG3 is released
            }
            break;
        case QMKSONG34:
            if (record->event.pressed) {
                // when keycode QMKSONG4 is pressed
                PLAY_SONG(song34);
            } else {
                // when keycode QMKSONG4 is released
            }
            break;
        case QMKSONG35:
            if (record->event.pressed) {
                // when keycode QMKSONG5 is pressed
                PLAY_SONG(song35);
            } else {
                // when keycode QMKSONG5 is released
            }
            break;
        case QMKSONG36:
            if (record->event.pressed) {
                // when keycode QMKSONG6 is pressed
                PLAY_SONG(song36);
            } else {
                // when keycode QMKSONG6 is released
            }
            break;
        case QMKSONG37:
            if (record->event.pressed) {
                // when keycode QMKSONG7 is pressed
                PLAY_SONG(song37);
            } else {
                // when keycode QMKSONG7 is released
            }
            break;
        case QMKSONG38:
            if (record->event.pressed) {
                // when keycode QMKSONG8 is pressed
                PLAY_SONG(song38);
            } else {
                // when keycode QMKSONG8 is released
            }
            break;
        case QMKSONG39:
            if (record->event.pressed) {
                // when keycode QMKSONG9 is pressed
                PLAY_SONG(song39);
            } else {
                // when keycode QMKSONG9 is released
            }
            break;
        case QMKSONG40:
            if (record->event.pressed) {
                // when keycode QMKSONG10 is pressed
                PLAY_SONG(song40);
            } else {
                // when keycode QMKSONG10 is released
            }
            break;
		case QMKSONG41:
            if (record->event.pressed) {
                // when keycode QMKSONG10 is pressed
                PLAY_SONG(song41);
            } else {
                // when keycode QMKSONG10 is released
            }
            break;
		case QMKSONG42:
            if (record->event.pressed) {
                // when keycode QMKSONG10 is pressed
                PLAY_SONG(song42);
            } else {
                // when keycode QMKSONG10 is released
            }
            break;
    }

    return true;
}

const uint8_t music_map[MATRIX_ROWS][MATRIX_COLS] = LAYOUT_8x5(	 
	54, 55, 56, 57, 58, 59, 60, 61,         62, 63, 64, 65, 66, 67, 68, 69,
	38, 39, 40, 41, 42, 43, 44, 45,         46, 47, 48, 49, 50, 51, 52, 53,
	    24, 25, 26, 27, 28, 29, 30,         31, 32, 33, 34, 35, 36, 37,
	 8,  9, 10, 11, 12, 13, 14, 15,         16, 17, 18, 19, 20, 21, 22, 23,
	                 0,  1,  2,  3,          4,  5,  6,  7
);

#endif