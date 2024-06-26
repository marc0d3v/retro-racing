//tiling grid: 1x1
// 24 bit color + alpha AAAAAAAARRRRRRRRGGGGGGGGBBBBBBBB
//dimension data
#define crate_WIDTH	15
#define crate_HEIGHT	15

//byte array representing the picture
const unsigned char crateData[] = {
0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xBB, 0x46, 0x37, 0xFF, 0xB4, 0x66, 0x00, 0xFF, 0xB5, 0x64, 0x03
, 0xFF, 0xB4, 0x66, 0x00, 0xFF, 0xBB, 0x46, 0x37, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xB9, 0x3F, 0x3F, 0xFF, 0xB9, 0x54, 0x24, 0xFF, 0xC6, 0x77, 0x01
, 0xFF, 0xC8, 0x79, 0x02, 0xFF, 0xD6, 0x83, 0x04, 0xFF, 0xD2, 0x7D, 0x04, 0xFF, 0xD2, 0x7C, 0x04
, 0xFF, 0xC8, 0x78, 0x02, 0xFF, 0xC6, 0x77, 0x01, 0xFF, 0xB9, 0x53, 0x24, 0xFF, 0xB9, 0x3F, 0x3F
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xC7, 0x6D, 0x05
, 0xFF, 0xD9, 0x83, 0x01, 0xFF, 0xC8, 0x71, 0x00, 0xFF, 0xD3, 0x78, 0x02, 0xFF, 0xEC, 0x8A, 0x00
, 0xFF, 0xF3, 0x91, 0x00, 0xFF, 0xEF, 0x8B, 0x00, 0xFF, 0xE8, 0x80, 0x00, 0xFF, 0xE7, 0x82, 0x00
, 0xFF, 0xD5, 0x7B, 0x02, 0xFF, 0xD0, 0x7E, 0x00, 0xFF, 0xDB, 0x85, 0x01, 0xFF, 0xC7, 0x6D, 0x05
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xB2, 0x62, 0x00, 0xFF, 0xE2, 0x80, 0x04, 0xFF, 0xD2, 0x72, 0x03
, 0xFF, 0xC9, 0x6C, 0x03, 0xFF, 0xBA, 0x64, 0x02, 0xFF, 0xC6, 0x6D, 0x02, 0xFF, 0xD4, 0x7A, 0x01
, 0xFF, 0xDB, 0x85, 0x02, 0xFF, 0xD9, 0x82, 0x02, 0xFF, 0xCB, 0x74, 0x02, 0xFF, 0xBA, 0x64, 0x02
, 0xFF, 0xC9, 0x6C, 0x01, 0xFF, 0xCF, 0x6E, 0x01, 0xFF, 0xDD, 0x79, 0x01, 0xFF, 0xAE, 0x5D, 0x00
, 0xFF, 0xB6, 0x65, 0x03, 0xFF, 0xD7, 0x83, 0x05, 0xFF, 0xD2, 0x7F, 0x04, 0xFF, 0xD7, 0x81, 0x04
, 0xFF, 0xDA, 0x7F, 0x05, 0xFF, 0xCD, 0x72, 0x04, 0xFF, 0xC4, 0x69, 0x03, 0xFF, 0xCF, 0x74, 0x03
, 0xFF, 0xC2, 0x66, 0x01, 0xFF, 0xC9, 0x6D, 0x01, 0xFF, 0xD5, 0x78, 0x01, 0xFF, 0xD0, 0x7B, 0x02
, 0xFF, 0xCA, 0x79, 0x02, 0xFF, 0xD0, 0x7D, 0x02, 0xFF, 0xB2, 0x5F, 0x00, 0xFF, 0xB5, 0x64, 0x03
, 0xFF, 0xD0, 0x7A, 0x04, 0xFF, 0xEA, 0x86, 0x00, 0xFF, 0xE6, 0x87, 0x01, 0xFF, 0xD4, 0x78, 0x02
, 0xFF, 0xDC, 0x86, 0x04, 0xFF, 0xF3, 0x94, 0x06, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xEB, 0x89, 0x00
, 0xFF, 0xD3, 0x7E, 0x02, 0xFF, 0xC2, 0x71, 0x02, 0xFF, 0xD2, 0x7C, 0x01, 0xFF, 0xD2, 0x7A, 0x00
, 0xFF, 0xC6, 0x75, 0x02, 0xFF, 0xB1, 0x5F, 0x00, 0xFF, 0xB5, 0x64, 0x03, 0xFF, 0xD1, 0x7B, 0x04
, 0xFF, 0xEC, 0x88, 0x00, 0xFF, 0xEE, 0x88, 0x00, 0xFF, 0xE9, 0x7D, 0x00, 0xFF, 0xEA, 0x8D, 0x01
, 0xFF, 0xD8, 0x84, 0x05, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xD2, 0x7D, 0x02, 0xFF, 0xD8, 0x82, 0x01
, 0xFF, 0xCB, 0x71, 0x00, 0xFF, 0xD5, 0x7B, 0x00, 0xFF, 0xD4, 0x7B, 0x00, 0xFF, 0xC7, 0x75, 0x02
, 0xFF, 0xB1, 0x5F, 0x00, 0xFF, 0xB5, 0x64, 0x03, 0xFF, 0xD1, 0x7B, 0x04, 0xFF, 0xEC, 0x88, 0x00
, 0xFF, 0xEE, 0x88, 0x00, 0xFF, 0xE7, 0x7D, 0x00, 0xFF, 0xEC, 0x8F, 0x00, 0xFF, 0xD5, 0x82, 0x05
, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xCF, 0x7B, 0x02, 0xFF, 0xD9, 0x83, 0x00, 0xFF, 0xCA, 0x71, 0x00
, 0xFF, 0xD5, 0x7B, 0x00, 0xFF, 0xD4, 0x7B, 0x00, 0xFF, 0xC7, 0x75, 0x02, 0xFF, 0xB1, 0x5F, 0x00
, 0xFF, 0xB5, 0x64, 0x03, 0xFF, 0xD1, 0x7B, 0x04, 0xFF, 0xEC, 0x88, 0x00, 0xFF, 0xEE, 0x88, 0x00
, 0xFF, 0xE7, 0x7D, 0x00, 0xFF, 0xEC, 0x8E, 0x00, 0xFF, 0xD6, 0x82, 0x05, 0xFF, 0xD5, 0x72, 0x02
, 0xFF, 0xCF, 0x7B, 0x02, 0xFF, 0xD9, 0x83, 0x00, 0xFF, 0xCA, 0x71, 0x00, 0xFF, 0xD5, 0x7B, 0x00
, 0xFF, 0xD4, 0x7B, 0x00, 0xFF, 0xC7, 0x75, 0x02, 0xFF, 0xB1, 0x5F, 0x00, 0xFF, 0xB5, 0x64, 0x03
, 0xFF, 0xD1, 0x7B, 0x04, 0xFF, 0xEC, 0x88, 0x00, 0xFF, 0xEE, 0x88, 0x00, 0xFF, 0xE7, 0x7D, 0x00
, 0xFF, 0xEC, 0x8E, 0x00, 0xFF, 0xD6, 0x82, 0x05, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xCF, 0x7B, 0x02
, 0xFF, 0xD9, 0x83, 0x00, 0xFF, 0xCA, 0x71, 0x00, 0xFF, 0xD5, 0x7B, 0x00, 0xFF, 0xD4, 0x7B, 0x00
, 0xFF, 0xC7, 0x75, 0x02, 0xFF, 0xB1, 0x5F, 0x00, 0xFF, 0xB5, 0x65, 0x03, 0xFF, 0xD1, 0x7B, 0x04
, 0xFF, 0xEC, 0x88, 0x00, 0xFF, 0xEE, 0x88, 0x00, 0xFF, 0xE8, 0x7D, 0x00, 0xFF, 0xEC, 0x8E, 0x00
, 0xFF, 0xD6, 0x82, 0x05, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xCF, 0x7B, 0x02, 0xFF, 0xD9, 0x83, 0x00
, 0xFF, 0xCB, 0x71, 0x00, 0xFF, 0xD5, 0x7C, 0x00, 0xFF, 0xD4, 0x7B, 0x00, 0xFF, 0xC7, 0x75, 0x02
, 0xFF, 0xB1, 0x5F, 0x00, 0xFF, 0xAD, 0x61, 0x00, 0xFF, 0xCE, 0x7D, 0x03, 0xFF, 0xD6, 0x80, 0x03
, 0xFF, 0xE4, 0x83, 0x01, 0xFF, 0xE3, 0x7C, 0x00, 0xFF, 0xED, 0x8F, 0x00, 0xFF, 0xD6, 0x82, 0x05
, 0xFF, 0xD5, 0x72, 0x02, 0xFF, 0xCF, 0x7C, 0x02, 0xFF, 0xDA, 0x84, 0x00, 0xFF, 0xC8, 0x70, 0x00
, 0xFF, 0xCE, 0x78, 0x01, 0xFF, 0xCC, 0x7A, 0x02, 0xFF, 0xD9, 0x81, 0x00, 0xFF, 0xAA, 0x5D, 0x00
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xC3, 0x5E, 0x1E, 0xFF, 0xC5, 0x71, 0x06, 0xFF, 0xD1, 0x80, 0x01
, 0xFF, 0xD5, 0x82, 0x01, 0xFF, 0xD8, 0x83, 0x02, 0xFF, 0xD5, 0x82, 0x05, 0xFF, 0xD6, 0x72, 0x02
, 0xFF, 0xCF, 0x7C, 0x02, 0xFF, 0xCC, 0x7C, 0x02, 0xFF, 0xCF, 0x7F, 0x01, 0xFF, 0xCE, 0x7E, 0x01
, 0xFF, 0xC1, 0x6C, 0x02, 0xFF, 0xC3, 0x5B, 0x1B, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xBD, 0x5F, 0x3C, 0xFF, 0xBF, 0x50, 0x2D
, 0xFF, 0xCA, 0x78, 0x03, 0xFF, 0xDF, 0x86, 0x04, 0xFF, 0xD6, 0x73, 0x02, 0xFF, 0xD8, 0x7D, 0x00
, 0xFF, 0xC5, 0x71, 0x00, 0xFF, 0xBE, 0x4F, 0x2D, 0xFF, 0xBD, 0x5F, 0x3C, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xC0, 0x39, 0x50, 0xFF, 0xA3, 0x54, 0x00, 0xFF, 0xBE, 0x36, 0x4F, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC, 0xFF, 0xFF, 0x00, 0xCC
, 0xFF, 0xFF, 0x00, 0xCC};

