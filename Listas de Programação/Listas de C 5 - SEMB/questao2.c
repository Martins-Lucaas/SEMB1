#include <stdio.h>

int ehPrimo(int num) {
    if (num <= 1) {
        return 0;  // Números menores ou iguais a 1 não são primos.
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // O número tem um divisor diferente de 1 e ele mesmo, logo não é primo.
        }
    }

    return 1;  // O número é primo.
}

int main() {
    int n;
    
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    printf("Primos de um ate o numero escolhido %d:\n", n);

    for (int i = 1; i <= n; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
