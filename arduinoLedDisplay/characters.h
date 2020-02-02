// Name : characters.h
// Description : define the char struct and the way to show each char
// 		using the led display (pixels repartition)
// Authors : Maxime Chretien (MixLeNain)
// Version : 1.0

#ifndef CHARACTERS_H
#define CHARACTERS_H

//Number of defined chars : Letter+digits+others
#define NBCHAR 26+10+31

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
	},
	//Space
	{3, {	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000}
	},
	//Period
	{1, {	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000001}
	},
	//Exclamation
	{1, {	0b00000001,
		0b00000001,
		0b00000001,
		0b00000000,
		0b00000001}
	},
	//Interrogation
	{3, {	0b00000110,
		0b00000001,
		0b00000110,
		0b00000000,
		0b00000100}
	},
	//Apostrophe
	{2, {	0b00000001,
		0b00000010,
		0b00000000,
		0b00000000,
		0b00000000}
	},
	//Minus
	{3, {	0b00000000,
		0b00000000,
		0b00000000,
		0b00000111,
		0b00000000}
	},
	//Plus
	{3, {	0b00000000,
		0b00000000,
		0b00000010,
		0b00000111,
		0b00000010}
	},
	//Slash
	{3, {	0b00000001,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000100}
	},
	//Backslash
	{3, {	0b00000100,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000001}
	},
	//Percent
	{3, {	0b00000101,
		0b00000001,
		0b00000010,
		0b00000100,
		0b00000101}
	},
	//Less than
	{3, {	0b00000000,
		0b00000000,
		0b00000001,
		0b00000010,
		0b00000001}
	},
	//More than
	{3, {	0b00000000,
		0b00000000,
		0b00000010,
		0b00000001,
		0b00000010}
	},
	//Underscore
	{3, {	0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000111}
	},
	//Equal
	{3, {	0b00000000,
		0b00000000,
		0b00000111,
		0b00000000,
		0b00000111}
	},
	//Open parenthesis
	{2, {	0b00000001,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000001}
	},
	//Close parenthesis
	{2, {	0b00000010,
		0b00000001,
		0b00000001,
		0b00000001,
		0b00000010}
	},
	//Open bracket
	{2, {	0b00000011,
		0b00000010,
		0b00000010,
		0b00000010,
		0b00000011}
	},
	//Close bracket
	{2, {	0b00000011,
		0b00000001,
		0b00000001,
		0b00000001,
		0b00000011}
	},
	//Open curly bracket
	{3, {	0b00000011,
		0b00000010,
		0b00000110,
		0b00000010,
		0b00000011}
	},
	//Close curly bracket
	{3, {	0b00000110,
		0b00000010,
		0b00000011,
		0b00000010,
		0b00000110}
	},
	//At sign
	{5, {	0b00001110,
		0b00010001,
		0b00010100,
		0b00011010,
		0b00001101}
	},
	//Asterisk
	{3, {	0b00000101,
		0b00000010,
		0b00000101,
		0b00000000,
		0b00000000}
	},
	//Caret
	{3, {	0b00000010,
		0b00000101,
		0b00000000,
		0b00000000,
		0b00000000}
	},
	//Hash
	{5, {	0b00001010,
		0b00011111,
		0b00001010,
		0b00011111,
		0b00001010}
	},
	//Comma
	{2, {	0b00000000,
		0b00000000,
		0b00000000,
		0b00000001,
		0b00000010}
	},
	//Semicolon
	{2, {	0b00000000,
		0b00000001,
		0b00000000,
		0b00000001,
		0b00000010}
	},
	//Colon
	{1, {	0b00000000,
		0b00000000,
		0b00000001,
		0b00000000,
		0b00000001}
	},
	//Grave accent
	{2, {	0b00000010,
		0b00000001,
		0b00000000,
		0b00000000,
		0b00000000}
	},
	//Tilde
	{4, {	0b00000000,
		0b00000000,
		0b00000101,
		0b00001010,
		0b00000000}
	},
	//Vertical bar
	{1, {	0b00000001,
		0b00000001,
		0b00000001,
		0b00000001,
		0b00000001}
	},
	//Quotes
	{3, {	0b00000101,
		0b00000101,
		0b00000000,
		0b00000000,
		0b00000000}
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
		switch (symbol) {
			case ' ':
				result = chars[36];
				break;
			case '.':
				result = chars[37];
				break;
			case '!':
				result = chars[38];
				break;
			case '?':
				result = chars[39];
				break;
			case '\'':
				result = chars[40];
				break;
			case '-':
				result = chars[41];
				break;
			case '+':
				result = chars[42];
				break;
			case '/':
				result = chars[43];
				break;
			case '\\':
				result = chars[44];
				break;
			case '%':
				result = chars[45];
				break;
			case '<':
				result = chars[46];
				break;
			case '>':
				result = chars[47];
				break;
			case '_':
				result = chars[48];
				break;
			case '=':
				result = chars[49];
				break;
			case '(':
				result = chars[50];
				break;
			case ')':
				result = chars[51];
				break;
			case '[':
				result = chars[52];
				break;
			case ']':
				result = chars[53];
				break;
			case '{':
				result = chars[54];
				break;
			case '}':
				result = chars[55];
				break;
			case '@':
				result = chars[56];
				break;
			case '*':
				result = chars[57];
				break;
			case '^':
				result = chars[58];
				break;
			case '#':
				result = chars[59];
				break;
			case ',':
				result = chars[60];
				break;
			case ';':
				result = chars[61];
				break;
			case ':':
				result = chars[62];
				break;
			case '`':
				result = chars[63];
				break;
			case '~':
				result = chars[64];
				break;
			case '|':
				result = chars[65];
				break;
			case '"':
				result = chars[66];
				break;
			default :
				result = {4, {0,0,1,0,0}};
		}
	}

	return result;
}

#endif
