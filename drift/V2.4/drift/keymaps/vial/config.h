#pragma once

#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

#define OLED_FONT_H  "lib/glcdfont.c"

#ifdef AUDIO_ENABLE
#define MUSIC_MAP

#define STARTUP_SONG SONG(MARIO_MUSHROOM)
#define AUDIO_INIT_DELAY

#endif