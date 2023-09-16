#pragma once

/* The way how "handedness" is decided (which half is which), see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness */
#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

#define MASTER_LEFT
//#define MASTER_RIGHT

#define OLED_FONT_H  "lib/glcdfont.c"

#ifdef AUDIO_ENABLE
	//#define DAC_SAMPLE_MAX 29565U // volume adjust doesn't seem to work.
	#define STARTUP_SONG SONG(MARIO_MUSHROOM)
#endif