/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\HP\Documents\SquareLine\assets\Orbitron-VariableFont_wght.ttf -o C:\Users\HP\Documents\SquareLine\assets\ui_font_Display16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_DISPLAY16
#define UI_FONT_DISPLAY16 1
#endif

#if UI_FONT_DISPLAY16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0x20,

    /* U+0022 "\"" */
    0x99,

    /* U+0023 "#" */
    0x4, 0x20, 0x84, 0x8, 0x47, 0xff, 0x10, 0xc1,
    0x8, 0x10, 0x8f, 0xfe, 0x21, 0x2, 0x10, 0x63,
    0x0,

    /* U+0024 "$" */
    0x4, 0x0, 0x81, 0xff, 0x42, 0x18, 0x41, 0x8,
    0x21, 0x3, 0xfe, 0x4, 0x20, 0x84, 0x10, 0xc2,
    0x17, 0xfc, 0x8, 0x1, 0x0,

    /* U+0025 "%" */
    0x70, 0xa, 0x20, 0x68, 0x83, 0x22, 0x18, 0x71,
    0x80, 0xc, 0x0, 0x63, 0x83, 0x11, 0x30, 0x45,
    0x81, 0x14, 0x3, 0x80,

    /* U+0026 "&" */
    0x3f, 0xc1, 0x1, 0x84, 0x0, 0x10, 0x0, 0x60,
    0x2, 0x60, 0x8, 0x62, 0x20, 0xe8, 0x80, 0xe2,
    0x0, 0xe7, 0xfc, 0x40,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x72, 0x49, 0x24, 0x91, 0x80,

    /* U+0029 ")" */
    0x95, 0x55, 0x58,

    /* U+002A "*" */
    0x10, 0x23, 0xf9, 0xc2, 0x8d, 0x80,

    /* U+002B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x1, 0x1, 0x2, 0x4, 0x8, 0x18, 0x30, 0x20,
    0x40, 0x80, 0x0,

    /* U+0030 "0" */
    0x7f, 0xd0, 0xe, 0x3, 0xc0, 0xd8, 0x33, 0x1c,
    0x66, 0xd, 0x81, 0xe0, 0x38, 0x5, 0xff, 0x0,

    /* U+0031 "1" */
    0x37, 0xd1, 0x11, 0x11, 0x11, 0x10,

    /* U+0032 "2" */
    0x7f, 0xd0, 0x4, 0x0, 0x80, 0x10, 0x2, 0xff,
    0xa0, 0x4, 0x0, 0x80, 0x10, 0x3, 0xff, 0x80,

    /* U+0033 "3" */
    0x7f, 0xc8, 0x2, 0x0, 0x20, 0x2, 0x0, 0x23,
    0xfe, 0x0, 0x10, 0x1, 0x0, 0x18, 0x1, 0x7f,
    0xe0,

    /* U+0034 "4" */
    0x1, 0x80, 0x70, 0x1a, 0x6, 0x41, 0x88, 0x41,
    0x30, 0x27, 0xff, 0x0, 0x80, 0x10, 0x2, 0x0,

    /* U+0035 "5" */
    0xff, 0xf0, 0x2, 0x0, 0x40, 0x8, 0x1, 0xff,
    0x80, 0x8, 0x1, 0x0, 0x30, 0x5, 0xff, 0x0,

    /* U+0036 "6" */
    0x7f, 0x90, 0x2, 0x0, 0x40, 0x8, 0x1, 0xff,
    0xa0, 0xc, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+0037 "7" */
    0xff, 0x80, 0x10, 0x4, 0x1, 0x0, 0x40, 0x10,
    0x4, 0x1, 0x0, 0x40, 0x10, 0x4,

    /* U+0038 "8" */
    0x7f, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0xff,
    0xe0, 0xc, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+0039 "9" */
    0x7f, 0xe8, 0x1, 0x80, 0x18, 0x1, 0x80, 0x17,
    0xff, 0x0, 0x10, 0x1, 0x0, 0x10, 0x1, 0xff,
    0xe0,

    /* U+003A ":" */
    0x80, 0x80,

    /* U+003B ";" */
    0x81, 0xc0,

    /* U+003C "<" */
    0x2, 0x1c, 0xe7, 0xc, 0xc, 0xe, 0x7, 0x2,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x81, 0xc0, 0xc0, 0xe0, 0x63, 0x9c, 0x60, 0x80,

    /* U+003F "?" */
    0xff, 0x80, 0x10, 0x4, 0x1, 0x0, 0x47, 0xe2,
    0x0, 0x80, 0x0, 0x0, 0x2, 0x0,

    /* U+0040 "@" */
    0x7f, 0xd0, 0x6, 0x0, 0xc7, 0x99, 0xb, 0x21,
    0x64, 0x2c, 0x7f, 0x80, 0x10, 0x1, 0xff, 0x80,

    /* U+0041 "A" */
    0x7f, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x7f, 0xfc, 0x1, 0x80, 0x30, 0x6, 0x0, 0x80,

    /* U+0042 "B" */
    0xff, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0xff,
    0xe0, 0xc, 0x1, 0x80, 0x30, 0x7, 0xff, 0x0,

    /* U+0043 "C" */
    0x7f, 0xf8, 0x0, 0x80, 0x8, 0x0, 0x80, 0x8,
    0x0, 0x80, 0x8, 0x0, 0x80, 0x8, 0x0, 0x7f,
    0xf0,

    /* U+0044 "D" */
    0xff, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x7, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x3f, 0xc8,
    0x2, 0x0, 0x80, 0x20, 0xf, 0xfc,

    /* U+0046 "F" */
    0xff, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x3f, 0xc8,
    0x2, 0x0, 0x80, 0x20, 0x8, 0x0,

    /* U+0047 "G" */
    0x7f, 0xd0, 0x6, 0x0, 0x40, 0x8, 0x1, 0x3,
    0xe0, 0xc, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+0048 "H" */
    0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80, 0x1f,
    0xff, 0x80, 0x18, 0x1, 0x80, 0x18, 0x1, 0x80,
    0x10,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x2, 0x0,
    0x40, 0x8, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+004B "K" */
    0x80, 0x50, 0x12, 0x6, 0x41, 0x88, 0x61, 0xf8,
    0x21, 0x84, 0x18, 0x81, 0x90, 0x12, 0x1, 0x0,

    /* U+004C "L" */
    0x80, 0x10, 0x2, 0x0, 0x40, 0x8, 0x1, 0x0,
    0x20, 0x4, 0x0, 0x80, 0x10, 0x3, 0xff, 0x80,

    /* U+004D "M" */
    0xc0, 0x1f, 0x1, 0xec, 0x1b, 0x31, 0x98, 0xd8,
    0xc3, 0x86, 0x8, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x2,

    /* U+004E "N" */
    0xc0, 0x3c, 0x6, 0xc0, 0xcc, 0x18, 0x83, 0x8,
    0x60, 0x8c, 0x19, 0x81, 0xb0, 0x1e, 0x1, 0x80,

    /* U+004F "O" */
    0x7f, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+0050 "P" */
    0xff, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x7f, 0xf4, 0x0, 0x80, 0x10, 0x2, 0x0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0xc4, 0x1, 0x20, 0x9, 0x0, 0x48, 0x2,
    0x40, 0x12, 0x0, 0x90, 0x4, 0x80, 0x24, 0x1,
    0x1f, 0xfe,

    /* U+0052 "R" */
    0xff, 0xd0, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x7f, 0xf4, 0x18, 0x81, 0x90, 0x1a, 0x1, 0x0,

    /* U+0053 "S" */
    0x7f, 0xd0, 0x6, 0x0, 0x40, 0x8, 0x0, 0xff,
    0x80, 0x8, 0x1, 0x0, 0x30, 0x5, 0xff, 0x0,

    /* U+0054 "T" */
    0xff, 0xf0, 0x40, 0x4, 0x0, 0x40, 0x4, 0x0,
    0x40, 0x4, 0x0, 0x40, 0x4, 0x0, 0x40, 0x4,
    0x0,

    /* U+0055 "U" */
    0x80, 0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0,
    0x60, 0xc, 0x1, 0x80, 0x30, 0x5, 0xff, 0x0,

    /* U+0056 "V" */
    0x80, 0x7, 0x0, 0x36, 0x1, 0x88, 0x4, 0x30,
    0x30, 0x40, 0x81, 0x84, 0x3, 0x30, 0x4, 0x80,
    0x1e, 0x0, 0x30, 0x0,

    /* U+0057 "W" */
    0x81, 0x80, 0xe0, 0xe0, 0xd0, 0x50, 0x48, 0x6c,
    0x26, 0x22, 0x31, 0x11, 0x10, 0x98, 0xd8, 0x68,
    0x2c, 0x1c, 0x14, 0xc, 0xe, 0x2, 0x2, 0x0,

    /* U+0058 "X" */
    0xc0, 0x6c, 0x18, 0xc6, 0xd, 0x80, 0xe0, 0x8,
    0x3, 0x80, 0xd8, 0x31, 0x8c, 0x1b, 0x1, 0x80,

    /* U+0059 "Y" */
    0xc0, 0x68, 0x8, 0x82, 0x18, 0xc1, 0xb0, 0x1c,
    0x1, 0x0, 0x20, 0x4, 0x0, 0x80, 0x10, 0x0,

    /* U+005A "Z" */
    0xff, 0xf0, 0x3, 0x0, 0x60, 0x1c, 0x3, 0x0,
    0x60, 0xc, 0x3, 0x80, 0x60, 0xc, 0x0, 0xff,
    0xf0,

    /* U+005B "[" */
    0xea, 0xaa, 0xac,

    /* U+005C "\\" */
    0x80, 0x80, 0x40, 0x20, 0x10, 0x18, 0xc, 0x4,
    0x2, 0x1, 0x0,

    /* U+005D "]" */
    0xd5, 0x55, 0x5c,

    /* U+005F "_" */
    0xff, 0xf0,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0xff, 0x0, 0x40, 0x20, 0x1f, 0xfc, 0x6, 0x3,
    0x1, 0x7f, 0x80,

    /* U+0062 "b" */
    0x80, 0x40, 0x20, 0x1f, 0xe8, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x3f, 0xe0,

    /* U+0063 "c" */
    0x7f, 0xe0, 0x8, 0x2, 0x0, 0x80, 0x20, 0x8,
    0x2, 0x0, 0x7f, 0xc0,

    /* U+0064 "d" */
    0x0, 0x80, 0x40, 0x2f, 0xf8, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x2f, 0xf0,

    /* U+0065 "e" */
    0x7f, 0x40, 0x60, 0x30, 0x1f, 0xfc, 0x2, 0x1,
    0x0, 0x7f, 0x80,

    /* U+0066 "f" */
    0x7e, 0x8, 0x3f, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x20,

    /* U+0067 "g" */
    0x7f, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x7f, 0x80, 0x40, 0x20, 0x17, 0xf0,

    /* U+0068 "h" */
    0x80, 0x40, 0x20, 0x1f, 0xe8, 0xc, 0x6, 0x3,
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x10,

    /* U+0069 "i" */
    0x9f, 0xf0,

    /* U+006A "j" */
    0x4, 0x0, 0x1, 0x4, 0x10, 0x41, 0x4, 0x10,
    0x41, 0x4, 0x10, 0x7e,

    /* U+006B "k" */
    0x80, 0x40, 0x20, 0x10, 0x28, 0x34, 0x32, 0x31,
    0xf0, 0x8c, 0x43, 0x20, 0xd0, 0x20,

    /* U+006C "l" */
    0x88, 0x88, 0x88, 0x88, 0x88, 0x87,

    /* U+006D "m" */
    0xff, 0xfd, 0x2, 0x6, 0x4, 0xc, 0x8, 0x18,
    0x10, 0x30, 0x20, 0x60, 0x40, 0xc0, 0x81, 0x81,
    0x2,

    /* U+006E "n" */
    0xff, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x80, 0x80,

    /* U+006F "o" */
    0x7f, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x7f, 0x0,

    /* U+0070 "p" */
    0xff, 0x40, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0xff, 0x40, 0x20, 0x10, 0x8, 0x0,

    /* U+0071 "q" */
    0x7f, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x7f, 0x80, 0x40, 0x20, 0x10, 0x8,

    /* U+0072 "r" */
    0x7f, 0x2, 0x4, 0x8, 0x10, 0x20, 0x40, 0x80,

    /* U+0073 "s" */
    0x7f, 0x40, 0x60, 0x10, 0x7, 0xf0, 0x4, 0x3,
    0x1, 0x7f, 0x0,

    /* U+0074 "t" */
    0x82, 0x8, 0x3f, 0x82, 0x8, 0x20, 0x82, 0x8,
    0x1f,

    /* U+0075 "u" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x7f, 0x0,

    /* U+0076 "v" */
    0x40, 0x36, 0x2, 0x20, 0x63, 0x4, 0x10, 0xc1,
    0x98, 0xd, 0x0, 0x70, 0x6, 0x0,

    /* U+0077 "w" */
    0x81, 0x83, 0xc3, 0x82, 0x42, 0xc6, 0x46, 0x44,
    0x64, 0x64, 0x2c, 0x6c, 0x38, 0x38, 0x18, 0x38,
    0x18, 0x10,

    /* U+0078 "x" */
    0xc1, 0xb1, 0x8d, 0x83, 0x80, 0x80, 0xa0, 0xd8,
    0xc6, 0xc1, 0x80,

    /* U+0079 "y" */
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x7f, 0x80, 0x40, 0x20, 0x17, 0xf0,

    /* U+007A "z" */
    0xff, 0x80, 0xc0, 0xc0, 0xc0, 0x81, 0x81, 0x81,
    0x80, 0xff, 0x80,

    /* U+007B "{" */
    0x34, 0x44, 0x48, 0x44, 0x44, 0x30,

    /* U+007C "|" */
    0xff, 0xfe,

    /* U+007D "}" */
    0x89, 0x24, 0x5a, 0x4a, 0x0,

    /* U+007E "~" */
    0xe0, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 70, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 56, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 95, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 4, .adv_w = 204, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 21, .adv_w = 202, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 42, .adv_w = 247, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 240, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 57, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 83, .adv_w = 71, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 71, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 126, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 97, .adv_w = 111, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 102, .adv_w = 49, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 103, .adv_w = 132, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 104, .adv_w = 55, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 133, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 116, .adv_w = 214, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 100, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 138, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 211, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 187, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 210, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 169, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 214, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 212, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 55, .box_w = 1, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 49, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 270, .adv_w = 121, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 163, .box_w = 8, .box_h = 4, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 282, .adv_w = 122, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 304, .adv_w = 213, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 214, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 336, .adv_w = 213, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 352, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 369, .adv_w = 214, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 196, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 399, .adv_w = 185, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 218, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 55, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 448, .adv_w = 200, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 204, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 199, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 238, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 213, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 546, .adv_w = 202, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 226, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 211, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 596, .adv_w = 210, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 194, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 212, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 257, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 302, .box_w = 17, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 208, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 721, .adv_w = 210, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 70, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 133, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 71, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 755, .adv_w = 212, .box_w = 12, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 757, .adv_w = 81, .box_w = 1, .box_h = 2, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 758, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 783, .adv_w = 178, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 795, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 809, .adv_w = 177, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 104, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 829, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 844, .adv_w = 171, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 858, .adv_w = 53, .box_w = 1, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 860, .adv_w = 61, .box_w = 6, .box_h = 16, .ofs_x = -3, .ofs_y = -4},
    {.bitmap_index = 872, .adv_w = 165, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 77, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 250, .box_w = 15, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 909, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 177, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 931, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 946, .adv_w = 170, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 961, .adv_w = 131, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 969, .adv_w = 176, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 105, .box_w = 6, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 178, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1000, .adv_w = 202, .box_w = 12, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 274, .box_w = 16, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1032, .adv_w = 177, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 175, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1058, .adv_w = 179, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1069, .adv_w = 74, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1075, .adv_w = 55, .box_w = 1, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1077, .adv_w = 74, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 103, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 62, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 95, .range_length = 32, .glyph_id_start = 63,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] =
{
    32, 86,
    34, 56,
    34, 58,
    35, 55,
    35, 58,
    37, 55,
    37, 59,
    38, 46,
    38, 48,
    39, 15,
    39, 43,
    39, 51,
    39, 53,
    39, 89,
    40, 56,
    44, 34,
    44, 41,
    45, 55,
    45, 56,
    45, 58,
    46, 67,
    48, 55,
    48, 56,
    48, 57,
    49, 34,
    49, 43,
    49, 68,
    49, 86,
    51, 55,
    51, 56,
    52, 47,
    52, 56,
    52, 58,
    53, 79,
    53, 83,
    53, 85,
    53, 87,
    53, 89,
    53, 90,
    55, 34,
    55, 48,
    55, 52,
    55, 79,
    55, 83,
    56, 34,
    56, 48,
    56, 65,
    56, 69,
    56, 73,
    56, 79,
    56, 85,
    57, 35,
    58, 52,
    58, 65,
    58, 69,
    58, 73,
    58, 79,
    58, 80,
    58, 83,
    58, 85,
    59, 58,
    65, 66,
    65, 67,
    65, 76,
    65, 77,
    65, 78,
    65, 82,
    65, 83,
    65, 86,
    65, 87,
    65, 88,
    65, 90,
    66, 68,
    67, 69,
    67, 72,
    67, 75,
    67, 84,
    67, 85,
    67, 90,
    68, 69,
    68, 79,
    68, 85,
    69, 67,
    69, 69,
    69, 76,
    69, 82,
    69, 86,
    69, 87,
    69, 88,
    70, 13,
    70, 84,
    70, 85,
    71, 65,
    71, 67,
    71, 69,
    71, 79,
    71, 82,
    71, 83,
    71, 85,
    71, 87,
    72, 65,
    72, 70,
    72, 73,
    73, 65,
    73, 67,
    73, 70,
    73, 78,
    73, 80,
    73, 81,
    73, 86,
    73, 88,
    74, 69,
    75, 69,
    76, 65,
    76, 68,
    76, 69,
    76, 77,
    76, 79,
    76, 86,
    76, 87,
    77, 75,
    77, 77,
    77, 87,
    78, 66,
    78, 67,
    78, 79,
    78, 80,
    78, 88,
    79, 65,
    79, 76,
    79, 78,
    79, 79,
    79, 82,
    79, 83,
    79, 84,
    79, 85,
    79, 86,
    79, 87,
    79, 88,
    80, 68,
    80, 73,
    80, 83,
    81, 85,
    82, 13,
    82, 15,
    82, 79,
    83, 67,
    83, 69,
    83, 75,
    83, 78,
    83, 85,
    83, 86,
    83, 88,
    83, 90,
    84, 66,
    84, 68,
    84, 72,
    84, 73,
    84, 90,
    85, 66,
    85, 67,
    85, 68,
    85, 69,
    85, 70,
    85, 77,
    85, 78,
    85, 80,
    85, 83,
    85, 84,
    85, 88,
    85, 90,
    86, 69,
    86, 79,
    86, 83,
    87, 69,
    87, 79,
    87, 82,
    87, 83,
    88, 69,
    89, 65,
    89, 67,
    89, 69,
    89, 76,
    89, 78,
    89, 79,
    90, 65,
    90, 69,
    90, 76,
    90, 84,
    90, 90
};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] =
{
    0, -8, -3, -13, -8, -7, -7, -7,
    -8, -33, -61, 1, 3, -5, -7, -8,
    -7, -59, -33, -46, -3, -7, -7, -10,
    3, -48, 3, 0, -5, -5, -5, -6,
    -3, -31, -31, -26, -21, -23, -26, -9,
    -8, -5, -8, -10, -7, -6, -4, -9,
    -3, -6, -5, -9, -9, -25, -30, -5,
    -30, -25, -30, -25, -3, -6, -3, -3,
    -5, -4, -1, -5, -5, -8, -4, -6,
    8, -6, -4, -5, -6, -5, -5, -5,
    -6, -6, -5, -4, -5, -1, -5, -8,
    -4, -46, 1, 3, -4, -4, -4, -5,
    -4, -5, -6, -5, 1, 3, 1, -9,
    -4, -12, -4, -6, -4, -1, -10, -5,
    -1, -3, 1, -4, -3, -3, -15, -17,
    -3, -3, -6, -5, -5, -4, -3, -6,
    -3, -5, -4, -5, -3, -5, -6, -6,
    -3, -9, -9, 6, 4, 3, -6, -62,
    -5, -1, -5, -4, -4, -6, -5, -5,
    -9, -6, 1, 5, 1, 1, 1, -4,
    -5, 3, -4, -3, -5, 1, -4, -4,
    -4, -4, -4, -8, -7, -6, -8, -5,
    -5, -4, -13, -6, -5, -5, 3, -4,
    -6, -6, -6, -5, -5, -5
};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs =
{
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 190,
    .glyph_ids_size = 0
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Display16 = {
#else
lv_font_t ui_font_Display16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DISPLAY16*/

