#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_GPAD4(
        ESC,  1,    2, 3, 4,  5   \
        TAB,  Q,    W, E, R,  T,  \
        ALT,  A,    S, D, F,  G,  \
        SPC,  BSPC, \
        N,    M,    LCTL,
    )
};


const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};