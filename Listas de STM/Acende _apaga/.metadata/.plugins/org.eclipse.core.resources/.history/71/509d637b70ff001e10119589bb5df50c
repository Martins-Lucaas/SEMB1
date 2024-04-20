/*
 * pisca.c
 */

#include "app.h"

uint8_t sequence_state = 0;

void setup(void) {
    HAL_TIM_Base_Start_IT(&htim1);
    HAL_GPIO_WritePin(USR_LED_GPIO_Port, USR_LED_Pin, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(BUTTON_GPIO_Port, BUTTON_Pin, GPIO_PIN_SET);
}

void loop(void) {
    __WFI();
}

void blinky(void) {
    HAL_GPIO_TogglePin(USR_LED_GPIO_Port, USR_LED_Pin);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    UNUSED(htim);
    blinky();
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == BUTTON_Pin) {
        sequence_state++;

        switch (sequence_state) {
            case 1:
                HAL_TIM_Base_Stop_IT(&htim1);
                HAL_GPIO_WritePin(USR_LED_GPIO_Port, USR_LED_Pin, GPIO_PIN_RESET);
                break;
            case 2:
                HAL_TIM_Base_Stop_IT(&htim1);
                HAL_TIM_Base_Init(&htim1);
                htim1.Init.Period = 99;
                HAL_TIM_Base_Start_IT(&htim1);
                break;
            case 3:
                HAL_TIM_Base_Stop_IT(&htim1);
                HAL_TIM_Base_Init(&htim1);
                htim1.Init.Period = 199;
                HAL_TIM_Base_Start_IT(&htim1);
                break;
            case 4:
                HAL_TIM_Base_Stop_IT(&htim1);
                HAL_TIM_Base_Init(&htim1);
                htim1.Init.Period = 399;
                HAL_TIM_Base_Start_IT(&htim1);
                break;
            default:
                sequence_state = 0;
                break;
        }
    }
}
