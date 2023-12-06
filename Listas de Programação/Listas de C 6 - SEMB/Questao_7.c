#include <stdio.h>

union IntOrFloat {
    int i;
    double f;
};

int main() {
    int n;
    printf("Digite o numero de elementos na sequencia (1 <= n <= 100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Entrada invalida. O valor de n deve estar entre 1 e 100.\n");
        return 1;
    }

    union IntOrFloat arr[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o %d numero: ", i + 1);
        if (i % 2 == 0) {
            if (scanf("%d", &arr[i].i) != 1) {
                printf("Entrada invalida. Insira um numero inteiro.\n");
                return 1;
            }
        } else {
            if (scanf("%lf", &arr[i].f) != 1 || arr[i].f == 0.0) {
                printf("Entrada invalida. Insira um numero de ponto flutuante valido.\n");
                return 1;
            }
        }
    }

    int soma_inteiros = 0;
    double produto_floats = 1.0; // Inicializado como 1.0

    // Calcula a soma dos inteiros e o produto dos floats
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            soma_inteiros += arr[i].i;
        } else {
            produto_floats *= arr[i].f;
        }
    }

    // Imprime os resultados
    printf("Soma dos inteiros: %d\n", soma_inteiros);
    printf("Produto dos floats: %.2lf\n", produto_floats);

    return 0;
}
