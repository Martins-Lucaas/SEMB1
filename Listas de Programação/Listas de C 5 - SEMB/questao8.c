#include <stdio.h>

long long int fat(int n) {
    
    int teste;
    teste = 10;
    printf("teste: \n %d",teste+1);
    return n * fat(n + 1); // Chamada recursiva para calcular o fatorial
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
