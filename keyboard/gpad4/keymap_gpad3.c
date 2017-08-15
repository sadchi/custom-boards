#include "keymap_common.h"

#define KEYMAP_GPAD3( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
    K20, K21, K22, K23, K24, \
    K30, K31, K32, K33, K34, K35, \
    K40, K41, K42, K43, K44, K45  \
) { \
    { KC_##K00, KC_NO,    KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_NO   }, \
    { KC_NO,    KC_NO,    KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14}, \
    { KC_NO,    KC_NO,    KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24}, \
    { KC_##K30, KC_##K31, KC_##K32, KC_##K33, KC_##K34, KC_##K35, KC_NO   }, \
    { KC_##K40, KC_##K41, KC_NO,    KC_##K42, KC_##K43, KC_##K44, KC_##K45}  \
}




const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_GPAD3(
        ESC  , F1   , F2 , F3 , F4   , \
        1    , 2    , 3  , 4  , T    , \
        Q    , W    , E  , R  , BSPC , \
        TAB  , Z    , A  , S  , D    , F    , \
        LSFT , LALT , N  , M  , LCTL , SPC) ,};


const action_t PROGMEM fn_actions[] = {
   [0] = ACTION_LAYER_MOMENTARY(1),
};