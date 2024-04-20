/*
 * blinky.c
 *
 *  Created on: Mar 19, 2024
 *      Author: danie
 */

#include "main.h"

extern TIM_HandleTypeDef htim1;

void setup(void) {
	HAL_TIM_Base_Start_IT(&htim1);
}

void loop(void) {
	__WFI();
}

void blinky(void) {
	HAL_GPIO_TogglePin(USR_LED_GPIO_Port, USR_LED_Pin);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(htim);

  blinky();
}
