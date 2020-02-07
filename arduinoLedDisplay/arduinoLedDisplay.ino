// Name : arduinoLedDisplay.ino
// Description : Main file of the project arduinoLedDisplay
// Authors : Maxime Chretien (MixLeNain) & Therence Forot
// Version : 0.3

#include "ledControl.h"

String text = "";
bool textChanged = false;


void setup() {
	initDisplay();
	
	text = "GEII 2020 !";
	textChanged = true;
	Serial.begin(9600);
}

void loop() {
	if(textChanged) {
		changeText(text);
		textChanged = false;
	}




	updateDisplay();
	delay(100);
}
