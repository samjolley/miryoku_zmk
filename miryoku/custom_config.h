// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// Updated for latest Miryoku ZMK with Hands Down Gold layout

// Add Hands Down Gold (Au Neu-TX) alpha layer
#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, N),     U_MT(LSHFT, D),    &kp B,               &kp APOS,          U_MT(RSHFT, A),     U_MT(RGUI, E),     U_MT(RALT, I),     U_MT(RCTRL, H),     \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             U_MT(LALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, T),    U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC), U_NP,              U_NP

// Add Hands Down Gold (Au Neu-TX) tap layer
#define MIRYOKU_LAYER_TAP \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
&kp R,             &kp S,             &kp N,             &kp D,             &kp B,               &kp APOS,          &kp A,              &kp E,             &kp I,             &kp H,              \
&kp X,             &kp F,             &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             &kp Y,             &kp K,              \
U_NP,              U_NP,              &kp DEL,           &kp T,             &kp TAB,             &kp RET,           &kp SPACE,          &kp BSPC,          U_NP,              U_NP

// Enable combos and advanced features
#define MIRYOKU_KLUDGE_TOPROWCOMBOS
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS  
#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define MIRYOKU_KLUDGE_SOFT_OFF

// Note: MIRYOKU_KLUDGE_MOUSEKEYSPR is no longer needed 
// Mouse keys are now supported directly with CONFIG_ZMK_POINTING=y

// Optional: Enable tap delay if experiencing timing issues
// #define MIRYOKU_KLUDGE_TAPDELAY
