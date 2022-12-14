/*******************************************************************************
 * Size: 20 px
 * Bpp: 1
 * Opts: --bpp 1 --size 20 --font C:\Users\HP\Documents\SquareLine\assets\Orbitron-VariableFont_wght.ttf -o C:\Users\HP\Documents\SquareLine\assets\ui_font_Display20.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_DISPLAY20
#define UI_FONT_DISPLAY20 1
#endif

#if UI_FONT_DISPLAY20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xf0, 0xc,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x2, 0xc, 0xc, 0x10, 0x18, 0x20, 0x20, 0xc7,
    0xff, 0xe1, 0x82, 0x2, 0xc, 0xc, 0x18, 0x18,
    0x20, 0x30, 0x43, 0xff, 0xf1, 0x82, 0x3, 0xc,
    0x4, 0x18, 0x18, 0x30, 0x0,

    /* U+0024 "$" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x1f, 0xfe, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0x30, 0xc0, 0xc3, 0x3,
    0xc, 0x7, 0xff, 0x80, 0xc3, 0x3, 0xc, 0xc,
    0x30, 0x30, 0xf0, 0xc3, 0xc3, 0xd, 0xff, 0xe0,
    0x30, 0x0, 0xc0, 0x3, 0x0,

    /* U+0025 "%" */
    0x7c, 0x0, 0xa0, 0x80, 0x68, 0x20, 0x32, 0x8,
    0x18, 0x82, 0x1c, 0x20, 0x8e, 0x7, 0xc7, 0x0,
    0x3, 0x0, 0x1, 0x8f, 0x80, 0xc4, 0x10, 0xe1,
    0x4, 0x70, 0x41, 0x38, 0x10, 0x48, 0x4, 0x10,
    0x0, 0xf8,

    /* U+0026 "&" */
    0x3f, 0xf8, 0x30, 0x6, 0x18, 0x3, 0xc, 0x0,
    0x6, 0x0, 0x3, 0x80, 0x0, 0xe0, 0x1, 0x9c,
    0x0, 0xc7, 0x6, 0x60, 0xe3, 0x30, 0x1d, 0x98,
    0x7, 0xcc, 0x0, 0xf6, 0x0, 0x3d, 0xff, 0xf2,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7b, 0x6d, 0xb6, 0xdb, 0x6d, 0x98,

    /* U+0029 ")" */
    0xe3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xe0,

    /* U+002A "*" */
    0x18, 0x18, 0x99, 0xff, 0x3c, 0x3c, 0x76, 0x66,

    /* U+002B "+" */
    0x18, 0x18, 0x18, 0xff, 0x18, 0x18, 0x18, 0x18,

    /* U+002C "," */
    0xfe,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x0, 0x0, 0x10, 0xc, 0x6, 0x1, 0x0, 0x80,
    0x60, 0x30, 0x18, 0x4, 0x3, 0x1, 0x80, 0xc0,
    0x20, 0x0, 0x0,

    /* U+0030 "0" */
    0x7f, 0xfd, 0x80, 0x1f, 0x0, 0x7e, 0x1, 0xfc,
    0x7, 0x78, 0x1c, 0xf0, 0x71, 0xe1, 0xc3, 0xc7,
    0x7, 0x9c, 0xf, 0x70, 0x1f, 0xc0, 0x3f, 0x0,
    0x7c, 0x0, 0xdf, 0xff, 0x0,

    /* U+0031 "1" */
    0x1c, 0xf7, 0xdb, 0xcc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc0,

    /* U+0032 "2" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x18, 0x0, 0x30,
    0x0, 0x60, 0x0, 0xc0, 0x1, 0xbf, 0xfe, 0xc0,
    0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0,
    0x18, 0x0, 0x3f, 0xff, 0x80,

    /* U+0033 "3" */
    0x7f, 0xf9, 0x80, 0x1b, 0x0, 0x30, 0x0, 0x60,
    0x0, 0xc0, 0x1, 0x80, 0x3, 0xf, 0xfe, 0x0,
    0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x30, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0034 "4" */
    0x0, 0x70, 0x3, 0xc0, 0x1f, 0x0, 0xec, 0x7,
    0x30, 0x38, 0xc1, 0xc3, 0xe, 0xc, 0x70, 0x33,
    0x80, 0xcf, 0xff, 0xc0, 0xc, 0x0, 0x30, 0x0,
    0xc0, 0x3, 0x0,

    /* U+0035 "5" */
    0xff, 0xff, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x7f, 0xfe, 0x0,
    0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0036 "6" */
    0x7f, 0xf1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x7f, 0xfe, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0037 "7" */
    0xff, 0xf0, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60,

    /* U+0038 "8" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xbf, 0xfe, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0039 "9" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xbf, 0xff, 0x0,
    0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x30, 0x0,
    0x60, 0x0, 0xdf, 0xff, 0x0,

    /* U+003A ":" */
    0xc0, 0x0, 0x3,

    /* U+003B ";" */
    0xc0, 0x0, 0xf, 0xe0,

    /* U+003C "<" */
    0x1, 0x3, 0xe, 0x3c, 0x70, 0xc0, 0xe0, 0x70,
    0x1c, 0xf, 0x3, 0x0,

    /* U+003D "=" */
    0xff, 0xc0, 0x0, 0x0, 0x0, 0xff, 0xc0,

    /* U+003E ">" */
    0x80, 0xc0, 0x70, 0x3c, 0xe, 0x3, 0x7, 0xe,
    0x38, 0xf0, 0xc0, 0x0,

    /* U+003F "?" */
    0xff, 0xf0, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0xf, 0xf0, 0xc0,
    0x6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x60,
    0x0,

    /* U+0040 "@" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x7c, 0x79, 0x4, 0xf2, 0x9, 0xe4, 0x13, 0xc8,
    0x27, 0x90, 0x4f, 0x1f, 0xfe, 0x0, 0xc, 0x0,
    0x18, 0x0, 0x1f, 0xff, 0x80,

    /* U+0041 "A" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xff,
    0xff, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xf0, 0x1, 0x80,

    /* U+0042 "B" */
    0xff, 0xf9, 0x80, 0x1b, 0x0, 0x36, 0x0, 0x6c,
    0x0, 0xd8, 0x1, 0xb0, 0x3, 0x7f, 0xfe, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xff, 0xff, 0x0,

    /* U+0043 "C" */
    0x7f, 0xff, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x60, 0x0, 0xc0,
    0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0,
    0x18, 0x0, 0x1f, 0xff, 0x80,

    /* U+0044 "D" */
    0xff, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xff, 0xff, 0x0,

    /* U+0045 "E" */
    0xff, 0xfe, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x1f, 0xfc, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0xff,
    0xe0,

    /* U+0046 "F" */
    0xff, 0xfe, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x1f, 0xfc, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0,
    0x0,

    /* U+0047 "G" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x60, 0x3f, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0048 "H" */
    0xc0, 0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xff, 0xff, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xf0, 0x1, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0x0, 0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x30,
    0x0, 0x60, 0x0, 0xc0, 0x1, 0x80, 0x3, 0x0,
    0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+004B "K" */
    0xc0, 0xf, 0x0, 0x6c, 0x3, 0x30, 0x18, 0xc0,
    0x43, 0x3, 0xc, 0x18, 0x3f, 0xc0, 0xc1, 0x83,
    0x3, 0xc, 0x4, 0x30, 0x18, 0xc0, 0x33, 0x0,
    0x6c, 0x0, 0xc0,

    /* U+004C "L" */
    0xc0, 0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x60, 0x0, 0xc0,
    0x1, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0,
    0x18, 0x0, 0x3f, 0xff, 0x80,

    /* U+004D "M" */
    0xe0, 0x3, 0xf8, 0x3, 0xfe, 0x3, 0xfb, 0x1,
    0xbc, 0xc1, 0x9e, 0x31, 0x8f, 0xd, 0x87, 0x87,
    0xc3, 0xc1, 0xc1, 0xe0, 0x40, 0xf0, 0x0, 0x78,
    0x0, 0x3c, 0x0, 0x1e, 0x0, 0xf, 0x0, 0x6,

    /* U+004E "N" */
    0xe0, 0x7, 0xe0, 0xf, 0xe0, 0x1e, 0xc0, 0x3c,
    0xc0, 0x78, 0xc0, 0xf0, 0xc1, 0xe1, 0xc3, 0xc1,
    0x87, 0x81, 0x8f, 0x1, 0x9e, 0x1, 0xbc, 0x3,
    0xf8, 0x3, 0xf0, 0x3, 0x80,

    /* U+004F "O" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0050 "P" */
    0xff, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xff,
    0xfd, 0x80, 0x3, 0x0, 0x6, 0x0, 0xc, 0x0,
    0x18, 0x0, 0x30, 0x0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0xfc, 0xc0, 0x6, 0xc0, 0x6, 0xc0, 0x6,
    0xc0, 0x6, 0xc0, 0x6, 0xc0, 0x6, 0xc0, 0x6,
    0xc0, 0x6, 0xc0, 0x6, 0xc0, 0x6, 0xc0, 0x6,
    0xc0, 0x6, 0xc0, 0x6, 0x7f, 0xff,

    /* U+0052 "R" */
    0xff, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xff,
    0xfd, 0x81, 0x83, 0x1, 0x86, 0x1, 0x8c, 0x1,
    0x98, 0x3, 0xb0, 0x3, 0x0,

    /* U+0053 "S" */
    0x7f, 0xfd, 0x80, 0xf, 0x0, 0x1e, 0x0, 0xc,
    0x0, 0x18, 0x0, 0x30, 0x0, 0x3f, 0xfe, 0x0,
    0x6, 0x0, 0xc, 0x0, 0x18, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0054 "T" */
    0xff, 0xfc, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0,

    /* U+0055 "U" */
    0xc0, 0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c,
    0x0, 0x78, 0x0, 0xf0, 0x1, 0xe0, 0x3, 0xc0,
    0x7, 0x80, 0xf, 0x0, 0x1e, 0x0, 0x3c, 0x0,
    0x78, 0x0, 0xdf, 0xff, 0x0,

    /* U+0056 "V" */
    0xc0, 0x0, 0xd0, 0x0, 0x66, 0x0, 0x18, 0xc0,
    0xc, 0x30, 0x3, 0x6, 0x1, 0x81, 0x80, 0x60,
    0x30, 0x30, 0xc, 0xc, 0x1, 0x86, 0x0, 0x21,
    0x0, 0xc, 0xc0, 0x1, 0xe0, 0x0, 0x78, 0x0,
    0xc, 0x0,

    /* U+0057 "W" */
    0xc0, 0x30, 0xf, 0x1, 0xc0, 0x24, 0x7, 0x81,
    0x98, 0x16, 0x6, 0x60, 0xc8, 0x10, 0x83, 0x30,
    0xc3, 0x8, 0xc3, 0xc, 0x61, 0x8, 0x11, 0x86,
    0x60, 0x64, 0x19, 0x81, 0xb0, 0x24, 0x2, 0xc0,
    0xf0, 0xe, 0x3, 0xc0, 0x38, 0x6, 0x0, 0x60,
    0x18, 0x0,

    /* U+0058 "X" */
    0xc0, 0xd, 0x80, 0x63, 0x3, 0x6, 0x18, 0xc,
    0xc0, 0x33, 0x0, 0x78, 0x0, 0xc0, 0x7, 0x80,
    0x33, 0x0, 0xce, 0x6, 0x18, 0x30, 0x31, 0x80,
    0x6c, 0x0, 0xc0,

    /* U+0059 "Y" */
    0x60, 0x6, 0x60, 0x6, 0x30, 0xc, 0x18, 0x18,
    0xc, 0x30, 0xe, 0x70, 0x6, 0x60, 0x3, 0xc0,
    0x3, 0xc0, 0x1, 0x80, 0x1, 0x80, 0x1, 0x80,
    0x1, 0x80, 0x1, 0x80, 0x1, 0x80,

    /* U+005A "Z" */
    0xff, 0xfc, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0,
    0xf, 0xff, 0xc0,

    /* U+005B "[" */
    0xfb, 0x6d, 0xb6, 0xdb, 0x6d, 0xb8,

    /* U+005C "\\" */
    0x0, 0x20, 0xc, 0x1, 0x80, 0x30, 0x4, 0x1,
    0x80, 0x30, 0x6, 0x0, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x10, 0x0,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xf0,

    /* U+005F "_" */
    0xff, 0xfe,

    /* U+0060 "`" */
    0xf4,

    /* U+0061 "a" */
    0xff, 0xe0, 0x3, 0x0, 0x30, 0x3, 0x0, 0x3f,
    0xff, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xff,

    /* U+0062 "b" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xec,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3f, 0xfe,

    /* U+0063 "c" */
    0x7f, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0x7, 0xff,

    /* U+0064 "d" */
    0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0x7f, 0xfc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x37, 0xff,

    /* U+0065 "e" */
    0x7f, 0xec, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3f,
    0xff, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0x7, 0xff,

    /* U+0066 "f" */
    0x7f, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x18, 0x30, 0x60,

    /* U+0067 "g" */
    0x7f, 0xec, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xff, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3,
    0x3f, 0xe0,

    /* U+0068 "h" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xec,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+0069 "i" */
    0xc0, 0xff, 0xff, 0xff,

    /* U+006A "j" */
    0x3, 0x0, 0x0, 0x0, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x3, 0xfe,

    /* U+006B "k" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0x6c,
    0xe, 0xc1, 0xcc, 0x18, 0xc3, 0xf, 0xe0, 0xc2,
    0xc, 0x30, 0xc1, 0x8c, 0xc, 0xc0, 0x6c, 0x7,

    /* U+006C "l" */
    0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0xf,

    /* U+006D "m" */
    0xff, 0xff, 0xb0, 0x30, 0x3c, 0xc, 0xf, 0x3,
    0x3, 0xc0, 0xc0, 0xf0, 0x30, 0x3c, 0xc, 0xf,
    0x3, 0x3, 0xc0, 0xc0, 0xf0, 0x30, 0x3c, 0xc,
    0xf, 0x3, 0x3,

    /* U+006E "n" */
    0xff, 0xec, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3,

    /* U+006F "o" */
    0x7f, 0xec, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xfe,

    /* U+0070 "p" */
    0xff, 0xec, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3f, 0xfe, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,
    0xc0, 0x0,

    /* U+0071 "q" */
    0x7f, 0xfc, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xff, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3,
    0x0, 0x30,

    /* U+0072 "r" */
    0x7f, 0xe0, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0x0,

    /* U+0073 "s" */
    0x7f, 0xec, 0x3, 0xc0, 0xc, 0x0, 0xc0, 0x7,
    0xfe, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3, 0xc0,
    0x37, 0xfe,

    /* U+0074 "t" */
    0xc1, 0x83, 0x6, 0xf, 0xf8, 0x30, 0x60, 0xc1,
    0x83, 0x6, 0xc, 0x18, 0x30, 0x3f,

    /* U+0075 "u" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xfe,

    /* U+0076 "v" */
    0x60, 0x6, 0xc0, 0x18, 0xc0, 0x31, 0x80, 0xc1,
    0x81, 0x83, 0x6, 0x3, 0xc, 0x6, 0x30, 0x6,
    0x60, 0xd, 0x80, 0xf, 0x0, 0xc, 0x0,

    /* U+0077 "w" */
    0xc0, 0xe0, 0x3c, 0xf, 0x2, 0x40, 0xf0, 0x66,
    0x1b, 0x6, 0x61, 0x98, 0xc3, 0x31, 0x8c, 0x33,
    0xc, 0xc1, 0x30, 0xd8, 0x1e, 0x7, 0x81, 0xe0,
    0x70, 0xc, 0x7, 0x0, 0xc0, 0x30,

    /* U+0078 "x" */
    0xe0, 0x66, 0xe, 0x30, 0xc1, 0x98, 0xf, 0x0,
    0xe0, 0xe, 0x1, 0xf0, 0x19, 0x83, 0xc, 0x60,
    0xec, 0x6,

    /* U+0079 "y" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x37, 0xff, 0x0, 0x30, 0x3, 0x0, 0x30, 0x3,
    0x3f, 0xe0,

    /* U+007A "z" */
    0xff, 0xf0, 0x3, 0x0, 0x60, 0x1c, 0x3, 0x80,
    0x70, 0xe, 0x1, 0xc0, 0x38, 0x6, 0x0, 0xc0,
    0xf, 0xff,

    /* U+007B "{" */
    0x36, 0x66, 0x66, 0xc8, 0xc6, 0x66, 0x66, 0x30,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xe1, 0x8c, 0x63, 0x18, 0x61, 0x19, 0x8c, 0x63,
    0x1b, 0x80,

    /* U+007E "~" */
    0xf0, 0x1c
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 87, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 70, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 119, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 7, .adv_w = 255, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 252, .box_w = 14, .box_h = 21, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 73, .adv_w = 309, .box_w = 18, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 300, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 72, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 140, .adv_w = 89, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 89, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 154, .adv_w = 157, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 162, .adv_w = 139, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 170, .adv_w = 62, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 171, .adv_w = 165, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 172, .adv_w = 68, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 167, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 267, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 125, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 262, .adv_w = 264, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 291, .adv_w = 234, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 347, .adv_w = 262, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 376, .adv_w = 211, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 267, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 265, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 459, .adv_w = 68, .box_w = 2, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 462, .adv_w = 62, .box_w = 2, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 466, .adv_w = 151, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 478, .adv_w = 204, .box_w = 10, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 485, .adv_w = 152, .box_w = 8, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 497, .adv_w = 217, .box_w = 13, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 522, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 268, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 263, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 638, .adv_w = 267, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 667, .adv_w = 245, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 231, .box_w = 13, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 272, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 775, .adv_w = 68, .box_w = 2, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 779, .adv_w = 250, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 255, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 835, .adv_w = 249, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 864, .adv_w = 297, .box_w = 17, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 266, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 265, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 954, .adv_w = 253, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 983, .adv_w = 283, .box_w = 16, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1013, .adv_w = 264, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1042, .adv_w = 263, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 243, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 265, .box_w = 15, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1127, .adv_w = 321, .box_w = 18, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1161, .adv_w = 377, .box_w = 22, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 260, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1230, .adv_w = 258, .box_w = 16, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 263, .box_w = 14, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 88, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1293, .adv_w = 166, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 88, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1320, .adv_w = 265, .box_w = 15, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1322, .adv_w = 101, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 1323, .adv_w = 222, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1341, .adv_w = 213, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 222, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 213, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1407, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1425, .adv_w = 130, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1439, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1465, .adv_w = 214, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1489, .adv_w = 67, .box_w = 2, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1493, .adv_w = 76, .box_w = 8, .box_h = 21, .ofs_x = -4, .ofs_y = -5},
    {.bitmap_index = 1514, .adv_w = 207, .box_w = 12, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1538, .adv_w = 97, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1548, .adv_w = 313, .box_w = 18, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1575, .adv_w = 223, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1593, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1611, .adv_w = 212, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1637, .adv_w = 212, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1663, .adv_w = 164, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1677, .adv_w = 220, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1695, .adv_w = 131, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1709, .adv_w = 222, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1727, .adv_w = 253, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1750, .adv_w = 343, .box_w = 20, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 221, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 219, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1824, .adv_w = 223, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1842, .adv_w = 92, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1850, .adv_w = 68, .box_w = 2, .box_h = 20, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1855, .adv_w = 92, .box_w = 5, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1865, .adv_w = 129, .box_w = 7, .box_h = 2, .ofs_x = 0, .ofs_y = 5}
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
    0, -10, -4, -16, -10, -9, -9, -9,
    -10, -41, -77, 2, 3, -6, -9, -10,
    -9, -74, -41, -57, -3, -9, -9, -12,
    3, -60, 3, 0, -6, -6, -6, -8,
    -3, -39, -39, -32, -27, -29, -33, -12,
    -11, -6, -10, -13, -9, -7, -5, -11,
    -3, -8, -6, -11, -11, -31, -38, -6,
    -38, -32, -37, -31, -3, -8, -3, -3,
    -6, -5, -2, -6, -6, -10, -5, -8,
    10, -8, -5, -6, -8, -6, -6, -6,
    -7, -7, -6, -5, -6, -2, -6, -10,
    -5, -58, 2, 3, -5, -5, -5, -6,
    -5, -7, -8, -6, 2, 3, 2, -11,
    -5, -15, -5, -8, -5, -2, -13, -6,
    -2, -3, 2, -5, -3, -3, -19, -21,
    -4, -4, -8, -6, -6, -5, -3, -8,
    -3, -6, -5, -6, -3, -6, -7, -7,
    -4, -11, -11, 8, 5, 3, -8, -78,
    -6, -2, -6, -5, -5, -7, -6, -6,
    -12, -7, 2, 6, 2, 2, 2, -5,
    -6, 3, -5, -3, -6, 2, -5, -5,
    -5, -5, -5, -10, -9, -8, -10, -6,
    -6, -5, -16, -7, -6, -6, 3, -5,
    -7, -8, -8, -6, -6, -6
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
const lv_font_t ui_font_Display20 = {
#else
lv_font_t ui_font_Display20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 23,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DISPLAY20*/

