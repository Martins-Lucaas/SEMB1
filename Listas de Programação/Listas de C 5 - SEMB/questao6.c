#include <stdio.h>

float media(float F[], int n) {
    if (n <= 0) {
        return 0.0; // Retorna 0 se o vetor estiver vazio ou o tamanho for inválido
    }

    float soma = 0.0;

    // Calcula a soma de todos os elementos do vetor
    for (int i = 0; i < n; i++) {
        soma += F[i];
    }

    // Calcula a média dividindo a soma pelo número de elementos
    float media = soma / n;

    return media;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float F[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &F[i]);
    }

    float resultado = media(F, n);

    printf("A media dos elementos do vetor e: %.2f\n", resultado);

    return 0;
}
