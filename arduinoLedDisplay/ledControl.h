// Name : ledControl.h 
// Description : Define the functions used to control the display 
//		and the string processing
// Authors : Maxime Chretien (MixLeNain)
// Version : 0.1

#ifndef LEDCONTROL_H
#define LEDCONTROL_H

#include "characters.h"

#define MAXSTRSIZE 50

short dataPin = 0;
struct characters textInPixels[MAXSTRSIZE];


void initDisplay(short pin);
void changeText(String text);
void updateDisplay();

#endif