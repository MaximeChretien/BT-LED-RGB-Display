#ifndef CHARACTERS_H
#define CHARACTERS_H

#define NBCHAR 50

struct characters {
	uint8_t length;
	uint8_t pixels[5];
};

const struct characters chars[NBCHAR];

#endif