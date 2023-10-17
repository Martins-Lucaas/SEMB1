#include <stdio.h>
#include <stdlib.h>

#include "operacao.h"

int g_a = 1;
int g_b = 2;

int main(void) {

    int a = 10;
    // int b = 11;
    int resp;

    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    // resp = soma(a, b);
    // printf("a + b = %d\n", resp);    

    // printf("g_a = %d\n", g_a);
    // printf("g_b = %d\n", g_b);

    // imprime_globais();
    // troca_globais();
    // imprime_globais();

    resp = acumula(a);
    printf("total = %d\n", resp);
    resp = acumula(a);
    printf("total = %d\n", resp);
    resp = acumula(a);
    printf("total 1 = %d\n", resp);

    return EXIT_SUCCESS;
}