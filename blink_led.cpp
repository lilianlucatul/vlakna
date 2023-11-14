#include "mbed.h"
#include "blink_led.h"

void blink_led(DigitalOut led) {
    while(true) {
        led = !led;
        ThisThread::sleep_for(BLINKING_RATE);
    }
}