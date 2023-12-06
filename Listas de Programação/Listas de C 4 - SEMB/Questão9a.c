#include <stdio.h>
#include <string.h>

int main() {
    char texto[81], textoInverso[81];
    int i, j , fim;

    printf("Digite seu texto: ");
    fgets(texto, sizeof(texto), stdin);

    fim = 0;

    while(texto[fim] != '\0' && texto[fim] != '\n'){
        fim++;
    }

    i = fim -1;
    j=0;

    while(j<fim){
        textoInverso[j] = texto[i];
        i--;
        j++;
    }
    textoInverso[fim] = '\0';
    printf("Inversa: \n%s\n", textoInverso);
    
    return 0;
}
