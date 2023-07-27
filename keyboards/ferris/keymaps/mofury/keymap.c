#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "keymap_german.h"

enum layers {
    BASE,
    NUM,
    SYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,            KC_J,    KC_L,    KC_U,    DE_Y,    XXXXXXX,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,            KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    DE_Z,    KC_X,    KC_C,    KC_D,    KC_V,            KC_K,    KC_H,    KC_COMM, KC_DOT,  XXXXXXX,
                              OSL(SYM), KC_SPC,          KC_ENT,  OSL(NUM)
  ),

  [NUM] = LAYOUT(
    _______, KC_4,    KC_5,    KC_6,    _______,         _______, DE_PIPE, DE_MINS, DE_SLSH, _______,
    DE_DOT,  KC_1,    KC_2,    KC_3,    _______,         _______, DE_QUOT, DE_UNDS, DE_EQL,  _______,
    DE_TILD, KC_7,    KC_8,    KC_9,    _______,         _______, DE_PLUS, DE_QUES, DE_EXLM, _______,
                               KC_0,    _______,         _______, _______
  ),

  [SYM] = LAYOUT(
    _______, DE_BSLS, DE_PERC, DE_DLR,  _______,         _______, DE_CIRC, DE_LCBR, DE_RCBR, _______,
    DE_ASTR, DE_LPRN, DE_RPRN, DE_COLN, _______,         _______, DE_DQUO, DE_LBRC, DE_RBRC, DE_SCLN,
    _______, DE_GRV,  DE_AT,   DE_AMPR, _______,         _______, DE_HASH, DE_LABK, DE_RABK, _______,
                               _______, _______,         _______, KC_ESC
  ),

};
