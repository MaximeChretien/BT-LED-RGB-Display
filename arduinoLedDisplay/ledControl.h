// Name : ledControl.h 
// Description : Define the functions used to control the display 
//		and the string processing
// Authors : Maxime Chretien (MixLeNain)
// Version : 1.0

#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include "characters.h"
#include "FastLED.h" //Used to control the led display

#define LEDPIN 2
#define MAXSTRSIZE 50
#define NUM_LEDS 150

const short ledsIndex[NUM_LEDS] = {	000, 001, 002, 003, 004, 005, 006, 007, 008, 009, 010, 011, 012, 013, 014, 015, 016, 017, 018, 019, 020, 021, 022, 023, 024, 025, 026, 027, 028, 029,
					059, 058, 057, 056, 055, 054, 053, 052, 051, 050, 049, 048, 047, 046, 045, 044, 043, 042, 041, 040, 039, 038, 037, 036, 035, 034, 033, 032, 031, 030,
					060, 061, 062, 063, 064, 065, 066, 067, 068, 069, 070, 071, 072, 073, 074, 075, 076, 077, 078, 079, 080, 081, 082, 083, 084, 085, 086, 087, 088, 089,
					119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 099, 098, 097, 096, 095, 094, 093, 092, 091, 090,
					120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149};
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