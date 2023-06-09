/*
Copyright 2023 Evan Spreng

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "tweedle.h"

#define _MLSFT OSM(MOD_LSFT)
#define _MRSFT OSM(MOD_RSFT)
#define _CMD_SP MT(MOD_LGUI, KC_SPC) 
#define _SC_LK LCMD(LCTL(KC_Q))
#define _CST_4 SCMD(KC_4)
#define _CST_5 SCMD(KC_5)
#define _ZM_IN LCMD(KC_PPLS)
#define _ZM_OUT LCMD(KC_PMNS)
#define _ZM_RST LCMD(KC_0)   
#define _LTAB LAG(KC_LEFT)
#define _RTAB RAG(KC_RGHT)
#define _BACK LCMD(KC_LBRC)
#define _FWD LCMD(KC_RBRC)
#define _RFRS LCMD(KC_R)                                        

enum custom_keycodes {
  MLSFT = SAFE_RANGE,
  MRSFT,
  CMD_SP,
  SC_LK,
  CST_4,
  CST_5,
  ZM_IN,
  ZM_OUT,
  ZM_RST,
  LTAB,
  RTAB,
  BACK,
  FWD,
  RFRS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [0] = LAYOUT(       // default layer
//     ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_BSPC,
//     ├────────┴────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_CAPS,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┤
        _MLSFT,           KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE, _RFRS,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           _MRSFT,
//     └─────────────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴─────────────────┘
                                            KC_LALT, MO(3),   _CMD_SP, MO(1),   MO(2),   _CMD_SP, MO(4),   KC_RCTL
//                                         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
        ),


    [1] = LAYOUT(       // activated with left thumb
//     ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_EQL,  KC_DEL,
//     ├────────┴────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, KC_P7,   KC_P8,   KC_P9,   _______, KC_HOME, KC_END,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, KC_P4,   KC_P5,   KC_P6,   _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┤
        _______,          _______, _______, _______, _______, _______, KC_MUTE, _ZM_RST, _______, KC_P1,   KC_P2,   KC_P3,   KC_BSLS,          _______,
//     └─────────────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴─────────────────┘
                                            _______, _______, _______, _______, _______, _______, KC_P0,   _______
//                                         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
        ), 

    [2] = LAYOUT(       // activated with right thumb
//     ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        _SC_LK,  _______, KC_F1,   KC_F2,   KC_F3,   _CST_4,  _CST_5,                    _______, _______, _______, _______, _______, _______, _______,
//     ├────────┴────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, KC_UP,   _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┤
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
//     └─────────────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴─────────────────┘
                                            _______, _______, _______, _______, _______, _______, _______, _______
//                                         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
        ),

    [3] = LAYOUT(       // activated with left thumb
//     ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├────────┴────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┤
        _______,          _______, _______, _______, _______, _______, _______, KC_ENT,  _______, _______, _______, _______, _______,          _______,
//     └─────────────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴─────────────────┘
                                            _______, _______, _______, _______, _______, _______, _______, _______
//                                         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
        ),

    [4] = LAYOUT(       // activated with right thumb
//     ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐                 ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
        _______, _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├────────┴────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┤                 ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______,          _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, _______,
//     ├─────────────────┼────────┼────────┼────────┼────────┼────────┼────────┬────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┤
        _______,          _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______,          _______,
//     └─────────────────┴────────┴────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┴────────┴─────────────────┘
                                            _______, _______, _______, _______, _______, _______, _______, _______
//                                         └────────┴────────┴────────┴────────┴────────┴────────┴────────┴────────┘
        )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU),           ENCODER_CCW_CW(_LTAB,     _RTAB)  },
    [1] = { ENCODER_CCW_CW(KC_UP, KC_DOWN),             ENCODER_CCW_CW(_ZM_OUT,   _ZM_IN)  },
    [2] = { ENCODER_CCW_CW(KC_LEFT, KC_RGHT),           ENCODER_CCW_CW(_BACK,     _FWD)  },
    [3] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(S(KC_TAB),  KC_TAB) },
    [4] = { ENCODER_CCW_CW(_______, _______),           ENCODER_CCW_CW(_______,   _______) }
};
#endif

void matrix_scan_user(void) {
    if(IS_LAYER_ON(3)) {
        register_code(KC_RCMD);    
    } else {
        unregister_code(KC_RCMD);
    }
};
