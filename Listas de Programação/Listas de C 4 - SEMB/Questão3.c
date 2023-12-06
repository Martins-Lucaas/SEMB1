#include <stdio.h>
#include <string.h>

int main(){

    char frase1[80], frase2[80], frase3[80];
    char FraseConcatenada[240];

    //frase2[80], frase3[80];
    printf("Digite a frase1\n");
    fgets(frase1, 80, stdin);
    printf("Digite a frase2\n");
    fgets(frase2, 80, stdin);
    printf("Digite a frase3\n");
    fgets(frase3, 80, stdin);

    // Os próximos três blocos de código ordenam as frases em ordem alfabética.
    // Isso é feito usando strcmp() para comparar as frases e strcpy() para trocá-las de lugar, se necessário.

    if (strcmp(frase1, frase2) > 0) {
        char temp[50];
        strcpy(temp, frase1);
        strcpy(frase1, frase2);
        strcpy(frase2, temp);
    }
    if (strcmp(frase2, frase3) > 0) {
        char temp[50];
        strcpy(temp, frase2);
        strcpy(frase2, frase3);
        strcpy(frase3, temp);
    }
    if (strcmp(frase1, frase2) > 0) {
        char temp[50];
        strcpy(temp, frase1);
        strcpy(frase1, frase2);
        strcpy(frase2, temp);
    }
    
    strcpy(FraseConcatenada, frase1);
    strcat(FraseConcatenada, frase2);
    strcat(FraseConcatenada, frase3);

    printf("Strings concatenadas em ordem alfabetica:\n%s", FraseConcatenada);
    return 0;
}