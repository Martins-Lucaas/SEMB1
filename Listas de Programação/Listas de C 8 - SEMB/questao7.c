#include <stdio.h>

void par(int *M, int l, int c) {
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            int index = i * c + j;

            int elemento = M[index];

            printf("Elemento [%d][%d] = %d ", i, j, elemento);

            if (elemento % 2 == 0) {
                printf("(Par)\n");
                pares++;
            } else {
                printf("(Impar)\n");
                impares++;
            }
        }
    }

    printf("Numero total de elementos pares: %d\n", pares);
    printf("Numero total de elementos impares: %d\n", impares);
}

int main() {
    int l, c;

    printf("Quantas linhas tem a matriz: ");
    scanf("%d", &l);

    printf("E colunas? ");
    scanf("%d", &c);

    int M[l][c];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("Elementos da matriz e suas paridades:\n");
    par((int *)M, l, c);

    return 0;
}
