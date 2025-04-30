// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_TAP_QWERTY
#define U_TAPPING_TERM 280
#define U_QUICK_TAP 175
#define U_REQUIRE_PRIOR_IDLE 150

#define LEFT_HAND_KEYS      \
0  1  2  3  4               \
10 11 12 13 14              \
20 21 22 23 24 25           

#define RIGHT_HAND_KEYS     \
                            5  6  7  8  9   \
                             16 17 18 19 20 \
                             26 27 28 29 30

#define THUMB_KEYS          \
              31 32 32    34 35 36          

// My modification of Graphite: https://github.com/rdavison/graphite-layout
#define MIRYOKU_LAYER_BASE \
&kp B,             &kp L,             &kp D,             &kp W,             &kp Z,             &kp SQT,             &kp F,             &kp O,             &kp U,             &kp J,           \
U_MT_L(LCTRL, N),     U_MT_L(LALT, R),     U_MT_L(LGUI, T),    U_MT_L(LSHFT, S),    &kp G,             &kp Y,             U_MT_R(LSHFT, H),    U_MT_R(LGUI, A),    U_MT_R(LALT, E),     U_MT_R(LCTRL, I),     \
U_LT(U_BUTTON, Q), U_MT_L(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp P,             &kp COMMA,         U_MT_R(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// Based on https://github.com/manna-harbour/miryoku/discussions/313
#define MIRYOKU_LAYER_EXTRA \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp B,              U_NA,              U_NA,              U_NA,              U_NA,              U_NA,            \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp I,         U_NA,              U_NA,              &u_to_U_BASE,              U_NP,              U_NP 

// #define MIRYOKU_LAYER_TAP \
// &kp ESC,           &kp NUM_1,         &kp W,             &kp NUM_2,         &kp NUM_5,          &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
// &kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp NUM_6,          &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
// &kp LCTRL,         &kp NUM_3,         &kp X,             &kp NUM_4,         &kp NUM_7,          &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
// U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP
