// Name : arduinoLedDisplay.ino
// Description : Main file of the project arduinoLedDisplay
// Authors : Maxime Chretien (MixLeNain) & Therence Forot
// Version : 0.1

#include "ledControl.h"

String text = "";
bool textChanged = false;


void setup() {
	initDisplay();
}

void loop() {
	if(textChanged)
		changeText(text);




	updateDisplay();
	delay(10);
}
