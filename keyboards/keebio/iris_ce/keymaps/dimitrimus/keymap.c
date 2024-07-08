#include QMK_KEYBOARD_H

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)

// Right-hand home row mods
#define SFT_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define ALT_L RALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)

// Layer switches
#define L5_ESC LT(5, KC_ESC)
#define L4_TAB LT(4, KC_TAB)
#define L2_SPC LT(2, KC_SPC)
#define L5_QUO LT(5, KC_QUOT)
#define L6_Z   LT(6, KC_Z)
#define L3_SPC LT(3, KC_SPC)

// Left-hand home row mods
#define GUI_S1 LGUI_T(KC_EXLM)
#define ALT_S2 LALT_T(KC_AT)
#define CTL_S3 LCTL_T(KC_HASH)
#define SFT_S4 LSFT_T(KC_DLR)

// Right-hand home row mods
#define SFT_S7 RSFT_T(KC_AMPR)
#define CTL_S8 RCTL_T(KC_ASTR)
#define ALT_S9 RALT_T(KC_LPRN)
#define GUI_S0 RGUI_T(KC_RPRN)

// Right-hand home row mods
#define SF_PGDN RSFT_T(KC_PGDN)
#define CT_PGUP RCTL_T(KC_PGUP)

// Mac specific Home and End
#define KC_HOME1 LGUI(KC_LEFT)
#define KC_END1 LGUI(KC_RIGHT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,    
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,                               KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SCLN,_______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, L6_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, L5_ESC,  L4_TAB,                    L2_SPC,  L5_QUO,  _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [1] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    _______,    
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, GUI_A,   ALT_S,   CTL_D,   SFT_F,   KC_G,                               KC_H,    SFT_J,   CTL_K,   ALT_L,   GUI_SCLN,_______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, L6_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______,          _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, L5_ESC,  L4_TAB,                    L3_SPC,  L5_QUO,  _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [2] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_ESC,  _______, _______, _______, _______,                            KC_GRV,  KC_HOME, KC_BSPC, KC_END,  _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_ENT,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_EQL,  KC_PLUS, KC_UNDS, KC_MINS, KC_PIPE, _______,          _______, KC_BSLS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, KC_ESC,  KC_TAB,                    KC_QUOT, KC_DQUO, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [3] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_ESC,  _______, _______, _______, _______,                            KC_GRV,  KC_HOME1,KC_BSPC, KC_END1, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,KC_ENT,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_EQL,  KC_PLUS, KC_UNDS, KC_MINS, KC_PIPE, _______,          _______, KC_BSLS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, KC_ESC,  KC_TAB,                    KC_QUOT, KC_DQUO, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [4] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, GUI_S1,  ALT_S2,  CTL_S3,  SFT_S4,  KC_PERC,                            KC_CIRC, SFT_S7,  CTL_S8,  ALT_S9,  GUI_S0,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_EQL,  KC_PLUS, KC_UNDS, KC_MINS, KC_PIPE, _______,          _______, KC_BSLS, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, KC_ESC,  KC_TAB,                    KC_QUOT, KC_DQUO, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [5] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______,                            _______, SF_PGDN, CT_PGUP, KC_RALT, KC_RGUI, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, _______, _______,                   _______, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    ),

    [6] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, RGB_TOG, _______, _______, QK_BOOT, DF(1),                              _______, QK_BOOT, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, DF(0),                              _______, _______, _______, _______, _______, _______,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, _______, _______,                   _______, _______, _______
    //                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GUI_S1:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;
            }
            break;
        case ALT_S2:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_AT);
                return false;
            }
            break;
        case CTL_S3:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_HASH);
                return false;
            }
            break;
        case SFT_S4:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_DLR);
                return false;
            }
            break;
        case SFT_S7:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_AMPR);
                return false;
            }
            break;
        case CTL_S8:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_ASTR);
                return false;
            }
            break;
        case ALT_S9:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
                return false;
            }
            break;
        case GUI_S0:
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN);
                return false;
            }
            break;
    }
    return true;
}
