#include <stdio.h>
#include <stdint.h>

// Endereço base do periférico
#define PERIPHERAL_BASE_ADDRESS 0xABC00

// Offset do registrador a ser modificado
#define REGISTER_OFFSET 0x08

#define SomaREG PERIPHERAL_BASE_ADDRESS + REGISTER_OFFSET
int main() {


    //Registrador a ser modificado
    uint32_t *regUsage = (uint32_t *)(PERIPHERAL_BASE_ADDRESS + REGISTER_OFFSET);

    uint32_t setmask = (7 << 5);
    printf("print %d", setmask);

    //0000 0000 0000 0000
    //0000 0000 0110 0000
    //0000 0000 0000 0111



    uint32_t cleanmask = (3 << 5);

    // Coloca o bit 1 na posição 4 desse registro
    *regUsage |= setmask;
   
    // Limpa o registro
    *regUsage &= cleanmask;

    return 0;
}
