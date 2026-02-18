#include <freertos/FreeRTOS.h>
#include <driver/gpio.h>
#include <freertos/task.h>
#include <stdio.h>

//defines
#define LED_PIN 38 // this is not assured.

//init functions
void init_gpio(){
    gpio_set_direction(LED_PIN, 1);
}

//inits the RGB LED on the ESP32 S3.
void init_RGB(){

}


void print_forever(void){
    for(;;){
        printf("hello\n");
    }
}
//this function toggles the onboard LED of the ESP32 S3
void toggle_led(void){
    while(1){
        //how would I finish this here?

        //what does Vtask delay by?
        vTaskDelay(1000);
    }
}

void toggle_RGB_led(void){
    for(;;){
        //possibly ran out of time
    }
}


void app_main(void)
{
    //how would I create three tasks here
    //xTaskCreate(TaskFunction_t pxTaskCode, "task 1", const uint32_t usStackDepth, void *const pvParameters, UBaseType_t uxPriority, TaskHandle_t *const pxCreatedTask)
    //
    vTaskStartScheduler(); //starts the program
    while(1){
        //just in case something goes wrong.
        printf("something really went wrong\n");
    }
}
