#include <stdio.h>
#include <string.h>

int main() {
    char T[1000];
    char p[100];

    // Solicita ao usuário que insira as duas strings
    printf("Digite a string T: ");
    fgets(T, sizeof(T), stdin);

    printf("Digite a string p: ");
    fgets(p, sizeof(p), stdin);

    // Remove os caracteres de nova linha das strings, se presentes
    T[strcspn(T, "\n")] = '\0';
    p[strcspn(p, "\n")] = '\0';

    int lenT = strlen(T);
    int lenP = strlen(p);
    int ocorrencias = 0;

    printf("Posicoes onde '%s' ocorre em '%s':\n", p, T);

    for (int i = 0; i <= lenT - lenP; i++) {
        int j;
        for (j = 0; j < lenP; j++) {
            if (T[i + j] != p[j]) {
                break;
            }
        }
        if (j == lenP) {
            printf("%d ", i);
            ocorrencias++;
        }
    }

    if (ocorrencias == 0) {
        printf("\nNenhuma ocorrencia encontrada.\n");
    } 
    return 0;
}
