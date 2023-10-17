#include <stdlib.h>
#include <stdio.h>

#include "operacao.h"

int main(void) {

    int a = 10;
    int b = 11;
    int c;

    char str[] = "Vamos para o RU";
    char *p_str = &str[0];

    printf("a: %d\n", a);
    printf("b: %d\n", b);
    c = (int)soma((float)a, (float)b);
    printf("c: %d\n", c);

    troca(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    printf("str: %s\n", str);
    for (int i = 0; i < 15; i++) {
        incrementa_char(&p_str);
        printf("%c", *p_str++);
    }
    printf("\nstr: %s\n", str);

    return EXIT_SUCCESS;
}

 