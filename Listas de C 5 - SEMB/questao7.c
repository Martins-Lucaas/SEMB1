#include <stdio.h>

/*
A função `imprime_alguma_coisa` é uma função recursiva que 
converte um número inteiro não negativo `n` em sua representação binária, 
imprimindo os dígitos binários da direita para a esquerda. 
Ela divide repetidamente `n` por 2, imprimindo o último dígito binário 
até que `n` seja zero, usando recursão para fazer isso de forma eficiente.
*/

void imprime_alguma_coisa(int n) {
    if (n != 0) {
        imprime_alguma_coisa(n / 2);
        printf("%c", '0' + n % 2);
    }
}

int main() {
    int num;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Por favor, digite um numero nao negativo.\n");
        return 1;
    }

    printf("A representacao binaria de %d e: ", num);
    imprime_alguma_coisa(num);
    printf("\n");

    return 0;
}
