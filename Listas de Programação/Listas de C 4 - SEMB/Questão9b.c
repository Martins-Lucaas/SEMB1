#include <stdio.h>
#include <string.h>

int main() {
    char texto[81];
    int i, j, fim;

    printf("Digite seu texto: ");
    fgets(texto, sizeof(texto), stdin);

    fim = 0;

    while (texto[fim] != '\0' && texto[fim] != '\n') {
        fim++; // Armazena o tamanho da string
    }

    i = fim - 1;
    j = 0;

    while (j < i) {
        // Troca os caracteres diretamente no vetor texto
        texto[j] = texto[j] ^ texto[i];
        texto[i] = texto[j] ^ texto[i];
        texto[j] = texto[j] ^ texto[i];
        i--;
        j++;
    }

    printf("Inversa: \n%s\n", texto);

    return 0;
}
