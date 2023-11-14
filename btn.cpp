#include "btn.h"

void onclick() {
        BSP_LCD_Clear(LCD_COLOR_BLACK);
        BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
        BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
        BSP_LCD_SetTextColor(LCD_COLOR_DARKBLUE);
        BSP_LCD_DisplayStringAt(10, 10, (uint8_t *)"Nemackej to!!!", CENTER_MODE);
        //ThisThread::sleep_for(1000ms);
        // HAL_Delay(2000);
}