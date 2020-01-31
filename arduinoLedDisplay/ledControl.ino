// Name : ledControl.ino
// Description : Implement the functions defined in ledControl.h 
// Authors : Maxime Chretien (MixLeNain)
// Version : 1.0

#include "ledControl.h"

void initDisplay() {
	FastLED.addLeds<SK6812, LEDPIN, RGB>(leds, NUM_LEDS);
}

void changeText(String text) {
	char textCh[MAXSTRSIZE];
	text.toCharArray(textCh, MAXSTRSIZE);

	//Convert each chars into pixels and store them in the array
	short i;
	for(i = 0; i < MAXSTRSIZE && textCh[i]!='\0'; i++) {
		textInPixels[i].charPix = getCharacter(textCh[i]);
		textInPixels[i].color = textColor;
	}

	//Use a 0 sized character to specify the end of the string
	if(i < MAXSTRSIZE) {
		textInPixels[i].charPix = {0, {0,0,0,0,0}};
		textInPixels[i].color = textColor;
	}

	//Reset start index
	textIndex[0] = 0;
	textIndex[1] = 0;
}

void updateDisplay() {
	short dispIndex = 0; //Column index on the display
	short charIndex = textIndex[0]; //Character index in textInPixels
	short pixIndex = textIndex[1];	//Pixel index in the character

	while(dispIndex < 30) {
		//If we have reached the end of the text
		if(pixIndex == -1) {
			//Turn off the remaining leds
			for (dispIndex; dispIndex < 30; dispIndex++) {
				leds[ledsIndex[dispIndex]] = CRGB::Black;
				leds[ledsIndex[dispIndex + 30]] = CRGB::Black;
				leds[ledsIndex[dispIndex + 60]] = CRGB::Black;
				leds[ledsIndex[dispIndex + 90]] = CRGB::Black;
				leds[ledsIndex[dispIndex + 120]] = CRGB::Black;
			}

			break; //Go out of the loop
		}

		//Get the pixels for the current character
		while(pixIndex >= 0 && dispIndex < 30) {

			//Get the color for each led in this column
			leds[ledsIndex[dispIndex]] = getPixColor(0, charIndex, pixIndex);
			leds[ledsIndex[dispIndex + 30]] = getPixColor(1, charIndex, pixIndex);
			leds[ledsIndex[dispIndex + 60]] = getPixColor(2, charIndex, pixIndex);
			leds[ledsIndex[dispIndex + 90]] = getPixColor(3, charIndex, pixIndex);
			leds[ledsIndex[dispIndex + 120]] = getPixColor(4, charIndex, pixIndex);

			pixIndex--;
			dispIndex++;
		}

		//Add a blank column after each character (space between characters)
		if(dispIndex < 30) {
			leds[ledsIndex[dispIndex]] = CRGB::Black;
			leds[ledsIndex[dispIndex + 30]] = CRGB::Black;
			leds[ledsIndex[dispIndex + 60]] = CRGB::Black;
			leds[ledsIndex[dispIndex + 90]] = CRGB::Black;
			leds[ledsIndex[dispIndex + 120]] = CRGB::Black;

			dispIndex++;
		}

		charIndex++;
		pixIndex = textInPixels[charIndex].charPix.length-1;
	}

	//Decrease the start pixel index
	textIndex[1]--;

	//If we have finished with the current character increase the start character index
	if(textIndex[1] < 0) {
		textIndex[0]++;

		//If we have reached the end of the text, go back to the beggining
		if(textInPixels[textIndex[0]].charPix.length == 0) {
			textIndex[0] = 0;
		}

		textIndex[1] = textInPixels[textIndex[0]].charPix.length;
	}

	//Display the text on the display
	FastLED.show();
}

CRGB getPixColor(short line, short charIndex, short pixIndex) {
	//Read the corresponding bit and turn on the led if it's a 1
	if(bitRead(textInPixels[charIndex].charPix.pixels[line], pixIndex)) {
		return textInPixels[charIndex].color;
	} else {
		return CRGB::Black;
	}
}
