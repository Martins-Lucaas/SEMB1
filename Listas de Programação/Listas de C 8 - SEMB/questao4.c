#include <stdio.h>
#include <stdlib.h>

// Função para somar vetores e mostrar resultados
void somaVetores(double *vetor1, double *vetor2, int n1, int n2) {
    // Determina a menor dimensão entre n1 e n2
    int minDimensao = (n1 < n2) ? n1 : n2;

    // Mostra a soma dos vetores até a menor dimensão
    printf("Soma dos vetores (até a menor dimensão): ");
    for (int i = 0; i < minDimensao; i++) {
        printf("%.2lf ", vetor1[i] + vetor2[i]);
    }
    printf("\n");

    // Calcula a soma total dos elementos do primeiro vetor
    double somaTotalVetor1 = 0.0;
    for (int i = 0; i < n1; i++) {
        somaTotalVetor1 += vetor1[i];
    }
    printf("Soma total do primeiro vetor: %.2lf\n", somaTotalVetor1);

    // Calcula a soma total dos elementos do segundo vetor
    double somaTotalVetor2 = 0.0;
    for (int i = 0; i < n2; i++) {
        somaTotalVetor2 += vetor2[i];
    }

    printf("Soma total do segundo vetor: %.2lf\n", somaTotalVetor2);
}

int main() {
    int n1, n2;

    printf("Digite o tamanho do primeiro vetor: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    printf("Digite o tamanho do segundo vetor: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Tamanho invalido.\n");
        return 1;
    }

    // Aloca memória para os vetores
    double *vetor1 = (double *)malloc(n1 * sizeof(double));
    double *vetor2 = (double *)malloc(n2 * sizeof(double));

    // Verifica se a alocação de memória foi bem-sucedida
    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro na alocacao de memoria\n");
        return 1;
    }

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%lf", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%lf", &vetor2[i]);
    }
    somaVetores(vetor1, vetor2, n1, n2);

    free(vetor1);
    free(vetor2);

    return 0;
}
