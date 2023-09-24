#pragma once

/* The way how "handedness" is decided (which half is which), see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness */
#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

//Flip the toggle switch up to MSTR (master state) when flashing each side individually (remove the 3.5mm cable before flashing firmware).
//After done flashing each side, switch the slave half's toggle switch down to SLV (slave) before use.
//#define MASTER_LEFT
#define MASTER_RIGHT

#define OLED_FONT_H  "lib/glcdfont.c"

#ifdef AUDIO_ENABLE
#define MUSIC_MAP
//#define DAC_SAMPLE_MAX 29565U // volume adjust doesn't seem to work.
//#define STARTUP_SONG SONG(PREONIC_SOUND)
#define STARTUP_SONG SONG(MARIO_MUSHROOM)
#define AUDIO_INIT_DELAY

#endif