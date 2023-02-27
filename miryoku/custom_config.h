// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

/*                KEY POSITIONS

  ╭────────────────────╮ ╭────────────────────╮
  │  0   1   2   3   4 │ │  5   6   7   8   9 │
  │ 10  11  12  13  14 │ │ 15  16  17  18  19 │
  │ 20  21  22  23  24 | | 25  26  27  28  29 │
  ╰───────╮ 30  31  23 │ │ 33  34  35 ╭───────╯
          ╰────────────╯ ╰────────────╯            
*/

// Combos
#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS) \
    combo_##NAME {                            \
    bindings = <BINDINGS>;                    \
    key-positions = <KEYPOS>;                 \
    layers = <LAYERS>;                        \
  };

/ {
        combos {
                compatible = "zmk,combos";

                // name                result           chord keys     layers
                COMBO(combo_Z,         &kp Z,           0   1,         0 1 2)  // Z
                COMBO(combo_Q,         &kp Q,           28 29,         0 1 2)  // Q
                COMBO(combo_TAB_L,     TAB,             13 31,         0 1 2)  // tab 
                COMBO(combo_TAB_R,     TAB,             16 31,         0 1 2)  // tab 

                };
    };

#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LGUI, R),     U_MT(LALT, S),     U_MT(LCTRL, N),    U_MT(LSHFT, D),    &kp B,             &kp AMPS,          U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, H),      \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, T),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
&kp R,             &kp S,             &kp N,             &kp D,             &kp B,             &kp AMPS,          &kp A,             &kp E,             &kp I,             &kp H,              \
&kp X,             &kp F,             &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             &kp Y,             &kp K,              \
U_NP,              U_NP,              ESC,               SPACE,             &kp T,             RET,               BSPC,              DEL,               U_NP,              U_NP
