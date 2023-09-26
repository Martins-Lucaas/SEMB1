#include <stdio.h>

double pot(int a, int b) {
    if (b == 0) {
        return 1.0; // Qualquer numero elevado a 0 e 1
    } else if (b < 0) {
        // Tratamento para expoente negativo
        return 1.0 / pot(a, -b);
    } else {
        return a * pot(a, b - 1);
    }
}

int main() {
    int base, expoente;
    printf("Digite a base (a): ");
    scanf("%d", &base);

    printf("Digite o expoente (b): ");
    scanf("%d", &expoente);

    double resultado = pot(base, expoente);

    printf("%d elevado a %d e igual a %.10f\n", base, expoente, resultado);//.10 para um caso de teste cujo expoente foi -10

    return 0;
}
