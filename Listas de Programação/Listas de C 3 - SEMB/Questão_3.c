#include <stdio.h>


int main() {
    int vetor[10];
    int x;

    // Lê 10 números inteiros e armazena no vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i <10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lê o número inteiro x
    printf("Digite o valor de X:\n");
    scanf("%d",&x);
    // Variável para acompanhar se encontramos um par
    int encontrou_par = 0;

    // Procurar um par de números no vetor cuja multiplicação seja igual a x
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] * vetor[j] == x) {
                printf("Os numeros %d e %d nas posicoes %d e %d do vetor multiplicam-se para obter %d.\n", vetor[i], vetor[j], i, j, x);
                encontrou_par = 1;
            }
        }
    }

    // Se não encontrou um par, informa isso
    if (!encontrou_par) {
        printf("Nao tem dois numeros cuja multipliacao seja %d.\n", x);
    }

    return 0;
}
