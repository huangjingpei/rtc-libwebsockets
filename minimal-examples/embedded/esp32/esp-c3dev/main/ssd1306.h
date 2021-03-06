#if !defined(__LWS_SSD1306_H__)
#define __LWS_SSD1306_H__

/*
 * D/C# pin on SSD1306 sets the I2C slave ads
 * from these two options (7-bit address)
 */

#define SSD1306_I2C7_ADS1	0x3c
#define SSD1306_I2C7_ADS2	0x3d

enum {
	SSD1306_SETLOWCOLUMN		= 0x00,
	SSD1306_SETHIGHCOLUMN		= 0x10,

	SSD1306_MEMORYMODE		= 0x20,
	SSD1306_COLUMNADDR		= 0x21,
	SSD1306_PAGEADDR		= 0x22,
	SSD1306_DEACTIVATE_SCROLL	= 0x2e,

	SSD1306_SETSTARTLINE		= 0x40,

	SSD1306_SETCONTRAST		= 0x81,
	SSD1306_CHARGEPUMP		= 0x8d,

	SSD1306_SEGREMAP		= 0xa0,
	SSD1306_SETSEGMENTREMAP		= 0xa1,
	SSD1306_DISPLAYALLON_RESUME	= 0xa4,
	SSD1306_DISPLAYALLON		= 0xa5,
	SSD1306_NORMALDISPLAY		= 0xa6,
	SSD1306_INVERTDISPLAY		= 0xa7,
	SSD1306_SETMULTIPLEX		= 0xa8,
	SSD1306_DISPLAYOFF	 	= 0xae,
	SSD1306_DISPLAYON		= 0xaf,

	SSD1306_COMSCANINC		= 0xc0,
	SSD1306_COMSCANDEC		= 0xc8,

	SSD1306_SETDISPLAYOFFSET	= 0xd3,
	SSD1306_SETDISPLAYCLOCKDIV	= 0xd5,
	SSD1306_SETPRECHARGE		= 0xd9,
	SSD1306_SETCOMPINS		= 0xda,
	SSD1306_SETVCOMDESELECT		= 0xdb,

	SSD1306_NOP			= 0xe3,

	SSD1306_EXTERNALVCC		= 0x01,
	SSD1306_SWITCHCAPVCC		= 0x02,
};

#endif

