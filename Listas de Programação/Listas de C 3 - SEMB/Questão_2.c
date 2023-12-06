#include <stdio.h>

int main() {
    float vetor[10];
    float media = 0;

    // Lê 10 números e armazena no vetor
    printf("Digite 10 numeros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    float soma = 0; 

    for (int i = 0; i < 10; i++) {
        soma += vetor[i]; //somando todos os valores dentro do vetor
    }
    
    media = soma/10; //Faz a médias dos valores
    
    //Imprimindo e formatando para 4 casas decimais
    printf("A media dos valores e:%.4f", media);
    return 0;
}


