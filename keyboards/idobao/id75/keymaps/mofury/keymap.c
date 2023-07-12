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

enum {
    ADIA,
    ODIA,
    UDIA,
    EXLM,
    BSPC,
    TAB,
    PRN,
    BRC,
    CBR,
    ABK,
    DEL,
};

enum layer_names {
    ALPHA1 = 0,
    ALPHA1_CAPS,
    ALPHA2,
    ALPHA2_CAPS,
    NUM,
    SYM1,
    SYM2,
    SYS,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [ALPHA1] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_WH_D, KC_MS_U, KC_WH_U, _______, _______, _______, _______, _______, _______,
    _______, LCTL_T(KC_L), LALT_T(KC_G), LGUI_T(KC_D), _______, _______, KC_MS_L, KC_BTN1, KC_MS_R, _______, _______, RGUI_T(KC_H), LALT_T(KC_U), RCTL_T(KC_O),    _______,
    LT(NUM, KC_A), LT(SYM2, KC_R), LT(SYM1, KC_S), LT(SYS, KC_T), _______, _______, KC_MS_L, KC_BTN1, KC_MS_R, _______, _______, LT(SYS, KC_N), LT(SYM1, KC_E), LT(SYM2, KC_I), LT(NUM, KC_C),
    _______, _______, _______, KC_SPC, QK_REP, _______, KC_BTN1, KC_BTN2, KC_BTN2, _______, OSL(ALPHA1_CAPS), OSL(ALPHA2), _______, _______, _______
  ),

 [ALPHA2] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, LCTL_T(KC_V), LALT_T(KC_W), LGUI_T(KC_M), _______, _______, _______, _______, _______, _______, _______, RGUI_T(KC_F), DE_QUOT, RCTL_T(DE_Z),    _______,
    KC_Q,    KC_J,    KC_P,    KC_K,    _______, _______, _______, _______, _______, _______, _______, KC_B,    KC_DOT,  KC_X,    DE_Y,
    _______, _______, _______, OSL(ALPHA2_CAPS), _______, _______, _______, _______, _______, _______, _______, OSL(ALPHA2_CAPS), _______, _______, _______
  ),

 [ALPHA1_CAPS] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, LSFT(KC_L), LSFT(KC_G), LSFT(KC_D), _______, _______, _______, _______, _______, _______, _______, LSFT(KC_H), LSFT(KC_U), LSFT(KC_O), _______,
    LSFT(KC_A), LSFT(KC_S), LSFT(KC_R), LSFT(KC_T), _______, _______, _______, _______, _______, _______, _______, LSFT(KC_N), LSFT(KC_E), LSFT(KC_I), LSFT(KC_C),
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [ALPHA2_CAPS] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, LSFT(KC_V), LSFT(KC_W), LSFT(KC_M), _______, _______, _______, _______, _______, _______, _______, LSFT(KC_F), DE_DQUO, LSFT(DE_Z), _______,
    LSFT(KC_Q), LSFT(KC_J), LSFT(KC_P), LSFT(KC_K), _______, _______, _______, _______, _______, _______, _______, LSFT(KC_B), KC_COMM, LSFT(KC_X), LSFT(DE_Y),
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [NUM] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, LCTL_T(KC_DOT), LALT_T(KC_0), LGUI_T(KC_1), _______, _______, _______, _______, _______, _______, _______, RGUI_T(KC_2), LALT_T(KC_3), RCTL_T(KC_4),    _______,
    DE_MINS, DE_PLUS, KC_5,    KC_6,   _______, _______, _______, _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    DE_EQL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [SYM1] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, DE_PERC,  DE_HASH, DE_DLR, _______, _______, _______, _______, _______, _______, _______, TD(ABK), DE_RABK, DE_CIRC, _______,
    DE_GRV,  DE_TILD, DE_UNDS, DE_BSLS, _______, _______, _______, _______, _______, _______, _______, TD(BRC), DE_RBRC, DE_PIPE, DE_SLSH,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [SYM2] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, TD(ADIA), TD(ODIA), TD(UDIA), _______, _______, _______, _______, _______, _______, _______, TD(PRN), DE_RPRN, DE_SCLN, _______,
    DE_ASTR, DE_AT,   TD(EXLM), DE_DQUO, _______,  _______, _______, _______, _______, _______, _______, TD(CBR), DE_RCBR, DE_AMPR, DE_COLN,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

 [SYS] = LAYOUT_ortho_5x15(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, KC_ESC,  LSFT(LCTL(KC_TAB)), LCTL(KC_TAB), _______, _______, _______, QK_BOOT, _______, _______, _______, LCTL(KC_C), KC_UP, TD(BSPC), _______,
    TD(TAB), TD(DEL), KC_BTN4, KC_BTN5, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT,
    _______, _______, _______, TO(ALPHA1), _______, _______, _______, _______, _______, _______, OSM(MOD_LALT), OSM(MOD_LGUI), _______, _______, _______
  ),

};

tap_dance_action_t tap_dance_actions[] = {
    [ADIA] = ACTION_TAP_DANCE_DOUBLE(DE_ADIA, LSFT(DE_ADIA)),
    [ODIA] = ACTION_TAP_DANCE_DOUBLE(DE_ODIA, LSFT(DE_ODIA)),
    [UDIA] = ACTION_TAP_DANCE_DOUBLE(DE_UDIA, LSFT(DE_UDIA)),
    [EXLM] = ACTION_TAP_DANCE_DOUBLE(DE_EXLM, DE_QUES),
    [BSPC] = ACTION_TAP_DANCE_DOUBLE(KC_BSPC, KC_Q),
    [TAB] = ACTION_TAP_DANCE_DOUBLE(KC_TAB, LALT(KC_GRV)),
    [PRN] = ACTION_TAP_DANCE_DOUBLE(DE_LPRN, DE_RPRN),
    [BRC] = ACTION_TAP_DANCE_DOUBLE(DE_LBRC, DE_RBRC),
    [CBR] = ACTION_TAP_DANCE_DOUBLE(DE_LCBR, DE_RCBR),
    [ABK] = ACTION_TAP_DANCE_DOUBLE(DE_LABK, DE_RABK),
    [DEL] = ACTION_TAP_DANCE_DOUBLE(KC_DEL, KC_CAPS),
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
