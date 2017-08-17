#include "keymap_common.h"


#define KEYMAP_GPAD4( \
    K00, K01, K02, K03, K04, K05, \
    K10, K11, K12, K13, K14, K15, \
    K20, K21, K22, K23, K24, K25, \
    K30, K31, \
    K40, K41, K42 \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05}, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15}, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25}, \
    { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_##K30, KC_##K31}, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##K40, KC_##K41, KC_##K42}  \
}

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_GPAD4(
        ESC,   1,    2, 3, 4,  5,   \
        TAB,   Q,    W, E, R,  T,   \
        LALT,  A,    S, D, F,  G,   \
        SPC,   BSPC, \
        N,     M,    LCTL),
};

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};