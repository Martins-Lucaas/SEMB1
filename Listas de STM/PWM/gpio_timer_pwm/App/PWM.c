/*
 * blinky.c
 */
#include <timer.h>
#include "main.h"
#include "digital_io.h"
#include "timer.h"
#include "app.h"

#define BUTTON_PIN GPIO_PIN_0
#define LED_PIN GPIO_PIN_1
#define DEBOUNCE_DELAY 50 // Delay de debounce em milissegundos

volatile int duty = 0; // Declara a variável duty como global e volatile

void blinky(void) {
    if (digitalRead(BUTTON_PIN) == LOW)
        digitalWrite(LED_PIN, HIGH);
    else
        digitalWrite(LED_PIN, LOW);
}

void update_duty(void) {
    blinky();
}

void button_isr(void) {
    static uint32_t last_interrupt_time = 0;
    uint32_t current_time = HAL_GetTick();

    // Verifica se ocorreu debounce
    if (current_time - last_interrupt_time > DEBOUNCE_DELAY) {
        last_interrupt_time = current_time;
        duty += 5; // Incrementa o duty cycle em 5%
        if (duty > 100) {
            duty = 100; // Limita o duty cycle máximo a 100%
        }
        timer_pwm_duty(0, 1, duty);
    }
}

void setup(void) {
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* Configure button pin as input */
    GPIO_InitStruct.Pin = BUTTON_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLUP;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    /* Configure LED pin as output */
    GPIO_InitStruct.Pin = LED_PIN;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    HAL_NVIC_SetPriority(EXTI0_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(EXTI0_IRQn);

    timer_attach_callback(0, update_duty);
    timer_start(0, 0);
    timer_pwm_duty(0, 1, 0);
    timer_pwm_start(0, 1, 0);
}

void loop(void) {
}
