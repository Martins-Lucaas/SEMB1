#include <stdio.h>
#include <stdlib.h>

// Função para alocar uma matriz de tamanho l x c
int **alocaMatriz(int l, int c) {
    int **matriz = (int **)malloc(l * sizeof(int *)); // Aloca um array de ponteiros para as linhas
    for (int i = 0; i < l; i++) {
        matriz[i] = (int *)malloc(c * sizeof(int)); // Aloca cada linha com um array de inteiros
    }
    return matriz;
}

// Função para desalocar uma matriz previamente alocada
void desalocaMatriz(int **matriz, int l) {
    for (int i = 0; i < l; i++) {
        free(matriz[i]); // Libera a memória de cada linha
    }
    free(matriz); // Libera o array de ponteiros para as linhas
}

// Função para somar duas matrizes e retornar o resultado
int **somaMatriz(int *A, int l1, int c1, int *B, int l2, int c2) {
    if (l1 != l2 || c1 != c2) {
        printf("Nao e possivel somar essas matrizes.\n");
        return NULL;
    }

    int **resultado = alocaMatriz(l1, c1); // Aloca memória para a matriz resultado

    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            resultado[i][j] = A[i * c1 + j] + B[i * c2 + j]; // Realiza a soma dos elementos
        }
    }

    return resultado;
}

int main() {
    int l1, c1, l2, c2;

    printf("Digite o número de linhas e colunas da matriz A: ");
    scanf("%d %d", &l1, &c1);

    printf("Digite o número de linhas e colunas da matriz B: ");
    scanf("%d %d", &l2, &c2);

    if (l1 != l2 || c1 != c2) {
        printf("Nao tem como somar essas matrizes.\n");
        return 1;
    }

    int *A = (int *)malloc(l1 * c1 * sizeof(int)); // Aloca memória para a matriz A
    int *B = (int *)malloc(l2 * c2 * sizeof(int)); // Aloca memória para a matriz B

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i * c1 + j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i * c2 + j]);
        }
    }

    int **resultado = somaMatriz(A, l1, c1, B, l2, c2); // Chama a função para somar as matrizes

    if (resultado != NULL) {
        printf("Resultado da soma das matrizes:\n");
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("%d ", resultado[i][j]); 
            }
            printf("\n");
        }

        desalocaMatriz(resultado, l1);
    }

    free(A); 
    free(B); 

    return 0;
}
