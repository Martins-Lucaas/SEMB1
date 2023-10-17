#include "operacao.h"

float soma(float x, float y) {
    return x + y;
}

void troca(int *x, int *y) {
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

void incrementa_char(char **p) {
    **p = **p + 1; 
}