
//{{BLOCK(sprite)

//======================================================================
//
//	sprite, 16x16@8, 
//	+ palette 5 entries, not compressed
//	+ 4 tiles Metatiled by 2x2 not compressed
//	Total size: 10 + 256 = 266
//
//	Time-stamp: 2017-04-05, 06:08:37
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.6
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short spriteTiles[128] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0100,0x0000,0x0000,0x0000,0x0101,
	0x0000,0x0000,0x0100,0x0101,0x0000,0x0000,0x0101,0x0101,
	0x0000,0x0100,0x0101,0x0101,0x0000,0x0101,0x0101,0x0101,
	0x0100,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,0x0101,
	0x0003,0x0000,0x0000,0x0000,0x0303,0x0000,0x0000,0x0000,
	0x0303,0x0003,0x0000,0x0000,0x0303,0x0303,0x0000,0x0000,
	0x0303,0x0303,0x0003,0x0000,0x0303,0x0303,0x0303,0x0000,
	0x0303,0x0303,0x0303,0x0003,0x0303,0x0303,0x0303,0x0303,

	0x0404,0x0404,0x0404,0x0404,0x0400,0x0404,0x0404,0x0404,
	0x0000,0x0404,0x0404,0x0404,0x0000,0x0400,0x0404,0x0404,
	0x0000,0x0000,0x0404,0x0404,0x0000,0x0000,0x0400,0x0404,
	0x0000,0x0000,0x0000,0x0404,0x0000,0x0000,0x0000,0x0400,
	0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0202,0x0002,
	0x0202,0x0202,0x0202,0x0000,0x0202,0x0202,0x0002,0x0000,
	0x0202,0x0202,0x0000,0x0000,0x0202,0x0002,0x0000,0x0000,
	0x0202,0x0000,0x0000,0x0000,0x0002,0x0000,0x0000,0x0000,
};

const unsigned short spritePal[6] __attribute__((aligned(4)))=
{
	0x0000,0x001E,0x7FFF,0x03E0,0x7C1F,
};

//}}BLOCK(sprite)