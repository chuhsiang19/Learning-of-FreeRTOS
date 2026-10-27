#include "app_task.h"
#include "bsp_led.h"
#include "bsp_key.h"

static void key_led_task(void* parameters);

void app_task_create(void)
{
    xTaskCreate(key_led_task,
                "key_led",
                128,
                NULL,
                2,
                NULL);
}

static void key_led_task(void* parameters)
{
    uint8_t key_state;
    while(1)
    {
        key_state = bsp_key_get_state();
        if(key_state == 1)
        {
            bsp_led_on();
        }else{
            bsp_led_off();
        }

        vTaskDelay(pdMS_TO_TICKS(20));
    }
}
