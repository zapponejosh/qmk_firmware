#include QMK_KEYBOARD_H

#define _NP 0
#define _BL 1

enum custom_keycodes {
  NP = SAFE_RANGE,
  BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty */

  [_NP] = LAYOUT_ortho_6x4(
    KC_1,  KC_2,  KC_3, MO(_BL),
    KC_4, KC_5, KC_6, KC_7,
    KC_8,   KC_9,   KC_0,   KC_A,
    KC_B,   KC_C,   KC_D,   KC_E,
    KC_F,   KC_G,   KC_H,   KC_I,
    KC_J,   KC_K,  KC_L, KC_M
  ),

  [_BL] = LAYOUT_ortho_6x4(
    _______, _______, _______, _______,
    _______, _______, _______, _______,
    _______, BL_ON,   _______, BL_INC,
    _______, BL_TOGG, _______, BL_INC,
    _______, BL_OFF,  _______, BL_DEC,
    BL_BRTG, _______, _______, BL_DEC
  )

};
