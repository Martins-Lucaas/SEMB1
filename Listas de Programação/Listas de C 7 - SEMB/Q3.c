#include <stdio.h>
int main() {
    int a = 1, b = 10, c;
    int *p = &a;
    int **r = &p;

    (**r)++;
    b++;
    c = *p + b;

    printf("%d\n", c);

    return 0;
}

/*Este programa em C declara três variáveis inteiras `a`, `b` e `c`, inicializa-as, e realiza algumas operações. 
Ele incrementa o valor de `a` em 1 através de ponteiros, incrementa `b` em 1, e depois calcula `c` como a soma do 
valor de `a` após a operação de incremento e `b`. A saída impressa no console é o valor final de `c`, que é 13. 
Portanto, a saída do programa é: 13*/