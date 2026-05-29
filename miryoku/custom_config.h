// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add Hands Down Gold (Au Neu-TX) as alpha layer
#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LCTRL, R),    U_MT(LALT, S),     U_MT(LGUI, N),     U_MT(LSHFT, D),    &kp B,               &kp APOS,          U_MT(LSHFT, A),     U_MT(LGUI, E),     U_MT(LALT, I),     U_MT(LCTRL, H),     \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, DEL),U_LT(U_NAV, T),    U_LT(U_MOUSE, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, SPACE), U_LT(U_FUN, BSPC), U_NP,              U_NP

// Add Hands Down Gold (Au Neu-TX) tap layer
#define MIRYOKU_LAYER_TAP \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,               &kp SEMI,          &kp COMMA,          &kp DOT,           &kp SLASH,         &kp BSLH,           \
&kp R,             &kp S,             &kp N,             &kp D,             &kp B,               &kp APOS,          &kp A,              &kp E,             &kp I,             &kp H,              \
&kp X,             &kp F,             &kp L,             &kp C,             &kp W,               &kp MINUS,         &kp U,              &kp O,             &kp Y,             &kp K,              \
U_NP,              U_NP,              &kp DEL,           &kp T,             &kp TAB,             &kp RET,           &kp SPACE,          &kp BSPC,          U_NP,              U_NP

// Media layer with ESC at bottom-left pinky (position 20)
#define MIRYOKU_LAYER_MEDIA \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RGB_TOG,         U_RGB_EFF,         U_RGB_HUI,         U_RGB_SAI,         U_RGB_BRI,         \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_EP_TOG,          &kp C_PREV,        &kp C_VOL_DN,      &kp C_VOL_UP,      &kp C_NEXT,        \
&kp ESC,           &kp RALT,          &u_to_U_FUN,       &u_to_U_MEDIA,     U_NA,              &u_out_tog,        &u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp C_STOP,        &kp C_PP,          &kp C_MUTE,        U_NP,              U_NP

// Nav layer - HDGold modifier order + ESC at bottom-left pinky
#define MIRYOKU_LAYER_NAV \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
&kp ESC,           &kp RALT,          &u_to_U_NUM,       &u_to_U_NAV,       U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp SPACE,         &kp BSPC,          U_NP,              U_NP

// Mouse layer - HDGold modifier order + ESC at bottom-left pinky
#define MIRYOKU_LAYER_MOUSE \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LCTRL,         &kp LALT,          &kp LGUI,          &kp LSHFT,         U_NA,              U_NU,              U_MS_L,            U_MS_D,            U_MS_U,            U_MS_R,            \
&kp ESC,           &kp RALT,          &u_to_U_SYM,       &u_to_U_MOUSE,     U_NA,              U_NU,              U_WH_L,            U_WH_D,            U_WH_U,            U_WH_R,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP

#define MIRYOKU_KLUDGE_TOPROWCOMBOS
#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS
#define MIRYOKU_KLUDGE_THUMBCOMBOS
#define MIRYOKU_KLUDGE_SOFT_OFF
#define MIRYOKU_KLUDGE_MOUSEKEYSPR
#define MIRYOKU_KLUDGE_SOFT_OFF
