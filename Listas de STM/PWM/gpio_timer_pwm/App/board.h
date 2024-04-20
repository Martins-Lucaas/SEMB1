/*
 * board.h
 */
#ifndef BOARD_H_
#define BOARD_H_

#include "main.h"

#define BUTTON_PIN 1

GPIO_TypeDef* gpio_port_table[] = {
    USR_LED_GPIO_Port,
};

uint16_t gpio_pin_table[] = {
    USR_LED_Pin,
};

#endif /* BOARD_H_ */
