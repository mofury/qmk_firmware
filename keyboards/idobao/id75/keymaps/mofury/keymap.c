/* Copyright 2023 mofury
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"
#include "keymap_german.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [0] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_W,    KC_F,    KC_P,    KC_B,    _______, _______, _______, _______, _______, KC_J,    KC_L,    KC_U,    DE_Y,    _______,
    KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    _______, _______, _______, _______, _______, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,
    QK_REP,  KC_X,    KC_C,    KC_D,    KC_V,    _______, _______, _______, _______, _______, KC_K,    KC_H,    KC_COMM, KC_DOT,  QK_AREP,
    _______, _______, OSM(MOD_LGUI), OSL(2), KC_SPC, _______, _______, _______, _______, _______, KC_ENT, OSL(1), OSM(MOD_RALT), _______, _______
  ),

 [1] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_4,    KC_5,    KC_6,    DE_UDIA, _______, _______, _______, _______, _______, _______, DE_PIPE, DE_MINS, DE_SLSH, _______,
    KC_DOT,  KC_1,    KC_2,    KC_3,    DE_ODIA, _______, _______, _______, _______, _______, DE_SS,   DE_QUOT, DE_UNDS, DE_EQL,  OSL(3),
    DE_TILD, KC_7,    KC_8,    KC_9,    DE_ADIA, _______, _______, _______, _______, _______, _______, DE_PLUS, DE_QUES, DE_EXLM, _______,
    _______, _______, _______, KC_0,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [2] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______,
    _______, DE_BSLS, DE_PERC, DE_DLR,  _______, _______, _______, _______, _______, _______, S(DE_UDIA), DE_CIRC, DE_LCBR, DE_RCBR, _______,
    DE_ASTR, DE_LPRN, DE_RPRN, DE_COLN, DE_SS,   _______, _______, _______, _______, _______, S(DE_ODIA), DE_DQUO, DE_LBRC, DE_RBRC, DE_SCLN,
    _______, DE_GRV,  DE_AT,   DE_AMPR, _______, _______, _______, _______, _______, _______, S(DE_ADIA), DE_HASH, DE_LABK, DE_RABK, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    KC_ESC,  _______, _______, _______
  ),

 [3] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    QK_MAKE, KC_F4,   KC_F5,   KC_F6,   KC_F10,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F11,  _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
    QK_BOOT, KC_F7,   KC_F8,   KC_F9,   KC_F12,  _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with Shift
        case KC_A ... KC_Z:
        case DE_ADIA:
        case DE_ODIA:
        case DE_UDIA:
        case DE_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;

        // Keycodes that continu Caps Word, without Shift
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case DE_UNDS:
        case DE_SS:
            return true;

        default:
            return false;
    }
}
