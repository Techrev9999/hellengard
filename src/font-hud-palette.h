uint8_t palette[] = {
0x00,0x00,0x00,0x00,0xff,0x0f,0x00,0x0f,0xa0,0x0f,0xf0,0x0f,0xf0,0x00,0xff,0x00,
0x0f,0x00,0x0f,0x0f,0x00,0x0b,0x90,0x00,0x09,0x00,0x9d,0x06,0x6b,0x04,0x49,0x02,
0x00,0x00,0x33,0x03,0x55,0x05,0x77,0x07,0x99,0x09,0xbb,0x0b,0xdd,0x0d,0xff,0x0f,
0xff,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00,
0x00,0x00,0xdf,0x0b,0xbd,0x09,0x9b,0x06,0x69,0x04,0x46,0x02,0x24,0x00,0x22,0x07,
0xd3,0x0f,0x01,0x0b,0x01,0x0f,0x67,0x0f,0xdd,0x0f,0xef,0x09,0xef,0x09,0xef,0x09,
0x66,0x00,0x44,0x00,0x22,0x00,0xdd,0x0f,0xbb,0x0d,0x99,0x0b,0x66,0x09,0x44,0x06,
0x22,0x04,0xbb,0x0f,0x99,0x0d,0x66,0x0b,0x44,0x09,0x22,0x06,0x99,0x0f,0x66,0x0d,
0x44,0x0b,0x22,0x09,0x66,0x0f,0x44,0x0d,0x22,0x0b,0x44,0x0f,0x22,0x0d,0x22,0x0f,
0xfd,0x0d,0xdb,0x0b,0xb9,0x09,0x96,0x06,0x64,0x04,0x42,0x02,0xfb,0x0b,0xd9,0x09,
0xb6,0x06,0x94,0x04,0x62,0x02,0xf9,0x09,0xd6,0x06,0xb4,0x04,0x92,0x02,0xf6,0x06,
0xd4,0x04,0xb2,0x02,0xf4,0x04,0xd2,0x02,0xf2,0x02,0xdf,0x0d,0xbd,0x0b,0x9b,0x09,
0x69,0x06,0x46,0x04,0x24,0x02,0xbf,0x0b,0x9d,0x09,0x6b,0x06,0x49,0x04,0x26,0x02,
0x9f,0x09,0x6d,0x06,0x4b,0x04,0x29,0x02,0x6f,0x06,0x4d,0x04,0x2b,0x02,0x4f,0x04,
0x2d,0x02,0x2f,0x02,0xfd,0x0f,0xdb,0x0d,0xb9,0x0b,0x96,0x09,0x64,0x06,0x42,0x04,
0xfb,0x0f,0xd9,0x0d,0xb6,0x0b,0x94,0x09,0x62,0x06,0xf9,0x0f,0xd6,0x0d,0xb4,0x0b,
0x92,0x09,0xf6,0x0f,0xd4,0x0d,0xb2,0x0b,0xf4,0x0f,0xd2,0x0d,0xf2,0x0f,0xdf,0x0f,
0xbd,0x0d,0x9b,0x0b,0x69,0x09,0x46,0x06,0x24,0x04,0xbf,0x0f,0x9d,0x0d,0x6b,0x0b,
0x49,0x09,0x26,0x06,0x9f,0x0f,0x6d,0x0d,0x4b,0x0b,0x29,0x09,0x6f,0x0f,0x4d,0x0d,
0x2b,0x0b,0x4f,0x0f,0x2d,0x0d,0x2f,0x0f,0xff,0x0d,0xdd,0x0b,0xbb,0x09,0x99,0x06,
0x66,0x04,0x44,0x02,0xff,0x0b,0xdd,0x09,0xbb,0x06,0x99,0x04,0x66,0x02,0xff,0x09,
0xdd,0x06,0xbb,0x04,0x99,0x02,0xff,0x06,0xdd,0x04,0xbb,0x02,0xff,0x04,0xdd,0x02,
0xff,0x02,0xdb,0x0f,0xb9,0x0d,0x96,0x0b,0x64,0x09,0x42,0x06,0x20,0x04,0xb9,0x0f,
0x96,0x0d,0x64,0x0b,0x42,0x09,0x20,0x06,0xbd,0x0f,0x9b,0x0d,0x69,0x0b,0x46,0x09,
0x24,0x06,0x02,0x04,0x9b,0x0f,0x69,0x0d,0x46,0x0b,0x24,0x09,0x02,0x06,0xbf,0x0d,
0x9d,0x0b,0x6b,0x09,0x49,0x06,0x26,0x04,0x04,0x02,0x9f,0x0b,0x6d,0x09,0x4b,0x06,
0x29,0x04,0x06,0x02,0xdf,0x0b,0xbd,0x09,0x9b,0x06,0x69,0x04,0x46,0x02,0x24,0x00,
0xbf,0x09,0x9d,0x06,0x6b,0x04,0x49,0x02,0x26,0x00,0xfd,0x0b,0xdb,0x09,0xb9,0x06,
0x96,0x04,0x64,0x02,0x42,0x00,0xfb,0x09,0xd9,0x06,0xb6,0x04,0x94,0x02,0x62,0x00,
0xfb,0x0d,0xd9,0x0b,0xb6,0x09,0x94,0x06,0x62,0x04,0x40,0x02,0xf9,0x0b,0xd6,0x09,
0xb4,0x06,0x92,0x04,0x60,0x02,0xb0,0x0f,0x90,0x0d,0x60,0x0b,0x40,0x09,0x0b,0x0f,
0x09,0x0d,0x06,0x0b,0x04,0x09,0xbf,0x00,0x9d,0x00,0x6b,0x00,0x49,0x00,0x00,0x00,
};
