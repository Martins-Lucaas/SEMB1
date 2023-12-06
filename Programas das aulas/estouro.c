#include <stdio.h>

#include <stdlib.h>

int soma(int num){
    char teste[200];

    printf("teste");
    return num + soma(num + 1);

}

int main(){

    int n, resultado;

    n = 10;

    resultado = soma(n);

    printf("Somatorio eh: %d", resultado);

    return 0;

}