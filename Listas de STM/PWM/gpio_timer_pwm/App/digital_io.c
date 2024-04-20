/*
 * digital_io.c
 *
 *  Created on: Mar 26, 2024
 *      Author: danie
 */

#include "board.h"

#include "digital_io.h"

int digitalRead(int pin) {

	GPIO_PinState state;

	GPIO_TypeDef* gpio_port = gpio_port_table[pin];
	uint16_t gpio_pin = gpio_pin_table[pin];

	state = HAL_GPIO_ReadPin(gpio_port, gpio_pin);

	return (state == GPIO_PIN_RESET ? LOW : HIGH);
}

void digitalWrite(int pin, int value) {

	GPIO_PinState state;

	GPIO_TypeDef* gpio_port = gpio_port_table[pin];
	uint16_t gpio_pin = gpio_pin_table[pin];

	state = (value == LOW ? GPIO_PIN_RESET : GPIO_PIN_SET);

	HAL_GPIO_WritePin(gpio_port, gpio_pin, state);
}

