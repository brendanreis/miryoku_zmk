// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_CLIPBOARD_WIN
#define U_TAPPING_TERM 100

// Gallium: https://github.com/GalileoBlues/Gallium
// #define MIRYOKU_LAYER_BASE \
// &kp B,             &kp L,             &kp D,             &kp C,             &kp V,             &kp J,             &kp Y,             &kp O,             &kp U,             &kp COMMA,         \
// U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, S),    &kp G,             &kp P,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),     \
// U_LT(U_BUTTON, X), U_MT(RALT, Q),     &kp M,             &kp W,             &kp Z,             &kp K,             &kp F,             &kp SQT,         U_MT(RALT, SEMI),   U_LT(U_BUTTON, DOT),\
// U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// #define MIRYOKU_LAYER_NUM \
// &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp SLASH,         &kp N4,            &kp N5,            &kp N6,            &kp EQUAL,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
// &kp GRAVE,         &kp N1,            &kp N2,            &kp N3,            &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
// U_NP,              U_NP,              &kp DOT,           &kp N0,            &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// My modification of Graphite: https://github.com/rdavison/graphite-layout
#define MIRYOKU_LAYER_BASE \
&kp B,             &kp L,             &kp D,             &kp W,             &kp Z,             &kp SQT,             &kp F,             &kp O,             &kp U,             &kp J,           \
U_MT(LGUI, N),     U_MT(LALT, R),     U_MT(LCTRL, T),    U_MT(LSHFT, S),    &kp G,             &kp Y,             U_MT(LSHFT, H),    U_MT(LCTRL, A),    U_MT(LALT, E),     U_MT(LGUI, I),     \
U_LT(U_BUTTON, Q), U_MT(RALT, X),     &kp M,             &kp C,             &kp V,             &kp K,             &kp P,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

// TODO Romak: https://github.com/rafaelromao/romak
// #define MIRYOKU_LAYER_BASE \
// &kp B,             &kp L,             &kp D,             &kp W,             &kp Z,             &kp SQT,           &kp F,             &kp O,             &kp U,             &kp J,           \
// &kp N,             &kp R,             &kp T,             &kp S,             &kp G,             &kp Y,             &kp H,             &kp A,             &kp E,             &kp I,           \
// &kp Q,             &kp X,             &kp M,             &kp C,             &kp V,             &kp K,             &kp P,             &kp DOT,           &kp COMMA,         &kp SLASH,       \
// U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

// Below all taken from https://github.com/manna-harbour/miryoku/discussions/158#discussion-4504124
#define MIRYOKU_LAYER_EXTRA \
&kp TAB,           &kp Q,             &kp W,             &kp E,             &kp R,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp LCTRL,         &kp Z,             &kp X,             &kp C,             &kp V,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LALT,          &kp SPC,           &mo U_TAP,         &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp ESC,           &kp NUM_1,         &kp W,             &kp NUM_2,         &kp NUM_5,          &kp LBKT,          &kp F7,            &kp F8,            &kp F9,            &kp RBKT,         \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp NUM_6,          &kp EQL,           &kp F4,            &kp F5,            &kp F6,            &kp SEMI,         \
&kp LCTRL,         &kp NUM_3,         &kp X,             &kp NUM_4,         &kp NUM_7,          &kp BSLH,          &kp F1,            &kp F2,            &kp F3,            &kp GRAVE,        \
U_NP,              U_NP,              &to U_BASE,        &kp SPC,           &none,              &kp MINUS,         &kp NUM_0,         &kp DOT,           U_NP,              U_NP

#define MIRYOKU_LAYERMAPPING_EXTRA(\
K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  &kp T  XXX  K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  &kp G  XXX  K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  &kp B  XXX  K25  K26  K27  K28  K29 \
          XXX  K32  K33  K34    K35  K36  K37  XXX

#define MIRYOKU_LAYERMAPPING_TAP(\
K00, K01, K02, K03, K04,           K05, K06, K07, K08, K09, \
K10, K11, K12, K13, K14,           K15, K16, K17, K18, K19, \
K20, K21, K22, K23, K24,           K25, K26, K27, K28, K29, \
N30, N31, K32, K33, K34,           K35, K36, K37, N38, N39 \
) \
K00  K01  K02  K03  K04  &kp NUM_8  XXX  K05  K06  K07  K08  K09 \
K10  K11  K12  K13  K14  &kp NUM_9  XXX  K15  K16  K17  K18  K19 \
K20  K21  K22  K23  K24  &kp NUM_0  XXX  K25  K26  K27  K28  K29 \
          XXX  K32  K33  K34        K35  K36  K37  XXX
