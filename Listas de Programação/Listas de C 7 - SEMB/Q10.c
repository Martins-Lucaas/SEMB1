#include <stdio.h>

struct pts_int {
    int *pt1;
    int *pt2;
};

int main() {
    int i1, i2 = 100;
    struct pts_int reg;

    reg.pt1 = &i1;
    reg.pt2 = &i2;
    *reg.pt1 = -2;

    printf("i1 = %d, *reg.pt1 = %d\n", i1, *reg.pt1);
    printf("i2 = %d, *reg.pt2 = %d\n", i2, *reg.pt2);

    return 0;
}

/*Neste código, duas variáveis inteiras `i1` e `i2` são declaradas. 
Uma estrutura `pts_int` com dois ponteiros inteiros é definida. 
Os endereços de `i1` e `i2` são atribuídos aos ponteiros na estrutura. 
Em seguida, o valor `-2` é atribuído a `i1` através do ponteiro da estrutura.
 A saída mostra os valores de `i1`, `*reg.pt1`, `i2`, e `*reg.pt2`, 
 que confirmam as atribuições e o uso dos ponteiros.*/