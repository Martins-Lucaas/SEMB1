#include <stdio.h>
#include <stdint.h>
#include <float.h>

int main() {
    

    float f = 85.125;
    unsigned int *pu32 = (unsigned int *)&f;

    printf("0x%X\n", *pu32);
    printf("%d\n", *pu32);

    return 0;
}