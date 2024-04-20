/*
 * acende_apaga.c
 */

#include "app.h"

static uint8_t button_state = 0; // Variável para armazenar o estado do botão

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
    if (GPIO_Pin == BUTTON_Pin) {
        button_state = HAL_GPIO_ReadPin(BUTTON_GPIO_Port, BUTTON_Pin); // Lê o estado atual do botão

        if (button_state == GPIO_PIN_SET) {
            HAL_GPIO_TogglePin(USR_LED_GPIO_Port, USR_LED_Pin); // Alternar o estado do LED
        }
    }
}
