#include <stdio.h>
#include <string.h>

int main() {
    char string[81]; // 80 +\0
    printf("Digite a frase\n");
    fgets(string, sizeof(string), stdin);

    // Converter letras maiúsculas em minúsculas
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] = string[i] + 32; // Converter para minúscula
        }
    }

    printf("\nString em letras minusculas:\n%s", string);

    return 0;
}
