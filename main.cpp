#include "mbed.h"
#include "blink_led.h"
#include "display.h"
#include "btn.h"

DigitalOut led1(LED1);
InterruptIn button(PI_11);
Thread led1_tread;

Thread lcd_thread;

int main() {
    led1_tread.start([]() {
         blink_led(led1);
     });
    // led1_tread.start(callback(blink_led, &led1));

    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(LTDC_ACTIVE_LAYER, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(LTDC_ACTIVE_LAYER);

    lcd_thread.start(display_text);

    button.rise(&onclick);

    // while(true){}
}