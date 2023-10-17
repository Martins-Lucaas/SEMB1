#ifndef __STM32_GPIO_H
#define __STM32_GPIO_H

#include <stdint.h>

typedef struct stm32_gpio_s {
    volatile uint32_t MODER;
    volatile uint32_t OTYPER; 
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;  
    volatile uint32_t IDR;    
    volatile uint32_t ODR;    
    volatile uint32_t BSRR;   
    volatile uint32_t LCKR;   
    volatile uint32_t AFR[2]; 
} stm32_gpio_t;

#endif