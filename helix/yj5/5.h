const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
		layer 0
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   Esc   |    1    |    2    |    3    |    4    |    5    |                   |    6    |    7    |    8    |    9    |    0    | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   Tab   |    q    |    w    |    e    |    r    |    t    |                   |    y    |    u    |    i    |    o    |    p    |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  LCtrl  |    a    |    s    |    d    |    f    |    g    |                   |    h    |    j    |    k    |    l    |  =  +   |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  TO.8   |    z    |    x    |    c    |    v    |    b    |  TO.3   |  TO.3   |    n    |    m    |  ,  <   |  .  >   |  /  ?   |  TO.8   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  LAlt   |  Reset  |  DF.10  |  LGUI   |  Eisu   |   Spc   |  TO.4   |  TO.5   |   Spc   |  Kana   |  Reset  |  TG.2   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[0] = LAYOUT(KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPC,KC_LCTL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_EQL,KC_ENT,TO(8),KC_Z,KC_X,KC_C,KC_V,KC_B,TO(3),TO(3),KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,TO(8),KC_LALT,RESET,DF(10),KC_LGUI,KC_LANG2,KC_SPC,TO(4),TO(5),KC_SPC,KC_LANG1,RESET,TG(2),DF(1),DF(0)),

	/*
		layer 1
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   Esc   |    1    |    2    |    3    |    4    |    5    |                   |    6    |    7    |    8    |    9    |    0    | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   Tab   |    q    |    w    |    d    |    f    |    g    |                   |    y    |    s    |    t    |    r    |    p    |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  LCtrl  |    a    |    o    |    e    |    u    |    i    |                   |    h    |    j    |    k    |    l    |  =  +   |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  TO.9   |    z    |    x    |    c    |    v    |    b    |  TO.3   |  TO.3   |    n    |    m    |  ,  <   |  .  >   |  /  ?   |  TO.9   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  LAlt   |  Reset  |  DF.10  |  LGUI   |  Eisu   |   Spc   |  TO.4   |  TO.5   |   Spc   |  Kana   |  Reset  |  TG.2   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[1] = LAYOUT(KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,KC_TAB,KC_Q,KC_W,KC_D,KC_F,KC_G,KC_Y,KC_S,KC_T,KC_R,KC_P,KC_BSPC,KC_LCTL,KC_A,KC_O,KC_E,KC_U,KC_I,KC_H,KC_J,KC_K,KC_L,KC_EQL,KC_ENT,TO(9),KC_Z,KC_X,KC_C,KC_V,KC_B,TO(3),TO(3),KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,TO(9),KC_LALT,RESET,DF(10),KC_LGUI,KC_LANG2,KC_SPC,TO(4),TO(5),KC_SPC,KC_LANG1,RESET,TG(2),DF(1),DF(0)),

	/*
		layer 2
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |_NLClear |   _ /   |   _ *   |   _ -   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   | _7_Home |  _8_Up  | _9_PgU  |   _ +   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   | _4_Left |   _5    |_6_Right | _ Enter |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |  Reset  |  Reset  | _1_End  | _2_Down | _3_PgD  | _ Enter |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   | _0_Ins  | _0_Ins  | _ . Dlt |  Trans  |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[2] = LAYOUT(KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_P7,KC_P8,KC_P9,KC_PPLS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_P4,KC_P5,KC_P6,KC_PENT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,RESET,RESET,KC_P1,KC_P2,KC_P3,KC_PENT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_P0,KC_P0,KC_PDOT,KC_TRNS,DF(1),DF(0)),

	/*
		layer 3
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   F1    |   F2    |   F3    |   F4    |   F5    |   F6    |                   |   F7    |   F8    |   F9    |   F10   |   F11   |   F12   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  Reset  | RGB_M_P | RGB_M_X | RGB_M_G | Saido-  | Saido+  |                   |   ---   | L Click | C Click | R Click | Wheel U |  Reset  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		| E Reset |RGB_M_SN | RGB_M_B | RGB_M_R | Meido-  | Meido+  |                   | Mouse L | Mouse D | Mouse U | Mouse R | Wheel D | E Reset |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   mac   |RGB_M_SW |   ---   | LED SW  | Shodo-  | Shodo+  |  Trans  |  Trans  |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   win   |   ---   | Effect- | Effect+ | Eff Sp- | Eff Sp+ |  Reset  |  Reset  | E Reset |   ---   |   ---   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[3] = LAYOUT(KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,RESET,RGB_M_P,RGB_M_X,RGB_M_G,RGB_SAD,RGB_SAI,KC_NO,KC_BTN1,KC_BTN3,KC_BTN2,KC_WH_U,RESET,EEP_RST,RGB_M_SN,RGB_M_B,RGB_M_R,RGB_HUD,RGB_HUI,KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,KC_WH_D,EEP_RST,AG_NORM,RGB_M_SW,KC_NO,RGB_TOG,RGB_VAD,RGB_VAI,KC_TRNS,KC_TRNS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,AG_SWAP,KC_NO,RGB_RMOD,RGB_MOD,RGB_SPD,RGB_SPI,RESET,RESET,EEP_RST,KC_NO,KC_NO,KC_NO,DF(1),DF(0)),

	/*
		layer 4
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   | _1_End  | _2_Down | _3_PgD  | _4_Left |   _5    |                   |_6_Right | _7_Home |  _8_Up  | _9_PgU  | _0_Ins  | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   Up    |   ---   |  Home   |  PageU  |                   |    (    |    )    |    <    |    >    |    &    |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |  Left   |  Down   |  Right  |   End   |  PageD  |                   |    {    |    }    |  [  {   |  ]  }   |    |    |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   | PrntScn | Insert  |  Reset  |  Reset  |  KC_AT  | KC_CIRC |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   | E Reset |  Reset  |  Trans  |   ---   |  Reset  | E Reset |   ---   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[4] = LAYOUT(KC_NO,KC_P1,KC_P2,KC_P3,KC_P4,KC_P5,KC_P6,KC_P7,KC_P8,KC_P9,KC_P0,KC_DEL,KC_NO,KC_NO,KC_UP,KC_NO,KC_HOME,KC_PGUP,KC_LPRN,KC_RPRN,KC_LT,KC_GT,KC_AMPR,KC_BSPC,KC_NO,KC_LEFT,KC_DOWN,KC_RGHT,KC_END,KC_PGDN,KC_LCBR,KC_RCBR,KC_LBRC,KC_RBRC,KC_PIPE,KC_ENT,KC_NO,KC_NO,KC_NO,KC_NO,KC_PSCR,KC_INS,RESET,RESET,KC_AT,KC_CIRC,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,EEP_RST,RESET,KC_TRNS,KC_NO,RESET,EEP_RST,KC_NO,KC_NO,DF(1),DF(0)),

	/*
		layer 5
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   |    1    |    2    |    3    |    4    |    5    |                   |    6    |    7    |    8    |    9    |    0    | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   | KC_TILD | KC_UNDS | KC_DQUO |  '  "   |  `  ~   |                   |    (    |    )    |    <    |    >    |    &    |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  LCtrl  | KC_PLUS |  -  _   | KC_ASTR |  =  +   | KC_COLN |                   |    {    |    }    |  [  {   |  ]  }   |    |    |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		| LShift  | KC_EXLM | KC_QUES | KC_HASH | KC_DLR  | KC_PERC |  Reset  |  Reset  |  KC_AT  | KC_CIRC |   ---   |   ---   |   ---   | LShift  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  LAlt   |   ---   |   ---   |  LGUI   |  Eisu   |   Spc   |   ---   |  Trans  |   Spc   |  Kana   |  RGUI   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[5] = LAYOUT(KC_NO,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,KC_NO,KC_TILD,KC_UNDS,KC_DQUO,KC_QUOT,KC_GRV,KC_LPRN,KC_RPRN,KC_LT,KC_GT,KC_AMPR,KC_BSPC,KC_LCTL,KC_PLUS,KC_MINS,KC_ASTR,KC_EQL,KC_COLN,KC_LCBR,KC_RCBR,KC_LBRC,KC_RBRC,KC_PIPE,KC_ENT,KC_LSFT,KC_EXLM,KC_QUES,KC_HASH,KC_DLR,KC_PERC,RESET,RESET,KC_AT,KC_CIRC,KC_NO,KC_NO,KC_NO,KC_LSFT,KC_LALT,KC_NO,KC_NO,KC_LGUI,KC_LANG2,KC_SPC,KC_NO,KC_TRNS,KC_SPC,KC_LANG1,KC_RGUI,KC_NO,DF(1),DF(0)),

	/*
		layer 6
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[6] = LAYOUT(KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,DF(1),DF(0)),

	/*
		layer 7
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   | E Reset |  Reset  |   ---   |   ---   |  Reset  | E Reset |   ---   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[7] = LAYOUT(KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,EEP_RST,RESET,KC_NO,KC_NO,RESET,EEP_RST,KC_NO,KC_NO,DF(1),DF(0)),

	/*
		layer 8
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   Esc   |    1    |    2    |    3    |    4    |    5    |                   |    6    |    7    |  Trans  |  Trans  |    0    | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   Tab   |   S q   |   S w   |   S e   |   S r   |   S t   |                   |   S y   |   S u   |   S i   |   S o   |   S p   |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  LCtrl  |   S a   |   S s   |   S d   |   S f   |   S g   |                   |   S h   |   S j   |   S k   |   S l   | S =  +  |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  Trans  |   S z   |   S x   |   S c   |   S v   |   S b   |  Reset  |  Reset  |   S n   |   S m   | S ,  <  | S .  >  | S /  ?  |  Trans  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  LAlt   |   ---   |  DF.10  | S LGUI  |  Eisu   |  S Spc  |   ---   |   ---   |  S Spc  |  Kana   | S RGUI  |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[8] = LAYOUT(KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_TRNS,KC_TRNS,KC_0,KC_DEL,KC_TAB,LSFT(KC_Q),LSFT(KC_W),LSFT(KC_E),LSFT(KC_R),LSFT(KC_T),LSFT(KC_Y),LSFT(KC_U),LSFT(KC_I),LSFT(KC_O),LSFT(KC_P),KC_BSPC,KC_LCTL,LSFT(KC_A),LSFT(KC_S),LSFT(KC_D),LSFT(KC_F),LSFT(KC_G),LSFT(KC_H),LSFT(KC_J),LSFT(KC_K),LSFT(KC_L),LSFT(KC_EQL),KC_ENT,KC_TRNS,LSFT_T(KC_Z),LSFT(KC_X),LSFT(KC_C),LSFT(KC_V),LSFT(KC_B),RESET,RESET,LSFT(KC_N),LSFT(KC_M),LSFT(KC_COMM),LSFT(KC_DOT),LSFT(KC_SLSH),KC_TRNS,KC_LALT,KC_NO,DF(10),LSFT(KC_LGUI),KC_LANG2,LSFT(KC_SPC),KC_NO,KC_NO,LSFT(KC_SPC),KC_LANG1,LSFT(KC_RGUI),KC_NO,DF(1),DF(0)),

	/*
		layer 9
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   Esc   |    1    |    2    |    3    |    4    |    5    |                   |    6    |    7    |    8    |    9    |  Trans  | Delete  |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   Tab   |   S q   |   S w   |   S d   |   S f   |   S g   |                   |   S y   |   S s   |   S t   |   S r   |   S p   |   Bk    |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|  LCtrl  |   S a   |   S o   |   S e   |   S u   |   S i   |                   |   S h   |   S j   |   S k   |   S l   | S =  +  |  Enter  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  Trans  |   S z   |   S x   |   S c   |   S v   |   S b   |  Reset  |  Reset  |   S n   |   S m   | S ,  <  | S .  >  | S /  ?  |  Trans  |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|  LAlt   |   ---   |  DF.10  | S LGUI  |  Eisu   |  S Spc  |   ---   |   ---   |  S Spc  |  Kana   | S RGUI  |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[9] = LAYOUT(KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_TRNS,KC_DEL,KC_TAB,LSFT(KC_Q),LSFT(KC_W),LSFT(KC_D),LSFT(KC_F),LSFT(KC_G),LSFT(KC_Y),LSFT(KC_S),LSFT(KC_T),LSFT(KC_R),LSFT(KC_P),KC_BSPC,KC_LCTL,LSFT(KC_A),LSFT(KC_O),LSFT(KC_E),LSFT(KC_U),LSFT(KC_I),LSFT(KC_H),LSFT(KC_J),LSFT(KC_K),LSFT(KC_L),LSFT(KC_EQL),KC_ENT,KC_TRNS,LSFT(KC_Z),LSFT(KC_X),LSFT(KC_C),LSFT(KC_V),LSFT(KC_B),RESET,RESET,LSFT(KC_N),LSFT(KC_M),LSFT(KC_COMM),LSFT(KC_DOT),LSFT(KC_SLSH),KC_TRNS,KC_LALT,KC_NO,DF(10),LSFT(KC_LGUI),KC_LANG2,LSFT(KC_SPC),KC_NO,KC_NO,LSFT(KC_SPC),KC_LANG1,LSFT(KC_RGUI),KC_NO,DF(1),DF(0)),

	/*
		layer 10
		+---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------+
		|   ---   |  DF.0   |  DF.1   |  DF.2   |  DF.3   |  DF.4   |                   |  DF.5   |  DF.6   |  DF.7   |  DF.8   |  DF.9   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |  DF.0   |  DF.0   |  DF.0   |  DF.0   |  DF.0   |                   |  DF.0   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+         +         +---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |                   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |  Reset  |  Reset  |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |
		|---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------|
		|   ---   |   ---   |  Trans  |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |   ---   |  DF.1   |  DF.0   |
		+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+---------+
	*/
	[10] = LAYOUT(KC_NO,DF(0),DF(1),DF(2),DF(3),DF(4),DF(5),DF(6),DF(7),DF(8),DF(9),KC_NO,KC_NO,DF(0),DF(0),DF(0),DF(0),DF(0),DF(0),KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,RESET,RESET,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_TRNS,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,DF(1),DF(0))

};

