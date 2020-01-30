// Name : characters.h
// Description : define the char struct and the way to show each char
// 		using the led display (pixels repartition)
// Authors : Maxime Chretien (MixLeNain)
// Version : 0.1

#ifndef CHARACTERS_H
#define CHARACTERS_H

#define NBCHAR 50

struct characters {
	uint8_t length;
	uint8_t pixels[5];
};

const struct characters chars[NBCHAR];

#endif