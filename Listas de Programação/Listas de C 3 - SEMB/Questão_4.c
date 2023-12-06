#include <stdio.h>

int main() {

    int TAM1;
    int TAM2;

    printf("Digite o tamanho da primeira sequencia:");
    scanf("%d",&TAM1);

     int vetor1[TAM1];
    printf("Digite a primeira sequencia de tamanho [%d]\n", TAM1);
    for (int i = 0; i < TAM1; i++) {
        scanf("%d", &vetor1[i]);
    }


    printf("Digite o tamanho da segunda sequencia (Tem que ser maior que a primeira): ");
    scanf("%d",&TAM2);
    
    int vetor2[TAM2];
    if (TAM1 > TAM2){return 1;}

    printf("Digite a segunda sequencia de tamanho [%d]\n", TAM2);
    for (int i = 0; i < TAM2; i++) {
        scanf("%d", &vetor2[i]);
    }

    int cont = 0;

    for (int i = 0; i <= TAM2 - TAM1; i++) {
        int soma = 0;
        for (int j = 0; j < TAM1; j++) {
            if (vetor2[i + j] == vetor1[j]) {
                soma += 1;
            }
        }
        if (soma == TAM1) {
            cont += 1;
        }
    }

    printf("Numero de ocorrencias: %d\n", cont);

    return 0;
}
