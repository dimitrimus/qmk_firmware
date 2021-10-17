#include QMK_KEYBOARD_H

// layout 0
#define L1_EQL   LT(1,KC_EQL)
#define L2_MINS  LT(2,KC_MINS)
#define SHFT_ENT RSFT_T(KC_ENT)
#define ALT_SPC  LALT_T(KC_SPC)
#define CTR_CPS  LCTL_T(KC_CAPSLOCK)

// layout 1 and 2
#define CD_LEFT  LGUI(KC_LEFT)
#define CD_RGHT  LGUI(KC_RGHT)
#define KCS_1    LSFT(KC_1)
#define KCS_2    LSFT(KC_2)
#define KCS_3    LSFT(KC_3)
#define KCS_4    LSFT(KC_4)
#define KCS_5    LSFT(KC_5)
#define KCS_6    LSFT(KC_6)
#define KCS_7    LSFT(KC_7)
#define KCS_8    LSFT(KC_8)
#define KCS_9    LSFT(KC_9)
#define KCS_0    LSFT(KC_0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
   KC_ESC,  KC_TAB, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, RGUI_T(KC_RBRC),
           CTR_CPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
           KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SHFT_ENT,
                                   KC_LGUI, L2_MINS, ALT_SPC,      KC_SPC,  L1_EQL,  KC_BSPC
),

[1] = LAYOUT(
   KC_ESC, KC_TILD, KCS_1,  KCS_2,   KCS_3,   KCS_4,   KCS_5,    KC__VOLUP, CD_LEFT, KC_UP,   CD_RGHT, KC_PGUP, XXXXXXX, RGUI_T(KC_BSLS),
           CTR_CPS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,  KC__VOLDOWN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX,
           KC_LSFT, KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
                                   KC_LGUI,  KC_F12, KC_LALT,      KC_RALT, XXXXXXX, RESET
),

[2] = LAYOUT(
   KC_ESC,  KC_GRV,KC_PGUP,CD_LEFT,  KC_UP, CD_RGHT, KC__VOLUP,    KCS_6,  KCS_7,   KCS_8,   KCS_9,  KCS_0,    XXXXXXX,  RGUI_T(KC_BSLS),
           CTR_CPS,KC_PGDN,KC_LEFT,KC_DOWN, KC_RGHT, KC__VOLDOWN,  KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    XXXXXXX,
           KC_LSFT,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, KC_MPLY,      KC_F6,  KC_F7,   KC_F8,   KC_F9, KC_F10,     KC_F11,
                                     RESET, XXXXXXX, KC_LALT,      KC_RALT, KC_F12, KC_DEL
),

};
