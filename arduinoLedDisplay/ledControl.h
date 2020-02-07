// Name : ledControl.h 
// Description : Define the functions used to control the display 
//		and the string processing
// Authors : Maxime Chretien (MixLeNain)
// Version : 1.2

#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include "characters.h"
#include "FastLED.h" //Used to control the led display

#define LEDPIN 6
#define MAXSTRSIZE 50
#define NUM_LEDS 145
#define LINESIZE 29

//Number of blank pixels at the end of the text for a smooth scrolling effect
#define BLANKPIXELS 8
#define BLANKCHARS ((BLANKPIXELS / 8) + (((BLANKPIXELS % 8) != 0) ? 1 : 0))
#define ARRAYSIZE MAXSTRSIZE+BLANKCHARS

const uint8_t ledsIndex[NUM_LEDS] = {	  0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,
					 57,  56,  55,  54,  53,  52,  51,  50,  49,  48,  47,  46,  45,  44,  43,  42,  41,  40,  39,  38,  37,  36,  35,  34,  33,  32,  31,  30,  29,
					 58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,  69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,  84,  85,  86,
					115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100,  99,  98,  97,  96,  95,  94,  93,  92,  91,  90,  89,  88,  87,
					116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144};
CRGB leds[NUM_LEDS];
CRGB textColor = CRGB::Red;

//Start index when writing on the display (char index + pixel index)
uint8_t textIndex[2] = {0, 0};

bool scroll = true;

struct charInPixels {
	character charPix;
	CRGB color;
};

struct charInPixels textInPixels[ARRAYSIZE+1]; //Add one for terminating char


void initDisplay();
void changeText(String text);
void updateDisplay();
CRGB getPixColor(uint8_t line, uint8_t charIndex, uint8_t pixIndex);

#endif
