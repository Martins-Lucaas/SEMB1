#include <stdio.h>
#include <stdlib.h>

// Função para multiplicar duas matrizes A e B
int** multiplicaM(int *A, int l1, int c1, int *B, int l2, int c2) {
    // Verifica se as dimensões das matrizes são válidas para multiplicação
    if (c1 != l2) {
        printf("Nao tem como multiplicar as matrizes.\n");
        return NULL;
    }

    // Aloca dinamicamente a matriz resultante C
    int **C = (int **)malloc(l1 * sizeof(int *));
    for (int i = 0; i < l1; i++) {
        C[i] = (int *)malloc(c2 * sizeof(int));
    }

    // Calcula a multiplicação de matriz C = A x B
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i * c1 + k] * B[k * c2 + j];
            }
        }
    }

    return C;
}

int main() {
    int n; // Tamanho das matrizes (n x n)

    printf("Digite o tamanho das matrizes (n x n): ");
    scanf("%d", &n);

    // Aloca dinamicamente as matrizes A e B e lê seus valores
    int **A = (int **)malloc(n * sizeof(int *));
    int **B = (int **)malloc(n * sizeof(int *));

    printf("Digite os valores da matriz A:\n");
    for (int i = 0; i < n; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for (int i = 0; i < n; i++) {
        B[i] = (int *)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Chama a função para multiplicar as matrizes
    int **C = multiplicaM(&A[0][0], n, n, &B[0][0], n, n);

    printf("Matriz resultante C:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para as matrizes A, B e C
    for (int i = 0; i < n; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
