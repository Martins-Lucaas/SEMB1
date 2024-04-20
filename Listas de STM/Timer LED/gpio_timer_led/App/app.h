/*
 * app.h
 */

#ifndef APP_H_
#define APP_H_

#include "main.h"

#define BUTTON_Pin       GPIO_PIN_0
#define BUTTON_GPIO_Port GPIOA

void setup(void);
void loop(void);
void blinky(void);

extern TIM_HandleTypeDef htim1;

#endif /* APP_H_ */
