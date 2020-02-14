// Name : arduinoLedDisplay.ino
// Description : Main file of the project arduinoLedDisplay
// Authors : Maxime Chretien (MixLeNain) & Therence Forot
// Version : 0.3

#include <SoftwareSerial.h>

#include "ledControl.h"

String text = "";

SoftwareSerial bluetooth(10, 11); //Bluetooth RX and TX

void setup() {
	initDisplay();
	
	changeText(F(" GEII2"));

	Serial.begin(9600);
	bluetooth.begin(9600);
}

void loop() {

	if(bluetooth.available()) {
		char c = bluetooth.read();
		Serial.write(c);

		text += c;

		if(c == '\0') {
			changeText(text);
			text = "";
		}
	}


	updateDisplay();
	delay(200);
}
