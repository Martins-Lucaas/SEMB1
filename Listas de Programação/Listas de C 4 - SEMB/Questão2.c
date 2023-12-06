#include <stdio.h>
#include <string.h>

int main(){

    char frase[80], fraseConcertada[80];
    int i=0, count=0;

    printf("Digite a sua frase!\n");
    fgets(frase, 80, stdin);

    while(i < strlen(frase))
    {
        if(frase[i] != ' ' && frase[i] != '\0'|| (i> 0 && frase[i-1] != ' ')){
            // Verifica se o caractere atual não é um espaço ou o caractere de fim de string
            // ou se o caractere anterior não era um espaço.

            fraseConcertada[count] = frase[i];
            count++;
        }
        i++;
    }

    fraseConcertada[count] = '\0';
   
    printf("%s", fraseConcertada);
    return 0;
}