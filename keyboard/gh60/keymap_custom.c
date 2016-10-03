#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP_ANSI(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, \
        FN0 ,LGUI,LALT,          SPC,                     RALT,FN1 ,APP, FN0),
    /* 1: Poker with Arrow */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          UP,   \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,LEFT,DOWN,RGHT),
    /* 2: Poker Fn0 */
    KEYMAP_ANSI(
        GRV, F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,NO  , \
        NO  ,NO  ,UP  ,NO  ,NO  ,NO  ,NO  ,NO  ,INS ,NO  ,NO  ,HOME,END ,NO  , \
        TRNS,LEFT,DOWN,RGHT,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,PGUP,PGDN,     TRNS, \
        TRNS,FN11,DEL ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,          TRNS, \
        TRNS,TRNS,TRNS,          NO  ,                    TRNS,NO  ,TRNS,TRNS),
    /* 3: Poker Fn0.5 */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,END ,TRNS,HOME,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,UP  ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,TRNS,TRNS, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,BSPC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
    /* 4: Poker Fn1 */
    KEYMAP_ANSI(
        FN21,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,VOLD,VOLU,TRNS, \
        BTLD,FN11,UP  ,TRNS,TRNS,FN10,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN12, \
        TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,FN13,TRNS,TRNS,TRNS,TRNS,MPRV,MNXT,TRNS,          TRNS, \
        TRNS,FN20,TRNS,          MPLY,                    TRNS,TRNS,TRNS,TRNS),
};

enum macro_id {
  ELIXIR_PIPE,
  LOREM,
  RUN_CONSOLE
};

const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // to Fn1 overlay
    [1] = ACTION_LAYER_MOMENTARY(4),  // to Fn2 overlay
    [2] = ACTION_LAYER_MOMENTARY(3),  // to Fn1 + Shift overlay
    [3] = ACTION_LAYER_TOGGLE(1),     // toggle arrow overlay
    [10] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [11] = ACTION_MACRO(LOREM),
    [12] = ACTION_MACRO(ELIXIR_PIPE),
    [13] = ACTION_MACRO(RUN_CONSOLE),
    [20] = ACTION_MODS_KEY(MOD_RCTL|MOD_RALT, KC_DEL), // Ctrl-Alt-Del
    [21] = ACTION_MODS_KEY(MOD_LCTL, KC_GRV) // Ctrl-` for ConEmu
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
     switch (id) {
         case LOREM:
	     return (record->event.pressed ?
	             MACRO( 
		         I(10), 
		         D(LSFT), T(L), U(LSFT), T(O), T(R), T(E), T(M), T(SPC), 
			 T(I), T(P), T(S), T(U), T(M), T(SPC),
			 T(D), T(O), T(L), T(O), T(R), T(SPC),
			 T(S), T(I), T(T), T(SPC),
			 T(A), T(M), T(E), T(T), T(SPC), 
			 END
		     ):
		     MACRO_NONE);
	  case ELIXIR_PIPE:
	      return (record->event.pressed ? 
	              MACRO(I(0), D(LSFT), T(BSLS), T(DOT), U(LSFT), END):
		      MACRO_NONE);
	  case RUN_CONSOLE:
	      return (record->event.pressed ?
	              MACRO(
		          D(LGUI), T(R), U(LGUI), W(100),
			  T(C), T(N), T(S), T(ENT), W(250), W(250), W(250), W(250), W(250), W(250),
			  T(LEFT), T(ENT),
			  END
	              ):
		      MACRO_NONE);
     }
     return MACRO_NONE;	 
};
