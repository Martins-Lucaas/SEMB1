/*
 * hw_timer.c
 *
 *  Created on: Mar 26, 2024
 *      Author: danie
 */

#include "main.h"
#include "timer.h"

extern TIM_HandleTypeDef htim1;

void (*tim0_callback)(void) = NULL;


void timer_pwm_start(int tim_id, int chn, int mode) {
	if (tim_id == 0) {
		//TIM1 PWM
		if (chn == 1) {
			//TIM1_CHANNEL1
			HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
		}
	}
}

void timer_pwm_duty(int tim_id, int chn, int duty) {

	if (duty < 0) {
		duty = 0;
	}

	if (tim_id == 0) {
		//TIM1 PWM

		if (duty > htim1.Instance->ARR) {
			duty = htim1.Instance->ARR;
		}
		if (chn == 1) {
			//SET DUTY TIM1_CHANNEL1
			htim1.Instance->CCR1 = duty - 1;
		}
	}
}

void timer_start(int tim_id, int mode) {

	switch (tim_id) {
		case 0:
			HAL_TIM_Base_Start_IT(&htim1);
			break;
	}
}


void timer_attach_callback(int tim_id, void (*callback)(void)) {
	switch (tim_id) {
		case 0:
			tim0_callback = callback;
			break;
	}
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(htim);

  if (tim0_callback != NULL) {
	  tim0_callback();
  }
}
