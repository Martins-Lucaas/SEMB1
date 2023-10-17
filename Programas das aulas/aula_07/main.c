#include <stdlib.h>
#include <stdio.h>

#include "stm32f411_memmap.h"
#include "stm32_gpio.h"

union ieee754_u {
    unsigned char c;
    float f;
    unsigned int ui;
};

int main(void) {

    // uint32_t reg;

    // struct stm32_gpio_s *gpio_a = (struct stm32_gpio_s *)STM32_GPIOA_BASE;
    // stm32_gpio_t *gpio_b = (stm32_gpio_t *)STM32_GPIOB_BASE;

    // reg = gpio_a->ODR;
    // reg |= 1 << 15;
    // gpio_a->ODR = reg;

    union ieee754_u ieee754;
    ieee754.f = 3.14;

    printf("IEEE754 float %f\n", ieee754.f);
    printf("IEEE754 decimal %d\n", ieee754.ui);
    printf("IEEE754 hexa %x\n", ieee754.ui);
    printf("IEEE754 char %d\n", ieee754.c);

    return EXIT_SUCCESS;
}