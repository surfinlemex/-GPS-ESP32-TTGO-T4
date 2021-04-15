#ifndef MAIN_ILI9341_H_
#define MAIN_ILI9341_H_

#include "driver/spi_master.h"


#define ILI9341_DIRECT_MODE		0	// Direct-to-show mode (no frame buffer)
#define ILI9341_BUFFER_MODE		1	// Mode to make changes to the frame buffer for later loading into the display

#define ILI9341_MODE			ILI9341_DIRECT_MODE



#define ILI9341_TFTWIDTH   240      ///< ILI9341 max TFT width
#define ILI9341_TFTHEIGHT  320      ///< ILI9341 max TFT height

#define ILI9341_NOP        0x00     ///< No-op register
#define ILI9341_SWRESET    0x01     ///< Software reset register
#define ILI9341_RDDID      0x04     ///< Read display identification information
#define ILI9341_RDDST      0x09     ///< Read Display Status

#define ILI9341_SLPIN      0x10     ///< Enter Sleep Mode
#define ILI9341_SLPOUT     0x11     ///< Sleep Out
#define ILI9341_PTLON      0x12     ///< Partial Mode ON
#define ILI9341_NORON      0x13     ///< Normal Display Mode ON

#define ILI9341_RDMODE     0x0A     ///< Read Display Power Mode
#define ILI9341_RDMADCTL   0x0B     ///< Read Display MADCTL
#define ILI9341_RDPIXFMT   0x0C     ///< Read Display Pixel Format
#define ILI9341_RDIMGFMT   0x0D     ///< Read Display Image Format
#define ILI9341_RDSELFDIAG 0x0F     ///< Read Display Self-Diagnostic Result

#define ILI9341_INVOFF     0x20     ///< Display Inversion OFF
#define ILI9341_INVON      0x21     ///< Display Inversion ON
#define ILI9341_GAMMASET   0x26     ///< Gamma Set
#define ILI9341_DISPOFF    0x28     ///< Display OFF
#define ILI9341_DISPON     0x29     ///< Display ON

#define ILI9341_CASET      0x2A     ///< Column Address Set
#define ILI9341_PASET      0x2B     ///< Page Address Set
#define ILI9341_RAMWR      0x2C     ///< Memory Write
#define ILI9341_RAMRD      0x2E     ///< Memory Read

#define ILI9341_PTLAR      0x30     ///< Partial Area
#define ILI9341_MADCTL     0x36     ///< Memory Access Control
#define ILI9341_VSCRSADD   0x37     ///< Vertical Scrolling Start Address
#define ILI9341_PIXFMT     0x3A     ///< COLMOD: Pixel Format Set

#define ILI9341_FRMCTR1    0xB1     ///< Frame Rate Control (In Normal Mode/Full Colors)
#define ILI9341_FRMCTR2    0xB2     ///< Frame Rate Control (In Idle Mode/8 colors)
#define ILI9341_FRMCTR3    0xB3     ///< Frame Rate control (In Partial Mode/Full Colors)
#define ILI9341_INVCTR     0xB4     ///< Display Inversion Control
#define ILI9341_DFUNCTR    0xB6     ///< Display Function Control

#define ILI9341_PWCTR1     0xC0     ///< Power Control 1
#define ILI9341_PWCTR2     0xC1     ///< Power Control 2
#define ILI9341_PWCTR3     0xC2     ///< Power Control 3
#define ILI9341_PWCTR4     0xC3     ///< Power Control 4
#define ILI9341_PWCTR5     0xC4     ///< Power Control 5
#define ILI9341_VMCTR1     0xC5     ///< VCOM Control 1
#define ILI9341_VMCTR2     0xC7     ///< VCOM Control 2

#define ILI9341_RDID1      0xDA     ///< Read ID 1
#define ILI9341_RDID2      0xDB     ///< Read ID 2
#define ILI9341_RDID3      0xDC     ///< Read ID 3
#define ILI9341_RDID4      0xDD     ///< Read ID 4

#define ILI9341_GMCTRP1    0xE0     ///< Positive Gamma Correction
#define ILI9341_GMCTRN1    0xE1     ///< Negative Gamma Correction

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


void ili9341_init(uint16_t width, uint16_t height);
void ili9341_SetBL(uint8_t value);
void ili9341_DrawPixel(int16_t x, int16_t y, uint16_t color);
void ili9341_FillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color);
void ili9341_FillScreen(uint16_t color);
void ili9341_ClearScreen(void);
void ili9341_DrawLine(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void ili9341_DrawCircle(int16_t x0, int16_t y0, int16_t radius, uint16_t color);
void ili9341_DrawRectangle(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t color);
void ili9341_DrawRectangleFilled(int16_t x1, int16_t y1, int16_t x2, int16_t y2, uint16_t fillcolor);
int16_t ili9341_TextOutput(int16_t X, int16_t Y, uint8_t FontID, uint16_t TextColor, const char *args, ...);
static int16_t ili9341_DrawString_General(int16_t X, int16_t Y, uint8_t FontID, uint8_t *Str, uint16_t TextColor, uint16_t BgColor, uint8_t TransparentBg);
static uint8_t ili9341_DrawChar_General(int16_t X, int16_t Y, uint8_t FontID, uint8_t Char, uint16_t TextColor, uint16_t BgColor, uint8_t TransparentBg);

#if (ILI9341_MODE == ILI9341_BUFFER_MODE)
void ili9341_update(void);
#endif

#endif /* MAIN_ILI9341_H_ */
