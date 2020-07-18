const char bitmap1[32] PROGMEM = { //heart
	0x01,0x80,
	0x02,0x40,
	0x04,0x20,
	0x08,0x10,
	0x10,0x08,
	0x20,0x04,
	0x40,0x02,
	0x80,0x01,
	0x80,0x01,
	0x80,0x01,
	0x80,0x01,
	0x40,0x02,
	0x41,0x82,
	0x22,0x44,
	0x1C,0x38,
	0x00,0x00 };
	
	const char bitmap2[32] PROGMEM = {  // pacman mouth closed
	0xFF,0xFF,
	0xFF,0xFF,
	0xFC,0x3F,
	0xF9,0x9F,
	0xF3,0xCF,
	0xE7,0xE7,
	0xCF,0xF3,
	0xDF,0x03,
	0xDE,0xFB,
	0xCF,0xF3,
	0xE7,0xA7,
	0xF3,0xCF,
	0xF9,0x9F,
	0xFE,0x3F,
	0xFF,0xFF,	
	};
	
	const char bitmap3[32] PROGMEM = {  // pacman mouth semi-open
		0xFF,0xFF,
		0xFF,0xFF,
		0xFC,0x3F,
		0xF9,0x9F,
		0xF3,0xCF,
		0xE7,0xE7,
		0xCF,0x07,
		0xDF,0x7F,
		0xDF,0x07,
		0xCF,0xF7,
		0xE7,0xA7,
		0xF3,0xCF,
		0xF9,0x9F,
		0xFE,0x3F,
		0xFF,0xFF,
		0xFF,0xFF };
		
const char bitmap4[32] PROGMEM = { // pacman mouth open
	0xFF,0xFF,
	0xFF,0xFF,
	0xF8,0x3F,
	0xF3,0x8F,
	0xE7,0xEF,
	0xCF,0xDF,
	0x9F,0xBF,
	0xBF,0x7F,
	0xBF,0xBF,
	0x9F,0xDF,
	0xCE,0xEF,
	0xE7,0xCF,
	0xF3,0x9F,
	0xF8,0x3F,
	0xFF,0xFF,
	0xFF,0xFF };