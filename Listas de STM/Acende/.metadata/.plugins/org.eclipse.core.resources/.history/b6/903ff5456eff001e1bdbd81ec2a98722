/*
 * blinky.c
 */
#include <timer.h>
#include "main.h"
#include "digital_io.h"
#include "timer.h"
#include "app.h"

#define BUTTON_PIN 1
#define DEBOUNCE_DELAY 50 // Delay de debounce em milissegundos
#define INPUT 0

volatile int duty = 0; // Declara a variável duty como global e volatile

void blinky(void) {
    if (digitalRead(0) == LOW)
        digitalWrite(0, HIGH);
    else
        digitalWrite(0, LOW);
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
    pinMode(BUTTON_PIN, INPUT); // Configura o pino do botão como entrada

    HAL_NVIC_SetPriority(EXTI1_IRQn, 0, 0);
    HAL_NVIC_EnableIRQ(EXTI1_IRQn);

    timer_attach_callback(0, update_duty);
    timer_start(0, 0);
    timer_pwm_duty(0, 1, 0);
    timer_pwm_start(0, 1, 0);
}

void loop(void) {
}
