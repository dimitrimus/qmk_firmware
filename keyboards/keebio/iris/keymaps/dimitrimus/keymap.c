#include QMK_KEYBOARD_H

// layout 0
#define SHFT_ENT RSFT_T(KC_ENT)
#define L1_MINS  LT(1,KC_MINS)
#define ALT_SPC  LALT_T(KC_SPC)
#define L2_EQL   LT(2,KC_EQL)
#define CD_BSLS  RGUI_T(KC_BSLS)
#define CTR_CPS  LCTL_T(KC_CAPSLOCK)

// layout 1 and 2
#define CD_LEFT  LGUI(KC_LEFT)
#define CD_RGHT  LGUI(KC_RGHT)
#define SH_1 LSFT(KC_1)
#define SH_2 LSFT(KC_2)
#define SH_3 LSFT(KC_3)
#define SH_4 LSFT(KC_4)
#define SH_5 LSFT(KC_5)
#define SH_6 LSFT(KC_6)
#define SH_7 LSFT(KC_7)
#define SH_8 LSFT(KC_8)
#define SH_9 LSFT(KC_9)
#define SH_0 LSFT(KC_0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       CTR_CPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_F12,           KC_MPLY, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SHFT_ENT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, L1_MINS, ALT_SPC,                   KC_SPC,  L2_EQL,  KC_BSPC
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_TILD, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_DEL,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_GRV,  KC_PGUP, CD_LEFT, KC_UP,   CD_RGHT, KC__VOLUP,                        KC__VOLUP, CD_LEFT, KC_UP,   CD_RGHT, KC_PGUP, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC__VOLDOWN,                    KC__VOLDOWN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_1,    SH_2,    SH_3,    SH_4,    SH_5,    KC_F12,           KC_MPLY, SH_6,    SH_7,    SH_8,    SH_9,    SH_0,    KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, KC_NO,   KC_LALT,                   KC_RALT, KC_NO,   KC_DEL
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       RGB_TOG, KC_PGUP, CD_LEFT, KC_UP,   CD_RGHT, KC__VOLUP,                        KC__VOLUP, CD_LEFT, KC_UP,   CD_RGHT, KC_PGUP, KC_RBRC,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LCTL, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC__VOLDOWN,                    KC__VOLDOWN, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_BSLS,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       KC_LSFT, SH_1,    SH_2,    SH_3,    SH_4,    SH_5,    KC_F12,           KC_MPLY, SH_6,    SH_7,    SH_8,    SH_9,    SH_0,    KC_RSFT,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_LGUI, KC_NO,   KC_LALT,                   KC_RALT, KC_NO,   KC_DEL
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
};
