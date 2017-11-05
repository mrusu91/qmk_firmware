#include "dactyl_manuform.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0
#define _L1 1
#define _L2 2

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = KEYMAP_5x6(
    // left hand
    KC_GESC,          KC_1,             KC_2,             KC_3,             KC_4,             KC_5,
    KC_TAB,           KC_Q,             KC_W,             KC_E,             KC_R,             KC_T,
    LT(_L2, KC_NO),   KC_A,             KC_S,             KC_D,             KC_F,             KC_G,
    KC_LSHIFT,        KC_Z,             KC_X,             KC_C,             KC_V,             KC_B,
                                        XXXXXXX,          KC_BSLS,
                                                          LT(_L1, KC_BSPC), LSFT_T(KC_SPC),
                                                                            KC_LALT,          KC_LGUI,
                                                                            KC_LALT,          KC_LCTL,
    // right hand
    KC_6,             KC_7,             KC_8,             KC_9,             KC_0,             KC_MINS,
    KC_Y,             KC_U,             KC_I,             KC_O,             KC_P,             KC_EQL,
    KC_H,             KC_J,             KC_K,             KC_L,             KC_SCLN,          KC_QUOT,
    KC_N,             KC_M,             KC_COMM,          KC_DOT,           KC_SLSH,          KC_RSHIFT,
                                        KC_LBRC,          KC_RBRC,
                      RSFT_T(KC_ENTER), LT(_L1, KC_DEL),
    KC_RGUI,          KC_RALT,
    KC_RCTL,          KC_RALT
),
[_L1] = KEYMAP_5x6(
    // left hand
    _______,          KC_F1,            KC_F2,            KC_F3,            KC_F4,            KC_F5,
    _______,          _______,          KC_INSERT,        KC_HOME,          KC_PGUP,          _______,
    _______,          _______,          KC_DELETE,        KC_END,           KC_PGDN,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        _______,          _______,
                                                          LT(_L1, KC_BSPC), LSFT_T(KC_SPC),
                                                                            KC_LALT,          KC_LGUI,
                                                                            KC_LALT,          KC_LCTL,
    // right hand
    KC_F6,            KC_F7,            KC_F8,            KC_F9,            KC_F10,           KC_F11,
    _______,          _______,          _______,          _______,          _______,          KC_F12,
    KC_LEFT,          KC_DOWN,          KC_UP,            KC_RIGHT,         _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        _______,          _______,
                      RSFT_T(KC_ENTER), LT(_L1, KC_DEL),
    KC_RGUI,          KC_RALT,
    KC_RCTL,          KC_RALT
),
[_L2] = KEYMAP_5x6(
    // left hand
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        RESET,          _______,
                                                          _______,          _______,
                                                                            _______,          _______,
                                                                            _______,          _______,
    // right hand
    //
    _______,          _______,          _______,          _______,          _______,          _______,
    KC_MS_BTN1,       KC_MS_WH_UP,      KC_MS_WH_DOWN,    KC_MS_BTN3,       _______,          _______,
    KC_MS_LEFT,       KC_MS_UP,         KC_MS_DOWN,       KC_MS_RIGHT,      _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        _______,          RESET,
                      _______,          _______,
    _______,          _______,
    _______,          _______
)
};


void persistant_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}


/* empty layout
[_L2] = KEYMAP_5x6(
    // left hand
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        _______,          _______,
                                                          _______,          _______,
                                                                            _______,          _______,
                                                                            _______,          _______,
    // right hand
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
    _______,          _______,          _______,          _______,          _______,          _______,
                                        _______,          _______,
                      _______,          _______,
    _______,          _______,
    _______,          _______,
),
*/
