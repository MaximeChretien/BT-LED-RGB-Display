// Name : arduinoLedDisplay.ino
// Description : Main file of the project arduinoLedDisplay
// Authors : Maxime Chretien (MixLeNain) & Therence Forot
// Version : 0.1

#include "ledControl.h"

#define LEDPIN 2

String text = "";
bool textChanged = false;


void setup() {
	initDisplay(LEDPIN);
}

void loop() {
	if(textChanged)
		changeText(text);




	updateDisplay();
	delay(10);
}
