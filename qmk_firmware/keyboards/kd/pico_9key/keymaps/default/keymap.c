// Copyright kd keybord

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ q │ w │ e │
     * ├───┼───┼───┤
     * │ a │ s │ d │
     * ├───┼───┼───┤
     * │ z │ x │ c │
     * └───┴───┴───┘
     */
  [0] = LAYOUT(
    KC_Q, KC_W, KC_E,
    KC_A, KC_S, KC_D,
    KC_Z, KC_X, KC_C
  )
};

