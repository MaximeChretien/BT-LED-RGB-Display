// Name : characters.h
// Description : define the char struct and the way to show each char
// 		using the led display (pixels repartition)
// Authors : Maxime Chretien (MixLeNain)
// Version : 0.2

#ifndef CHARACTERS_H
#define CHARACTERS_H

#define NBCHAR 26+10

//character struct
struct character {
	uint8_t length; //number of bit used
	uint8_t pixels[5]; //used to store bits
};

const struct character chars[NBCHAR] = {
	//Letter A
	{4, {	0b00000110,
		0b00001001,
		0b00001111,
		0b00001001,
		0b00001001}
	},
	//Letter B
	{4, {	0b00001110,
		0b00001001,
		0b00001110,
		0b00001001,
		0b00001110}
	},
	//Letter C
	{4, {	0b00000111,
		0b00001000,
		0b00001000,
		0b00001000,
		0b00000111}
	},
	//Letter D
	{4, {	0b00001110,
		0b00001001,
		0b00001001,
		0b00001001,
		0b00001110}
	},
	//Letter E
	{4, {	0b00001111,
		0b00001000,
		0b00001110,
		0b00001000,
		0b00001111}
	},
	//Letter F
	{4, {	0b00001111,
		0b00001000,
		0b00001110,
		0b00001000,
		0b00001000}
	},
	//Letter G
	{4, {	0b00000111,
		0b00001000,
		0b00001011,
		0b00001001,
		0b00000111}
	},
	//Letter H
	{4, {	0b00001001,
		0b00001001,
		0b00001111,
		0b00001001,
		0b00001001}
	},
	//Letter I
	{3, {	0b00000111,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000111}
	},
	//Letter J
	{4, {	0b00000001,
		0b00000001,
		0b00000001,
		0b00001001,
		0b00000110}
	},
	//Letter K
	{4, {	0b00001001,
		0b00001010,
		0b00001100,
		0b00001010,
		0b00001001}
	},
	//Letter L
	{3, {	0b00000100,
		0b00000100,
		0b00000100,
		0b00000100,
		0b00000111}
	},
	//Letter M
	{5, {	0b00010001,
		0b00011011,
		0b00010101,
		0b00010001,
		0b00010001}
	},
	//Letter N
	{4, {	0b00001001,
		0b00001101,
		0b00001011,
		0b00001001,
		0b00001001}
	},
	//Letter O
	{4, {	0b00000110,
		0b00001001,
		0b00001001,
		0b00001001,
		0b00000110}
	},
	//Letter P
	{4, {	0b00001110,
		0b00001001,
		0b00001110,
		0b00001000,
		0b00001000}
	},
	//Letter Q
	{4, {	0b00000110,
		0b00001001,
		0b00001001,
		0b00001011,
		0b00000111}
	},
	//Letter R
	{4, {	0b00001110,
		0b00001001,
		0b00001110,
		0b00001010,
		0b00001001}
	},
	//Letter S
	{4, {	0b00000111,
		0b00001000,
		0b00000110,
		0b00000001,
		0b00001110}
	},
	//Letter T
	{3, {	0b00000111,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000010}
	},
	//Letter U
	{4, {	0b00001001,
		0b00001001,
		0b00001001,
		0b00001001,
		0b00001111}
	},
	//Letter V
	{3, {	0b00000101,
		0b00000101,
		0b00000101,
		0b00000101,
		0b00000010}
	},
	//Letter W
	{5, {	0b00010001,
		0b00010001,
		0b00010001,
		0b00010101,
		0b00001010}
	},
	//Letter X
	{3, {	0b00000101,
		0b00000101,
		0b00000010,
		0b00000101,
		0b00000101}
	},
	//Letter Y
	{3, {	0b00000101,
		0b00000101,
		0b00000111,
		0b00000010,
		0b00000010}
	},
	//Letter Z
	{4, {	0b00001111,
		0b00000001,
		0b00000010,
		0b00000100,
		0b00001111}
	},
	//Number 0
	{4, {	0b00000110,
		0b00001001,
		0b00001001,
		0b00001001,
		0b00000110}
	},
	//Number 1
	{3, {	0b00000010,
		0b00000110,
		0b00000010,
		0b00000010,
		0b00000111}
	},
	//Number 2
	{4, {	0b00000110,
		0b00001001,
		0b00000011,
		0b00000100,
		0b00001111}
	},
	//Number 3
	{4, {	0b00001110,
		0b00000001,
		0b00000111,
		0b00000001,
		0b00001110}
	},
	//Number 4
	{4, {	0b00001000,
		0b00001010,
		0b00000111,
		0b00000010,
		0b00000010}
	},
	//Number 5
	{4, {	0b00001111,
		0b00001000,
		0b00001111,
		0b00000001,
		0b00001111}
	},
	//Number 6
	{4, {	0b00000111,
		0b00001000,
		0b00001110,
		0b00001001,
		0b00000110}
	},
	//Number 7
	{4, {	0b00000110,
		0b00001001,
		0b00000010,
		0b00000100,
		0b00000100}
	},
	//Number 8
	{4, {	0b00000110,
		0b00001001,
		0b00000110,
		0b00001001,
		0b00000110}
	},
	//Number 9
	{4, {	0b00000110,
		0b00001001,
		0b00000111,
		0b00000001,
		0b00000110}
	}
};


//Return the correct struct corresponding to the given char
struct character getCharacter(char symbol) {
	struct character result;

	symbol = tolower(symbol); //lowercase because we don't support case
	
	if (symbol >= 'a' && symbol < 'z') {
		result = chars[symbol - 'a'];

	} else if (symbol >= '0' && symbol < '9') {
		result = chars[26 + (symbol - '0')];
	} else {
		result = {4, {0,0,0,0,0}};
	}

	return result;
}

#endif
