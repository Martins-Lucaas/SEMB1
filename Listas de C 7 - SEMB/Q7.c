#include <stdio.h>
#define N 10

int main() {
    int i, V[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &V[0], *q = &V[N - 1], temp;

    while (p < q){
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    p = V;
    for(i=0; i<N; i++) printf("%d\n", *p++);

    return 0;
}

/*O programa começa com um vetor contendo números de 1 a 10 e, em seguida, 
realiza uma operação para inverter a ordem dos elementos nesse vetor. 
Após a inversão, ele imprime os elementos resultantes.*/