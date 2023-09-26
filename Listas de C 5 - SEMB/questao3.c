#include <stdio.h>



//Pegar os divisores de cada número
int somarDivisoresProprios(int num) {
    int soma = 1; // Começamos com 1 porque todo número é divisível por 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            soma += i;

            if (i != num / i) {
                soma += num / i;
            }
        }
    }

    return soma;
}

int amigos(int a, int b) {
    int divisoresA = somarDivisoresProprios(a);
    int divisoresB = somarDivisoresProprios(b);

    if (divisoresA == b && divisoresB == a) {
        return 1; // São amigos
    } else {
        return 0; // Não são amigos
    }
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros positivos:\n");
    scanf("%d %d", &num1, &num2);

    if (amigos(num1, num2)) {
        printf("%d e %d sao numeros amigos.\n", num1, num2);
    } else {
        printf("%d e %d nao sao numeros amigos.\n", num1, num2);
    }

    return 0;
}
