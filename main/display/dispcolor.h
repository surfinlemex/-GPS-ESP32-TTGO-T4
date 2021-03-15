#ifndef _DISPCOLOR_H
#define _DISPCOLOR_H

#include "fonts/font.h"

// Define the list of supported screen and controllers
#define DISPTYPE_st7789         0
#define DISPTYPE_st7735         1
#define DISPTYPE_ili9641        2

// Define active type of screen for module disp1color
#define DISPCOLOR_type         DISPTYPE_ili9641

#define RGB565(r, g, b)         (((r & 0xF8) << 8) | ((g & 0xFC) << 3) | ((b & 0xF8) >> 3))

// Base colors
#define BLACK    0x0000
#define BLUE     0x001F
#define RED      0xF800
#define GREEN    0x07E0
#define CYAN     0x07FF
#define MAGENTA  0xF81F
#define YELLOW   0xFFE0
#define WHITE    0xFFFF


// Init color display
void dispcolor_Init(uint16_t Width, uint16_t Height);
// Cleasr screen with black color.
void dispcolor_ClearScreen(void);
// Set brightness
void dispcolor_SetBrightness(uint8_t Value);
// Draw filled rect with color
void dispcolor_FillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
// DrawPixel
void dispcolor_DrawPixel(int16_t X, int16_t Y, uint16_t color);
// Fill screen by Color
void dispcolor_FillScreen(uint16_t color);
// Update sceen from buffer of frame
void dispcolor_Update(void);
// Draw line
void dispcolor_DrawLine(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
// Drwa not filled rect on screen
void dispcolor_DrawRectangle(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
// Draw filled rect on sceen
void dispcolor_DrawRectangleFilled(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t fillcolor);
// Draw circle
void dispcolor_DrawCircle(int16_t x0, int16_t y0, int16_t radius, uint16_t color);
// Draw filled circle
void dispcolor_DrawCircleFilled(int16_t x0, int16_t y0, int16_t radius, uint16_t fillcolor);
// Draw String
int16_t dispcolor_DrawString(int16_t X, int16_t Y, uint8_t FontID, uint8_t *Str, uint16_t TextColor);
// Draw formated string and return with of string in pixel
int16_t dispcolor_DrawString_Bg(int16_t X, int16_t Y, uint8_t FontID, uint8_t *Str, uint16_t TextColor, uint16_t BgColor);
// Prin the string on screen
int16_t dispcolor_printf(int16_t X, int16_t Y, uint8_t FontID, uint16_t TextColor, const char *args, ...);
// Print on screen formated sting and return width in pixel
int16_t dispcolor_printf_Bg(int16_t X, int16_t Y, uint8_t FontID, uint16_t TextColor, uint16_t BgColor, const char *args, ...);
// Return the width odf string in pixels
int16_t dispcolor_getStrWidth(uint8_t FontID, char *Str);
// return the Width of formated string in pixel
int16_t dispcolor_getFormatStrWidth(uint8_t FontID, const char *args, ...);

#endif
