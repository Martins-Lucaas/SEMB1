#include <stdio.h>

void inverte(int A[], int n) {
    int inicio = 0;
    int fim = n - 1;

    while (inicio < fim) {
        // Troca os elementos nas posições inicio e fim sem usar um vetor auxiliar
        A[inicio] = A[inicio] + A[fim];
        A[fim] = A[inicio] - A[fim];
        A[inicio] = A[inicio] - A[fim];
        
        inicio++;
        fim--;
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int A[n];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Chama a função para inverter o vetor
    inverte(A, n);

    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
