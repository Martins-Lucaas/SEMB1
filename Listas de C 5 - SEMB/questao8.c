#include <stdio.h>

long long int fat(int n) {
    if (n == 0 || n == 1) {
        return 1; // Caso base: fatorial de 0 ou 1 é 1
    } else {
        return n * fat(n - 1); // Chamada recursiva para calcular o fatorial
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O fatorial nao esta definido para numeros negativos.\n");
        return 1;
    }

    long long int resultado = fat(num);
    printf("O fatorial de %d e: %lld\n", num, resultado);

    return 0;
}
