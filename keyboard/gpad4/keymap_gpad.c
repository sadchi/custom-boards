#include "keymap_common.h"


const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_GPAD(
        ESC, 1,   2,   3,   4,   5,  \
        TAB, Q,   W,   E,   R,   T,  \
        LSFT,A,   S,   D,   F,   G,  \
                            V,   B,  \
                    LCTL,LGUI,LALT,),
