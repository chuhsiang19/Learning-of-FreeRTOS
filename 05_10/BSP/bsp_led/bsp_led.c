#include "bsp_led.h"
#include "stm32f4xx.h"

void bsp_led_on(void)
{
    GPIO_SetBits(GPIOA,GPIO_Pin_7);
}

void bsp_led_off(void)
{
    GPIO_ResetBits(GPIOA,GPIO_Pin_7);
}
