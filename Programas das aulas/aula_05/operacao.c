#include <stdio.h>

#include "operacao.h"

extern int g_a;
extern int g_b;

int soma(int x, int y) {
    return x + y;
}

void imprime_globais(void) {
    printf("g_a = %d\n", g_a);
    printf("g_b = %d\n", g_b);

}

void troca_globais(void) {
    int aux = g_a;
    g_a = g_b;
    g_b = aux;
}

int acumula(int x) {
    static int total = 0;
    
    total += x;
    return total;
}