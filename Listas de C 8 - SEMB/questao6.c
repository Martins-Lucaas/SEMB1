#include <stdio.h>

int ehTriangulo(int M[100][100], int l, int c) {
    if (l != c) {
        return 0; // A matriz não é quadrada, portanto não pode ser triangular.
    }

    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < c; j++) {
            if (M[i][j] != 0) {
                return 0; // Encontrou um elemento acima da diagonal principal diferente de zero.
            }
        }
    }

    return 1; // A matriz é triangular inferior.
}

int main() {
    int l, c;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &l);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &c);

    if (l <= 0 || c <= 0 || l > 100 || c > 100) {
        printf("Tamanho de matriz invalido.\n");
        return 1;
    }

    int M[100][100];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    if (ehTriangulo(M, l, c)) {
        printf("A matriz e triangular inferior.\n");
    } else {
        printf("A matriz nao e triangular inferior.\n");
    }

    return 0;
}
