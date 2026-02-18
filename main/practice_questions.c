#include "hal/gpio_types.h"
#include <freertos/FreeRTOS.h>
#include <driver/gpio.h>
#include <freertos/task.h>
#include <stdio.h>

//defines
#define LED_PIN 38 // this is not assured.

/*
 * init functions
 */
void init_gpio(){
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
}

/*
 * Action functions
 */

//got this from GPT wold like to see
void timeing_freertos_function(void *pvParameters)
{
    TickType_t xLastWakeTime = xTaskGetTickCount();
    const TickType_t xPeriod = pdMS_TO_TICKS(100); // 10ms

    for(;;)
    {
        // Do control work here
        printf("the code is done here every 10ms\n");
        vTaskDelayUntil(&xLastWakeTime, xPeriod);
    }
}
//prints a function
void print_forever(void *pvParameters){
    for(;;){
        printf("hello\n");
    }
}
//this function toggles the onboard LED of the ESP32 S3
void toggle_led(void *pvParameters){
    while(1){
        //how would I finish this here?

        //what does Vtask delay by?
        vTaskDelay(1000);
    }
}



void app_main(void)
{
    init_gpio();
    //how would I create three tasks here
    //xTaskCreate(TaskFunction_t pxTaskCode, "task 1", const uint32_t usStackDepth, void *const pvParameters, UBaseType_t uxPriority, TaskHandle_t *const pxCreatedTask)

    xTaskCreate(toggle_led, "led task", 4096, NULL,3, NULL);
    xTaskCreate(print_forever, "print forever", 4096, NULL, 2, NULL);
    xTaskCreate(timeing_freertos_function, "timing task", 4096, NULL, 1, NULL);

    vTaskStartScheduler(); //starts the program
    while(1){
        //just in case something goes wrong.
        printf("something really went wrong\n");
        vTaskDelay(1000);
    }
}
