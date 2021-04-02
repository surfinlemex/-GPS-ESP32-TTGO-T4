#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "console/console.h"
#include "console/console.c"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp32/spiram.h"
//#include "display/dispcolor.h"
//#include "display/dispcolor.c"
//#include "display/rgbcolor.h"
//#include "display/fonts/font.h"
//#include "display/fonts/font.c"
//#include "display/fonts/f6x8m.h"
//#include "display/fonts/f16f.h"
//#include "display/fonts/f24f.h"
//#include "display/fonts/f32f.h"
//#include "display/fonts/f6x8m.c"
//#include "display/fonts/f16f.c"
//#include "display/fonts/f24f.c"
//#include "display/fonts/f32f.c"
#include "ili9341/ili9341.h"
#include "ili9341/ili9341.c"
//#include "spiram_psram.h"
#include "esp32/himem.h"


#define SW_VERSION_MAJOR	1
#define SW_VERSION_MINOR	0


// Screen size
#define dispWidth	320
#define dispHeight	240


#define PIN_BUTTON1 	39
#define PIN_BUTTON2 	37
#define PIN_BUTTON3	38

#define BUFF_SIZE	dispWidth

struct sButtonStates
{
	uint8_t	button1 	:1;
	uint8_t	button2 	:1;
	uint8_t	button3 	:1;
	uint8_t	button1_old :1;
	uint8_t	button2_old :1;
	uint8_t	button3_old :1;
};

typedef enum Mode
{
	SelectMode = 0,
	SelectRate = 1,
	SelectLedCurrent = 2
} eMode;
#define ButtonsModeNum		3
eMode ButtonsMode = SelectMode;

// Switch LED current
#define LedCurrentNum		16
const float LedCurrents[LedCurrentNum] = {0.0, 4.4, 7.6, 11.0, 14.2, 17.4, 20.8, 24.0, 27.1, 30.6, 33.8, 37.0, 40.2, 43.6, 46.8, 50.0};
uint8_t CurLedCurrent = 7;	//24

#define MODE_MA	7
uint8_t CurrentMode = 0;


void buttons_init()
{
	gpio_set_direction(PIN_BUTTON1, GPIO_MODE_INPUT);
	gpio_pullup_en(PIN_BUTTON1);
	gpio_set_direction(PIN_BUTTON2, GPIO_MODE_INPUT);
	gpio_pullup_en(PIN_BUTTON2);
	gpio_set_direction(PIN_BUTTON3, GPIO_MODE_INPUT);
	gpio_pullup_en(PIN_BUTTON3);
}

void RenderPlot(uint8_t mode)
{
}

void RenderResults(uint8_t mode)
{
}
//
void app_main()
{
 //  int result;
   buttons_init();

   printf("Display init\n");
  // dispcolor_Init(dispWidth, dispHeight);
  // dispcolor_SetBrightness(100);

//    dispcolor_Update();
    vTaskDelay(20 / portTICK_RATE_MS);
}
