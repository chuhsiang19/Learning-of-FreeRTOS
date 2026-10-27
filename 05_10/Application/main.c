/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/main.c 
  * @author  MCD Application Team
  * @version V1.8.1
  * @date    27-January-2022
  * @brief   Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx.h"
#include "drv_gpio.h"
#include "app_task.h"
#include "FreeRTOS.h"
#include "task.h"

int main(void)
{
  SystemInit();
  drv_gpio_init();
  app_task_create();
  vTaskStartScheduler();
     
  /* Infinite loop */
  while (1)
  {
  }
}



