#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "console/console.h"
//#include "console/console.c"
#include "ili9341/fonts/font.h"
#include "ili9341/fonts/f16f.h"
#include "ili9341/fonts/f24f.h"
#include "ili9341/fonts/f32f.h"
#include "ili9341/fonts/f6x8m.h"
#include "esp_log.h"

//#include "ili9341/fonts/font.c"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp32/spiram.h"
#include "ili9341/ili9341.h"
//#include "ili9341/ili9341.c"
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
	uint8_t	button1     :1;
	uint8_t	button2     :1;
	uint8_t	button3     :1;
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

void fetchButtontask(void * params)
{
  struct sButtonStates ButtonStates;
  while (true)
  {
    ButtonStates.button1 = gpio_get_level(PIN_BUTTON1);
    ButtonStates.button2 = gpio_get_level(PIN_BUTTON2);
    ButtonStates.button3 = gpio_get_level(PIN_BUTTON3);

    printf("waiting for button press %s\n", (char *) params);
//    vTaskDelay(1000 / portTICK_PERIOD_MS);
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    if (uxTaskGetStackHighWaterMark(NULL) < 10)
       printf("Close to running out of stack space!\n");
  }
}


void app_main()
{
   buttons_init();

   printf("Display init\n");
   ili9341_init(dispWidth, dispHeight);
   ili9341_SetBL(100);
   ili9341_FillScreen(BLACK);
   ili9341_DrawPixel(100, 100, BLUE);
   ili9341_DrawPixel(100, 200, YELLOW);

   ili9341_TextOutput(20, 20, 0, RED, "Hello world!!!");
   ili9341_DrawCircle(100, 100, 60, GREEN);

   xTaskCreate(&fetchButtontask, "button fetching", 2048, "task 1", 2, NULL);
  
  while (1)
  {
  }
}
