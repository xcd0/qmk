
//SSD1306 OLED update loop, make sure to add #define SSD1306OLED in config.h
#ifdef SSD1306OLED

void matrix_scan_user(void) {
     iota_gfx_task();  // this is what updates the display continuously
}

void matrix_update(struct CharacterMatrix *dest,
                          const struct CharacterMatrix *source) {
  if (memcmp(dest->display, source->display, sizeof(dest->display))) {
    memcpy(dest->display, source->display, sizeof(dest->display));
    dest->dirty = true;
  }
}


//assign the right code to your layers for OLED display

//#define L_BASE 0
//#define L_YSTRP (1<<_YSTRP)
#define L_YSTRP 0
#define L_SHIFT (1<<_SHIFT)
#define L_RIGHT (1<<_RIGHT)
#define L_LEFT (1<<_LEFT)
#define L_MOUSE (1<<_MOUSE)

#define L_QWERTY (1<<_QWERTY)


static void render_logo(struct CharacterMatrix *matrix) {

  static char logo[]={
    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
    0};
  matrix_write(matrix, logo);
  //matrix_write_P(&matrix, PSTR(" Split keyboard kit"));
}



void render_status(struct CharacterMatrix *matrix) {
	// Render to mode icon
	static char logo[][2][3]={{{0x95,0x96,0},{0xb5,0xb6,0}},{{0x97,0x98,0},{0xb7,0xb8,0}}};
	if(keymap_config.swap_lalt_lgui==false){
		matrix_write(matrix, logo[0][0]);
		matrix_write_P(matrix, PSTR("\n"));
		matrix_write(matrix, logo[0][1]);
	}else{
		matrix_write(matrix, logo[1][0]);
		matrix_write_P(matrix, PSTR("\n"));
		matrix_write(matrix, logo[1][1]);
	}
	
	// Define layers here, Have not worked out how to have text displayed for each layer.
	// Copy down the number you see and add a case for it below
	char buf[40];
	snprintf(buf,sizeof(buf), "Undef-%ld", layer_state);
	matrix_write_P(matrix, PSTR("\nLayer: "));
	switch (layer_state) {
		case L_YSTRP:
			matrix_write_P(matrix, PSTR("Ystrp"));
			break;
		case L_SHIFT:
			matrix_write_P(matrix, PSTR("Shift"));
			break;
		case L_RIGHT:
			matrix_write_P(matrix, PSTR("Right"));
			break;
		case L_LEFT:
			matrix_write_P(matrix, PSTR("Left"));
			break;
		case L_MOUSE:
			matrix_write_P(matrix, PSTR("Mouse"));
			break;
		case L_QWERTY:
			matrix_write_P(matrix, PSTR("Qwerty"));
			break;
		default:
			matrix_write(matrix, buf);
	}

	// Host Keyboard LED Status
	char led[40];
	snprintf(led, sizeof(led), "\n%s  %s  %s",
		(host_keyboard_leds() & (1<<USB_LED_NUM_LOCK)) ? "NUMLOCK" : "       ",
		(host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) ? "CAPS" : "    ",
		(host_keyboard_leds() & (1<<USB_LED_SCROLL_LOCK)) ? "SCLK" : "    ");
	matrix_write(matrix, led);
}


void iota_gfx_task_user(void) {
  struct CharacterMatrix matrix;

#if DEBUG_TO_SCREEN
  if (debug_enable) {
    return;
  }
#endif

  matrix_clear(&matrix);
  if(is_master){
    render_status(&matrix);
  }else{
    render_logo(&matrix);
  }
  matrix_update(&display, &matrix);
}


#endif
