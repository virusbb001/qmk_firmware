#include QMK_KEYBOARD_H
#include "keymap_jp.h"

extern keymap_config_t keymap_config;

#define TAPPING_TOGGLE 3

#define BASE 0
#define GAME 1
#define SYMB 2
#define ADJUST 3
#define NUMBER 4
#define SWAP_CTRLCAPS 5
#define MOD_KEYMAP 6


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BASE] = LAYOUT( \
    KC_ESC,      KC_Q,       KC_W,     KC_E,    KC_R,    KC_T,   XXXXXXX,        XXXXXXX,    KC_Y,   KC_U,    KC_I,     KC_O,     KC_P,       KC_BSPACE, \
    KC_LCTRL,    KC_A,       KC_S,     KC_D,    KC_F,    KC_G,   TT(NUMBER),     TT(NUMBER), KC_H,   KC_J,    KC_K,     KC_L,     JP_COLN,    KC_ENTER, \
    KC_LSFT,     KC_Z,       KC_X,     KC_C,    KC_V,    KC_B,   KC_TAB,         XXXXXXX,    KC_N,   KC_M,    KC_COMMA, KC_DOT,   KC_SLASH,   KC_RSHIFT, \
    KC_CAPSLOCK, TT(ADJUST), TT(SYMB), KC_LGUI, KC_LALT, KC_SPC, TT(MOD_KEYMAP), XXXXXXX,    KC_SPC, KC_RALT, KC_RGUI,  TT(SYMB), TT(ADJUST), KC_RCTRL \
  ),

  [GAME] = LAYOUT( \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______ \
  ),

  [SYMB] = LAYOUT( \
    _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), JP_LBRC, JP_RBRC, S(KC_6), S(KC_7),    S(KC_8),   S(KC_9),    JP_YEN, _______,\
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, JP_LCBR, JP_RCBR, XXXXXXX, KC_MINS,    JP_CIRC,   JP_SCLN,    JP_AT,   _______,\
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, S(KC_COMM), S(KC_DOT), S(KC_SLSH), JP_UNDS, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,    _______, _______ \
  ),

  [ADJUST] = LAYOUT( \
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_DELETE, \
    _______, KC_ZKHK, KC_MHEN, KC_APP,  XXXXXXX, KC_VOLU, _______, _______, KC_PSCR, KC_PGUP, KC_HOME, KC_UP,   KC_END,   _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, _______, _______, XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______ \
  ),

  [NUMBER] = LAYOUT( \
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX, XXXXXXX, XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, _______, \
    _______, JP_PLUS, JP_MINS, JP_ASTR, JP_SLSH, JP_EQL,  _______, XXXXXXX, XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX,  _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX \
  ),


  // TODO: NUMPAD
  //

  [SWAP_CTRLCAPS] = LAYOUT( \
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_CAPSLOCK, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_LCTRL,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
  ),

  [MOD_KEYMAP] = LAYOUT( \
    TG(SWAP_CTRLCAPS), TG(GAME), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
  )
};
