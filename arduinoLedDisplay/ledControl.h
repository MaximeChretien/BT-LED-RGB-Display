// Name : ledControl.h 
// Description : Define the functions used to control the display 
//		and the string processing
// Authors : Maxime Chretien (MixLeNain)
// Version : 0.1

#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include "characters.h"
#include "FastLED.h" //Used to control the led display

#define LEDPIN 2
#define MAXSTRSIZE 50
#define NUM_LEDS 150


CRGB leds[NUM_LEDS];
CRGB textColor = CRGB::Red;

short textIndex[2] = {0, 0}; //Start index when writing on the display (char index + pixel index)

struct charInPixels {
	character charPix;
	CRGB color;
};

struct charInPixels textInPixels[MAXSTRSIZE];


void initDisplay(short pin);
void changeText(String text);
void updateDisplay();
CRGB getPixColor(short charIndex, short pixIndex);

#endif