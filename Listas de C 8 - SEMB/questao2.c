#include <stdio.h>
#include <stdlib.h>

// Função para calcular o produto escalar
double calProESC(double vetorA[], double vetorB[], int tamanho) {
    double produtoEscalar = 0.0;
    for (int i = 0; i < tamanho; i++) {
        produtoEscalar += vetorA[i] * vetorB[i];
    }
    return produtoEscalar;
}

int main() {
    int tamanho;

    printf("Informe o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    // Aloca memória para os vetores vetorA e vetorB
    double* vetorA = (double*)malloc(tamanho * sizeof(double));
    double* vetorB = (double*)malloc(tamanho * sizeof(double));

    printf("Preencha os elementos do vetorA:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetorA[%d]: ", i);
        scanf("%lf", &vetorA[i]);
    }

    // Solicita os elementos do vetorB ao usuário
    printf("Preencha os elementos do vetorB:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetorB[%d]: ", i);
        scanf("%lf", &vetorB[i]);
    }

    // Calcula o produto escalar
    double produtoEscalar = calProESC(vetorA, vetorB, tamanho);
    printf("O produto escalar dos vetores vetorA e vetorB é: %lf\n", produtoEscalar);

    // Libera a memória alocada
    free(vetorA);
    free(vetorB);

    return 0;
}
