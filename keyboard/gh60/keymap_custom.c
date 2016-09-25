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
    /* 2: Poker Fn1
     * ,-----------------------------------------------------------.
     * |~` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   |   |   |   |   |Hom|Ins|FnL  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |Lft|Dwn| Up|Rgt|   |Tsk|End|        |
     * |-----------------------------------------------------------|
     * |        |Del|   |   |Mut|VoU|VoD|   |PgU|PgD|Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         FnS            |    |    |    |    |
     * `-----------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnS: toggle Arrow overlay
     */
    KEYMAP_ANSI(
        GRV, F1  ,F2  ,F3  ,F4  ,F5  ,F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,INS ,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,DEL ,TRNS,TRNS,PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS , \
        TRNS,TRNS,TRNS,          FN3,                     TRNS,TRNS,TRNS,TRNS),
    /* 3: Poker Fn1 + Shift
     * ,-----------------------------------------------------------.
     * |~` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   |   |   |   |   |Hom|Ins|FnL  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |Lft|Dwn| Up|Rgt|   |Tsk|End|        |
     * |-----------------------------------------------------------|
     * |        |Del|   |   |Mut|VoU|VoD|   |PgU|PgD|Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         FnS            |    |    |    |    |
     * `-----------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnS: toggle Arrow overlay
     */
    KEYMAP_ANSI(
        TRNS,TRNS,TRNS,TRNS,END ,TRNS,HOME,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,BSPC,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,          TRNS, \
        TRNS,TRNS,TRNS,          FN3,                     TRNS,TRNS,TRNS,TRNS),
    /* 4: Poker Fn2
     * ,-----------------------------------------------------------.
     * |~` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |
     * |-----------------------------------------------------------|
     * |     |   | Up|   |   |   |   |   |   |   |   |Hom|Ins|FnL  |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |Lft|Dwn| Up|Rgt|   |Tsk|End|        |
     * |-----------------------------------------------------------|
     * |        |Del|   |   |Mut|VoU|VoD|   |PgU|PgD|Del|          |
     * |-----------------------------------------------------------|
     * |    |    |    |         FnS            |    |    |    |    |
     * `-----------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnS: toggle Arrow overlay
     */
    KEYMAP_ANSI(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, \
        TRNS,FN5 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,INS, TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,UP,  RGHT,FN3, END,      TRNS, \
        TRNS,DEL, TRNS,TRNS,MUTE,TRNS,TRNS,TRNS,PGUP,PGDN,DEL,           TRNS, \
        TRNS,TRNS,TRNS,          FN3,                     TRNS,TRNS,TRNS,TRNS),
};

enum macro_id {
  LOREM,
  NEXT_WORD,
  PREV_WORD
};

const action_t PROGMEM fn_actions[] = {
    /* Poker Layout */
    [0] = ACTION_LAYER_MOMENTARY(2),  // to Fn1 overlay
    [1] = ACTION_LAYER_MOMENTARY(4),  // to Fn2 overlay
    [2] = ACTION_LAYER_MOMENTARY(3),  // to Fn1 + Shift overlay
    [3] = ACTION_LAYER_TOGGLE(1),     // toggle arrow overlay
    [4] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [5] = ACTION_MACRO(LOREM),
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
     }
     return MACRO_NONE;	 
};
