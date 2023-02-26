// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Combos
#define COMBO(NAME, BINDINGS, KEYPOS, LAYERS) \
  combo_##NAME {                              \
    bindings = <BINDINGS>;                    \
    key-positions = <KEYPOS>;                 \
    layers = <LAYERS>;                        \
  };
        combos {
                compatible = "zmk,combos";

    /*                KEY POSITIONS

      ╭────────────────────╮ ╭────────────────────╮
      │  0   1   2   3   4 │ │  5   6   7   8   9 │
      │ 10  11  12  13  14 │ │ 15  16  17  18  19 │
      │ 20  21  22  23  24 | | 25  26  27  28  29 │
      ╰───────╮ 30  31  23 │ │ 33  34  35 ╭───────╯
              ╰────────────╯ ╰────────────╯            
    */

    //   name     	result   	 	chord keys 		layers
COMBO(Z,        &kp Z,  		    0  1, 			0 1 2)	// Z
COMBO(Q, 		    &kp Z, 			    28 29, 			0 1 2)	// Q
COMB(UNDO,    	K_UNDO,         20 21,			0 1 2)	// undo
COMB(REDO,    	K_UNDO,         10 11,			0 1 2)	// redo
COMB(CUT,    	  K_CUT,    		  20 22,			0 1 2)	// cut
COMB(COPY,    	K_COPY,    		  21 22, 			0 1 2)	// copy
COMB(PASTE,    	K_PASTE,    	  22 23, 			0 1 2)	// paste
COMB(PSTM,    	LSHFT(K_PASTE),	21 23, 			0 1 2)	// paste match
COMB(SALL,    	LCTL(&kp S),	  20 23, 			0 1 2)	// select all
COMB(KILL,    	LALT(F4),  		  20  4, 			0 1 2)	// force quit
COMB(SCLP,    	LS(LGUI(&kp S)),0  29, 			0 1 2)	// screenshot
COMB(CAPS,    	CAPS,      		  23 26, 			0 1 2)	// CAPS LOCK
COMB(FIND,    	K_FIND,    		  21 24, 			0 1 2)	// find 
COMB(DELETE,    TAB,            13 31,      0 1 2)  // tab 
COMB(DELETE,    TAB,            16 31,      0 1 2)  // tab 


/* Convenience */
//COMBO(esc, &kp ESC, 3 4, DEF_L ALT_L)
//COMBO(del, &kp DEL, 13 14, DEF_L ALT_L)
//COMBO(select_all, &kp LC(A), 21 22, NAV_L)

//COMBO(alt_alphas, &tog ALT_L, 5 15 25, DEF_L ALT_L)
 };   

#define MIRYOKU_LAYER_BASE \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
U_MT(LGUI, R),     U_MT(LALT, S),     U_MT(LCTRL, N),    U_MT(LSHFT, D),    &kp B,             &kp AMPS,          U_MT(LSHFT, A),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, H),      \
U_LT(U_BUTTON, X), U_MT(RALT, F),     &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             U_MT(RALT, Y),     U_LT(U_BUTTON, K),  \
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE), U_LT(U_MOUSE, T), U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp J,             &kp G,             &kp M,             &kp P,             &kp V,             &kp SEMI,          &kp COMMA,         &kp DOT,           &kp SLASH,         &kp BSLH,           \
&kp R,             &kp S,             &kp N,             &kp D,             &kp B,             &kp AMPS,          &kp A,             &kp E,             &kp I,             &kp H,              \
&kp X,             &kp F,             &kp L,             &kp C,             &kp W,             &kp MINUS,         &kp U,             &kp O,             &kp Y,             &kp K,              \
U_NP,              U_NP,              ESC,               SPACE,             T,                 RET,               BSPC,              DEL,               U_NP,              U_NP