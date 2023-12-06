#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[50], palavra1[50];
    int tamanho1, tamanho2;

    printf("Digite a primeira string: ");
    scanf("%s", palavra1);

    printf("Digite a segunda string: ");
    scanf("%s", palavra1);

    tamanho1 = strlen(palavra1);
    tamanho2 = strlen(palavra1);

    // Verificar se as strings têm o mesmo comprimento
    if (tamanho1 != tamanho2) {
        printf("As strings nao sao anagramas.\n");
        return 0;
    }

    // Ordenar as duas strings
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho1 - 1; j++) {
            if (palavra1[j] > palavra1[j + 1]) {
                char temp = palavra1[j];
                palavra1[j] = palavra1[j + 1];
                palavra1[j + 1] = temp;
            }
            if (palavra1[j] > palavra1[j + 1]) {
                char temp = palavra1[j];
                palavra1[j] = palavra1[j + 1];
                palavra1[j + 1] = temp;
            }
        }
    }

    if (strcmp(palavra1, palavra1) == 0) {
        printf("As strings sao anagramas.\n");
    } else {
        printf("As strings nao sao anagramas.\n");
    }

    return 0;
}
