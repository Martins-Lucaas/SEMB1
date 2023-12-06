#include <stdio.h>

int main() {
    int n;

    // Solicita ao usuário o valor de n
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    // Verifica se n é válido (maior que 0)
    if (n <= 0) {
        printf("A ordem das matrizes deve ser maior que zero.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Declaração das matrizes
    float matrizA[n][n];
    float matrizB[n][n];
    float resultado[n][n];

    // Preenchimento da matriz A
    printf("Preencha a matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrizA[i][j]);
        }
    }

    // Preenchimento da matriz B
    printf("Preencha a matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%f", &matrizB[i][j]);
        }
    }

    // Multiplicação das matrizes
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Exibição da matriz resultante
    printf("Resultado da multiplicacao:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
