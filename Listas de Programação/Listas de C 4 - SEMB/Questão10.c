#include <stdio.h>

int main() {
    char texto[81];
    int i, j, fim, palindromo;

    printf("Verifica Palindromo: ");
    fgets(texto, sizeof(texto), stdin);

    fim = 0;
    while (texto[fim] != '\0' && texto[fim] != '\n') {
        fim++; // Encontrar o tamanho real da string (ignorando '\n')
    }

    i = fim - 1; // Inicialize i com o valor correto
    j = 0;
    palindromo = 1; // 1 indica palíndromo, 0 indica não palíndromo

    while (j < i) {
        // Ignorar espaços em branco
        while (j < fim && texto[j] == ' ') {
            j++;
        }
        while (i >= 0 && texto[i] == ' ') {
            i--;
        }

        if (texto[j] != texto[i]) {
            palindromo = 0;
            break;
        }
        i--;
        j++;
    }

    if (palindromo) {
        printf("Sim, e um palindromo.\n");
    } else {
        printf("Nao, nao e um palindromo.\n");
    }

    return 0;
}
