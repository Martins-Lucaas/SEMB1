#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#define STM32_ADC1_BASE_ADDR 0x40012000

#define STM32_ADC_SR_OFFSET  0x00
#define STM32_ADC_CR2_OFFSET 0x08

#define STM32_ADC1_SR_REG  STM32_ADC1_BASE_ADDR + STM32_ADC_SR_OFFSET
#define STM32_ADC1_CR2_REG STM32_ADC1_BASE_ADDR + STM32_ADC_CR2_OFFSET

#define STM32_ADC_SR_EOC   (1 << 1)

#define STM32_ADC_CR2_ADON (1 << 0)
#define STM32_ADC_CR2_CONT (1 << 1)

int main(void) {

  uint32_t adc_sr  = 0x00000000;
  uint32_t adc_cr2 = 0x12345678;

  // uint32_t *pADC_SR  = (uint32_t *)STM32_ADC1_SR_REG;
  uint32_t *pADC_SR  = &adc_sr;
  // uint32_t *pADC_CR2 = (uint32_t *)STM32_ADC1_CR2_REG;
  uint32_t *pADC_CR2 = &adc_cr2;

  uint32_t reg = *pADC_CR2;
  reg |= (STM32_ADC_CR2_ADON | STM32_ADC_CR2_CONT);
  *pADC_CR2 = reg;

  while(!(*pADC_SR & STM32_ADC_SR_EOC));

  reg = *pADC_CR2;
  reg &= ~(STM32_ADC_CR2_ADON);
  *pADC_CR2 = reg;





  return EXIT_SUCCESS;
}