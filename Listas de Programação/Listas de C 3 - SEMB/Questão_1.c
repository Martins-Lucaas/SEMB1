#include <stdio.h>

int main() {
    int vetor[10];
    
    // Lê 10 números inteiros e armazena no vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0]; // Suponha que o primeiro elemento seja o maior
    int posicao = 0;

    // Percorre o vetor para encontrar o maior elemento e sua posição
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprime a posição do maior elemento
    printf("A posicao do maior elemento e :%d que contem o numero %d\n", posicao, vetor[posicao]);

    return 0;
}


