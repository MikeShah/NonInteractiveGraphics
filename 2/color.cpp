// @file color.cpp
// Common way to represent color is to use some sort of
// record ('struct' in C or C++) to store the color
// channels.

// 24-bits of data
struct RGB{
    uint8_t r; // Range of 0-255
    uint8_t g; // Range of 0-255
    uint8_t b; // Range of 0-255
};

// 32-bits of data (with alpha channel)
struct RGBA{
    uint8_t r; // Range of 0-255
    uint8_t g; // Range of 0-255
    uint8_t b; // Range of 0-255
    uint8_t a; // Range of 0-255
};

// 96-bits of data (single precesion floating point)
struct RGBA{
    float r; // Range of 0-255
    float g; // Range of 0-255
    float b; // Range of 0-255
};

// 128-bits of data (with alpha channel)
struct RGBA{
    float r; // Range
    float g; // Range of 0-255
    float b; // Range of 0-255
    float a; // Range of 0-255
};

// Note: There are 'half floats' and things
//       of that nature ('minifloats') if you
//       really want to save some memory
//
//
// Note: Sometimes folks will also just use
//       an 'int' and then use bit shifting
//       operations to access bytes for R,G,B, or A
//       color channels.


