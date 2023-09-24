#pragma once

/* The way how "handedness" is decided (which half is which), see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness */
#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

#define MASTER_LEFT
//#define MASTER_RIGHT

#define SPLIT_MODS_ENABLE
#define SPLIT_LED_STATE_ENABLE
#define SPLIT_LAYER_STATE_ENABLE

/* OLED Stuff: Bongo, Luna etc. */
#define OLED_FONT_H "oled/oledfont.c"
#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4

#define LAYER_STATE_8BIT