#include <stdio.h>
#include <string.h>

int main() {
    char frase1[100];
    char frase2[100];

    // Solicita ao usuário que insira as duas strings
    printf("Digite a primeira string: ");
    scanf("%s", frase1);

    printf("Digite a segunda string: ");
    scanf("%s", frase2);

    // Calcula o comprimento das strings
    int lenfrase1 = strlen(frase1);
    int lenfrase2 = strlen(frase2);

    // Percorre a segunda string e remove caracteres da primeira string
    for (int i = 0; i < lenfrase2; i++) {
        for (int j = 0; j < lenfrase1; j++) {
            if (frase2[i] == frase1[j]) {
                // Substitui o caractere encontrado por um espaço em branco
                frase2[i] = ' ';
                break; // Sai do loop interno
            }
        }
    }

    // Imprime a segunda string após a remoção
    printf("Segunda string sem a primeira: %s\n", frase2);

    return 0;
}
