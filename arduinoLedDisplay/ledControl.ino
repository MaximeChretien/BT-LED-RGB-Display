// Name : ledControl.ino
// Description : Implement the functions defined in ledControl.h 
// Authors : Maxime Chretien (MixLeNain)
// Version : 1.1

#include "ledControl.h"

void initDisplay() {
	FastLED.addLeds<SK6812, LEDPIN, GRB>(leds, NUM_LEDS);
}

void changeText(String text) {
	uint8_t pixSize = 0;

	char textCh[MAXSTRSIZE];
	text.toCharArray(textCh, MAXSTRSIZE);

	//Convert each chars into pixels and store them in the array
	uint8_t i;
	for(i = 0; i < MAXSTRSIZE && textCh[i]!='\0'; i++) {
		textInPixels[i].charPix = getCharacter(textCh[i]);
		textInPixels[i].color = textColor;

		pixSize += textInPixels[i].charPix.length+1;
	}

	//Use a 0 sized character to specify the end of the string
	if(i < MAXSTRSIZE) {
		textInPixels[i].charPix = {0, {0,0,0,0,0}};
		textInPixels[i].color = textColor;
	}

	//Enable scrolling if the text is larger than the screen
	scroll = (pixSize > 30) ? true : false;

	//Reset start index
	textIndex[0] = 0;
	textIndex[1] = textInPixels[textIndex[0]].charPix.length-1;
}

void updateDisplay() {
	uint8_t dispIndex = 0; //Column index on the display
	uint8_t charIndex = textIndex[0]; //Character index in textInPixels
	uint8_t pixIndex = textIndex[1]; //Pixel index in the character

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

	//Enable scroll effect if needed
	if(scroll) {
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
	}

	//Display the text on the display
	FastLED.show();
}

CRGB getPixColor(uint8_t line, uint8_t charIndex, uint8_t pixIndex) {
	//Read the corresponding bit and turn on the led if it's a 1
	if(bitRead(textInPixels[charIndex].charPix.pixels[line], pixIndex)) {
		return textInPixels[charIndex].color;
	} else {
		return CRGB::Black;
	}
}
