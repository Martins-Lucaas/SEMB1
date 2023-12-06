#include <stdio.h>

int main() {
    int a;
    printf("Digite um numero inteiro:");
    scanf("%d", &a);
    // Verifica se o número é par e menor que 100
    if ((a % 2 == 0) && !(a >= 100)){
        printf("O numero e par menor que 100\n");
    }
      // Verifica se o número é ímpar e menor que 100
    else if ((a % 2 != 0) && !(a >= 100))
    {
        printf("O numero e impar menor que 100\n");
    }
    // Verifica se o número é par e maior ou igual a 100
    else if ((a % 2 == 0) && (a >= 100)) {
        printf("O numero e par e maior ou igual a 100\n");
    }
    // Caso contrário, ou seja, se o número for ímpar e maior que 100
    else {
        printf("O numero e impar e maior que 100\n");
    }

    return 0;
}
