#include <stdio.h>
#include <stdlib.h>

int main() {
    int Tam_Vetor1;
    int Tam_Vetor2;
    int Tam_Vetor3;

    printf("Digite o tamanho do vetor 1\n(Nao deve ser maior que 50): \n");
    scanf("%d", &Tam_Vetor1);
    if (Tam_Vetor1 > 50){return 1;};

    int vetor1[Tam_Vetor1];

    printf("Digite os elementos do vetor 1:\n");
    for (int i = 0; i < Tam_Vetor1; i++) 
    {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite o tamanho do vetor 2\n(Nao deve ser maior que 50): \n");
    scanf("%d", &Tam_Vetor2);
    if (Tam_Vetor2 > 50){return 1;};
    int vetor2[Tam_Vetor2];

    printf("Digite os elementos do vetor 2:\n");
    for (int i = 0; i < Tam_Vetor2; i++) 
    {
        scanf("%d", &vetor2[i]);
    }

    Tam_Vetor3 = Tam_Vetor1+Tam_Vetor2;
    int vetor3[Tam_Vetor3];
    for(int i = 0; i < Tam_Vetor1; i++)
    {
        vetor3[i] = vetor1[i]; 
    }

    for(int i = 0; i < Tam_Vetor2; i++)
    {
        vetor3[Tam_Vetor2 + i] = vetor2[i]; 
    }

    printf("Vetor 3:\n");
    for(int i = 0; i < Tam_Vetor3; i++)
    {
        printf("%d ", vetor3[i]);
    }

    //Bubble Sort
    for (int i = 0; i < Tam_Vetor3 - 1; i++) 
    {
        for (int j = 0; j < Tam_Vetor3 - i - 1; j++) 
        {
            if (vetor3[j] > vetor3[j + 1])
            {
                // Troca os elementos se estiverem fora de ordem
                int troca = vetor3[j];//Salvado o vetor3[j] para ele não sumir
                vetor3[j] = vetor3[j + 1];//Colocando o valor na posição correta
                vetor3[j + 1] = troca; //devolvendo o valor de vetor3[j]
             }
        }
    }

    printf("\nVetor 3 em ordem crescente:\n");
    for(int i = 0; i < Tam_Vetor3; i++)
    {
        printf("%d ", vetor3[i]);
    }
    return 0;
}
