#include <Arduino.h>
#include <SPI.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
TFT_eSprite img = TFT_eSprite(&tft);

// ' Clock', 64x64px
const unsigned char icon__Clock [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x0f, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x01, 0xf8, 0x00, 0x00, 0x3f, 0x80, 0x00, 
	0x00, 0x03, 0xf0, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x07, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x00, 
	0x00, 0x0f, 0x80, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x3c, 0x00, 0x03, 0x80, 0x00, 0x7c, 0x00, 
	0x00, 0x7c, 0x00, 0x03, 0xc0, 0x00, 0x3c, 0x00, 0x00, 0x78, 0x00, 0x03, 0xc0, 0x00, 0x3e, 0x00, 
	0x00, 0xf0, 0x00, 0x03, 0xc0, 0x00, 0x1e, 0x00, 0x00, 0xf0, 0x00, 0x03, 0xc0, 0x00, 0x1f, 0x00, 
	0x01, 0xf0, 0x00, 0x03, 0xc0, 0x00, 0x0f, 0x00, 0x01, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x0f, 0x00, 
	0x01, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x0f, 0x00, 0x03, 0xe0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x03, 0xc0, 0x00, 0x07, 0x80, 0x03, 0xc0, 0x00, 0x03, 0xf0, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x01, 0xf8, 0x00, 0x07, 0x80, 0x03, 0xc0, 0x00, 0x00, 0xfe, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x7f, 0x00, 0x07, 0x80, 0x03, 0xe0, 0x00, 0x00, 0x1f, 0x80, 0x07, 0x80, 
	0x01, 0xe0, 0x00, 0x00, 0x0f, 0x80, 0x0f, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x07, 0x80, 0x0f, 0x00, 
	0x01, 0xe0, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
	0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 
	0x00, 0x0f, 0x80, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x00, 
	0x00, 0x07, 0xe0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x3f, 0x80, 0x00, 
	0x00, 0x00, 0xfe, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x07, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// ' Face', 64x64px
const unsigned char icon__Face [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0x80, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x01, 0xfe, 0x00, 0x00, 0x7f, 0x00, 0x00, 
	0x00, 0x03, 0xf8, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 
	0x00, 0x0f, 0xc0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x01, 0xf0, 0x00, 
	0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 
	0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 
	0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
	0x01, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 
	0x01, 0xe0, 0x0f, 0x80, 0x03, 0xe0, 0x0f, 0x80, 0x03, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0x80, 
	0x03, 0xc0, 0x0f, 0xc0, 0x03, 0xf0, 0x07, 0x80, 0x03, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0x80, 
	0x03, 0xc0, 0x0f, 0x80, 0x03, 0xe0, 0x07, 0x80, 0x03, 0xc0, 0x02, 0x00, 0x00, 0x80, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 
	0x03, 0xc0, 0x0e, 0x00, 0x00, 0xf0, 0x07, 0x80, 0x03, 0xc0, 0x1f, 0x00, 0x00, 0xf0, 0x07, 0x80, 
	0x01, 0xe0, 0x1f, 0x00, 0x01, 0xf0, 0x0f, 0x80, 0x01, 0xe0, 0x0f, 0x80, 0x03, 0xe0, 0x0f, 0x00, 
	0x01, 0xe0, 0x07, 0xe0, 0x0f, 0xc0, 0x0f, 0x00, 0x00, 0xf0, 0x03, 0xfc, 0x7f, 0x80, 0x1f, 0x00, 
	0x00, 0xf0, 0x01, 0xff, 0xff, 0x00, 0x1e, 0x00, 0x00, 0xf8, 0x00, 0xff, 0xfe, 0x00, 0x3e, 0x00, 
	0x00, 0x7c, 0x00, 0x3f, 0xf8, 0x00, 0x7c, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x80, 0x00, 0x7c, 0x00, 
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 
	0x00, 0x0f, 0xc0, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x0f, 0xc0, 0x00, 
	0x00, 0x03, 0xf0, 0x00, 0x00, 0x1f, 0x80, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 0x7f, 0x00, 0x00, 
	0x00, 0x00, 0xff, 0x80, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x7f, 0xfc, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// ' Luz', 64x64px
const unsigned char icon__Luz [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
	0x00, 0x00, 0x07, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xf0, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 
	0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 
	0x03, 0xf8, 0x7f, 0xff, 0xff, 0xfc, 0x3f, 0x00, 0x03, 0xf8, 0x7f, 0xff, 0xff, 0xfc, 0x7f, 0x00, 
	0x01, 0xf0, 0x7f, 0xff, 0xff, 0x3c, 0x3f, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x3c, 0x00, 0x00, 
	0x00, 0x00, 0x7f, 0xff, 0xff, 0x38, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x38, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0xff, 0xfe, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x70, 0x00, 0x00, 
	0x00, 0x00, 0x1f, 0xff, 0xf8, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe1, 0xe0, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xff, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xcf, 0xc0, 0x00, 0x00, 
	0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xe0, 0x7f, 0xf8, 0x0c, 0x00, 0x00, 0x00, 0x01, 0xe0, 0x0f, 0xc0, 0x0e, 0x00, 0x00, 
	0x00, 0x03, 0xc0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x03, 0x80, 0x00, 
	0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// ' Menu', 64x64px
const unsigned char icon__Menu [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xf0, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x03, 0xc0, 0x01, 0xe0, 0x03, 0x80, 0x03, 0xc0, 0x03, 0xf0, 0x01, 0xe0, 0x03, 0x80, 
	0x03, 0xc0, 0x03, 0xf8, 0x01, 0xe0, 0x03, 0x80, 0x03, 0xc0, 0x00, 0xfc, 0x01, 0xe0, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x3e, 0x01, 0xe0, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x1e, 0x01, 0xe0, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x1e, 0x01, 0xe0, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x0f, 0x01, 0xe0, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x0f, 0x01, 0xe0, 0x03, 0x80, 0x03, 0xc7, 0x80, 0x0f, 0x01, 0xe3, 0xc3, 0x80, 
	0x03, 0xc3, 0x80, 0x0e, 0x01, 0xe3, 0xc3, 0x80, 0x03, 0xc3, 0xc0, 0x1e, 0x01, 0xe3, 0xc3, 0x80, 
	0x03, 0xc3, 0xe0, 0x3e, 0x01, 0xe3, 0xc3, 0x80, 0x03, 0xc1, 0xf0, 0x7c, 0x01, 0xe3, 0xc3, 0x80, 
	0x03, 0xc1, 0xff, 0xfc, 0x01, 0xe3, 0xc3, 0x80, 0x03, 0xc0, 0xff, 0xf8, 0x01, 0xe3, 0xc3, 0x80, 
	0x03, 0xc0, 0x3f, 0xe0, 0x01, 0xe3, 0xc3, 0x80, 0x03, 0xc0, 0x0f, 0x80, 0x01, 0xc3, 0xc3, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 
	0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 
	0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// ' Riego', 64x64px
const unsigned char icon__Riego [] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x38, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x0c, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xc3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0xf3, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x07, 0xf1, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0e, 0x39, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x1c, 0x7d, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x79, 0xef, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0xc0, 0xe3, 0xc7, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc7, 0x07, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0xc7, 0x9e, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0xce, 0x3c, 0x01, 0x80, 
	0x00, 0x00, 0x00, 0x00, 0x7c, 0x70, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x71, 0xe0, 0x00, 0xe0, 
	0x00, 0x00, 0x00, 0x00, 0x63, 0x80, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x30, 
	0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x1c, 
	0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x0c, 
	0x00, 0x1f, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x0c, 0x00, 0x9f, 0x7d, 0xe0, 0x06, 0x00, 0x00, 0x1c, 
	0x03, 0xc0, 0x19, 0xf0, 0x1f, 0x00, 0x00, 0x38, 0x07, 0x80, 0x01, 0xbf, 0xff, 0x80, 0x00, 0x70, 
	0x06, 0x00, 0x7b, 0x3f, 0xff, 0xc0, 0x00, 0xe0, 0x00, 0x00, 0x7b, 0x30, 0x00, 0xc0, 0x03, 0xc0, 
	0x18, 0x0f, 0x03, 0x3f, 0x00, 0x60, 0x07, 0x00, 0x30, 0x1e, 0x03, 0xff, 0xfc, 0x70, 0x1e, 0x00, 
	0x30, 0x18, 0x19, 0xf1, 0xff, 0xf8, 0x3c, 0x00, 0x20, 0x40, 0x38, 0x00, 0x07, 0xfc, 0x70, 0x00, 
	0x00, 0xc0, 0x70, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 
	0x01, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x06, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 2640)
const int iconArray_LEN = 5;
const unsigned char* iconArray[5] = {
	icon__Clock,
	icon__Face,
	icon__Luz,
	icon__Menu,
	icon__Riego
};

char iconNameArray[iconArray_LEN] [20]= {
	{"CLOCK"},
	{"FACE"},
	{"LUZ"},
	{"MENU"},
	{"RIEGO"}
};

//PWM variables
int pwmPin = 2;
int pwmChannel = 0;
int pwmRes = 8;
int pwdFrequency = 1000;
int dt = 5;

//Screen selection variables
int current_icon = 0;
int previous_icon = iconArray_LEN - 1;
int next_icon = current_icon + 1;
bool itemPage = 0;

//Rotary encoder inclusion variables
#define DTPin 21
#define CLKPin 19
#define button 22

int OldStateCLK;
int NewStateCLK;
int counter = 0;

unsigned long startTime = 0;
unsigned long pressedTime = 0;
int pressedThreshold = 300;



//////////////////////////////
//Startup animation function//
//////////////////////////////

void startupAnimation(){

	tft.fillScreen(TFT_BLACK);
	tft.setTextColor(TFT_WHITE);
	tft.setTextSize(6);
	tft.setCursor(80, 100);
	tft.println("MA-z");

	//TFT initiation animation// (turn into a function and call it out in the setup at startup)
	for (int k = 0; k < 5; k++){

	for (int i = 0; i < 255; i++){
		ledcWrite(pwmChannel, i);
		delay(dt);
	}
	for (int j = 255; j >= 0; j--){
		ledcWrite(pwmChannel, j);
		delay(dt);
	}
	delay(100);
	}

	delay(1000);
	tft.fillScreen(TFT_BLACK);

	ledcWrite(pwmChannel, 255);
}

//////////////////////////////
//Drawing the selection menu//
//////////////////////////////

void drawSelectionMenu() {

	img.setColorDepth(8);
	img.createSprite(320,240);
	img.fillSprite(TFT_BLACK);
	img.setTextColor(TFT_WHITE);
	img.setTextSize(4);

	//Previous icon
	img.drawBitmap(16,8,iconArray[previous_icon],64,64,TFT_WHITE, TFT_BLACK);
	img.drawString(iconNameArray[previous_icon],100,22);

	//Current icon
	img.drawBitmap(16,88,iconArray[current_icon],64,64,TFT_WHITE, TFT_BLACK);
	img.drawString(iconNameArray[current_icon],100,102);

	//Next icon
	img.drawBitmap(16,168,iconArray[next_icon],64,64,TFT_WHITE, TFT_BLACK);
	img.drawString(iconNameArray[next_icon],100,184);

	//Selection square
	// img.drawBitmap(0,80,icon_Select,64,64,TFT_WHITE);
	img.drawRoundRect(0,80,320,80,5,TFT_WHITE);

	img.pushSprite(0,0, TFT_TRANSPARENT);
	img.deleteSprite();

}

//////////////////////////////
//Drawing the specified item//
//////////////////////////////

void drawSelectedItem(int selectedItem) {

	img.setColorDepth(8);
	img.createSprite(320,240);
	img.fillSprite(TFT_BLACK);
	img.setTextColor(TFT_WHITE);
	img.setTextSize(4);

	//clock
	if (selectedItem == 0) {
		img.setTextSize(6);
		img.drawCentreString("12:00:00",160,80,1);
		img.setTextSize(2);
		img.drawCentreString("Monday, 1 January 2024", 160, 160, 1);
	}
	//face
	if (selectedItem == 1) {img.drawCentreString("Ups...", 160, 120, 1);}
	//luz
	if (selectedItem == 2) {img.drawCentreString("Ups...", 160, 120, 1);}
	//menu
	if (selectedItem == 3) {img.drawCentreString("Ups...", 160, 120, 1);}
	//riego
	if (selectedItem == 4) {img.drawCentreString("Ups...", 160, 120, 1);}

	img.pushSprite(0,0, TFT_TRANSPARENT);
	img.deleteSprite();

}






//////////////////////
//		Setup		//
//////////////////////

void setup() 
{
	Serial.begin(9600);

	//knob setup//
	pinMode(DTPin, INPUT);
	pinMode(CLKPin, INPUT);
	pinMode(button, INPUT);

	OldStateCLK = digitalRead(CLKPin);

	//PWM setup//
	ledcSetup(pwmChannel, pwdFrequency, pwmRes);
	ledcAttachPin(pwmPin, pwmChannel);

	//TFT setup//
	tft.init();
	tft.setRotation(3);
    tft.fillScreen(TFT_BLACK);
	ledcWrite(pwmChannel,255);

	// startupAnimation();
	drawSelectionMenu();
}

//////////////////////
//		Loop		//
//////////////////////

void loop() 
{

	//////////////////////////////
	//Geting rotary encoder info//
	//////////////////////////////

	NewStateCLK = digitalRead(CLKPin);

    if (NewStateCLK != OldStateCLK) {
		if (itemPage == 0) {

			if (digitalRead(DTPin) == NewStateCLK) {counter++;}	
			else {counter--;}	
			if (counter < 0) {counter = iconArray_LEN - 1;}
			if (counter > iconArray_LEN - 1) {counter = 0;}
			
			current_icon = counter;

			previous_icon = current_icon - 1;
			if (previous_icon < 0) {previous_icon = iconArray_LEN - 1;}
			next_icon = current_icon + 1;
			if (next_icon > iconArray_LEN - 1) {next_icon = 0;}

			drawSelectionMenu();

		}
	}

	if (digitalRead(button) != 1) {
		
		//Determine how long the button has been pressed

		startTime = millis();
        while (digitalRead(button) == 0) {}
        delay(10);
		pressedTime = millis() - startTime;

		if (itemPage == 0 && pressedTime < pressedThreshold) {
			drawSelectedItem(current_icon);
			itemPage = 1;
		}
		if (itemPage == 1 && pressedTime > pressedThreshold) {
			itemPage = 0;
			drawSelectionMenu();
		}
		
    }

	OldStateCLK = NewStateCLK;
}