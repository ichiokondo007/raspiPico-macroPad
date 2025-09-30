#include QMK_KEYBOARD_H
enum layers { _BASE, _FN };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q, KC_W, KC_E,
    KC_A, KC_S, KC_D,
    KC_Z, KC_X, MO(_FN)
  ),
  [_FN] = LAYOUT(
    KC_1, KC_2, KC_3,
    KC_4, KC_5, KC_6,
    KC_7, KC_8, KC_TRNS
  )
};
