#include <stdio.h>

int compara(int A[], int tamA, int B[], int tamB) {
    // Percorre o vetor B
    for (int i = 0; i < tamB; i++) {
        int encontrado = 0; // Flag para indicar se o elemento de B foi encontrado em A
        
        // Percorre o vetor A para encontrar o elemento de B
        for (int j = 0; j < tamA; j++) {
            if (A[j] == B[i]) {
                encontrado = 1;
                break; // Se encontrou, sai do loop interno
            }
        }

        // Se o elemento de B não foi encontrado em A, retorna falso
        if (!encontrado) {
            return 0;
        }
    }

    // Se todos os elementos de B foram encontrados em A, retorna verdadeiro
    return 1;
}

int main() {
    int tamA, tamB;
    printf("Digite o tamanho do vetor A: ");
    scanf("%d", &tamA);
    int A[tamA];
    
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite o tamanho do vetor B: ");
    scanf("%d", &tamB);
    int B[tamB];
    
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < tamB; i++) {
        scanf("%d", &B[i]);
    }

    if (compara(A, tamA, B, tamB)) {
        printf("Todos os elementos de B estao contidos em A.\n");
    } else {
        printf("Nem todos os elementos de B estao contidos em A.\n");
    }

    return 0;
}
