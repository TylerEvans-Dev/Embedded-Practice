#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <driver/gpio.h>
#include <freertos/task.h>

//defines
#define LED_PIN 38

void init_gpio(){
    gpio_set_direction(LED_PIN, 1);
}

void print_forever(void){
    printf("hello\n");
}

void toggle_led(void){

}

void toggle_RGB_led(void){

}


void app_main(void)
{

}
