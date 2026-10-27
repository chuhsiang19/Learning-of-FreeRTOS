/*
 * @Author: ChuHsiang
 * @Date: 2026-10-27 22:08:33
 * @Description: 
 */
#include "bsp_key.h"
#include "stdint.h"

uint8_t bsp_key_get_state(void)
{
    if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_12) == 0)
    {
        return 1;
    }
    return 0;
}
