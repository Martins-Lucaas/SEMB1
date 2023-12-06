#include <stdio.h>

int main() {
    int m, n;

    printf("Digite o numero de linhas (m) da matriz: ");
    scanf("%d", &m);
    printf("Digite o numero de colunas (n) da matriz: ");
    scanf("%d", &n);

    // Verifica se m e n estão dentro dos limites permitidos
    if (m < 0 || m > 100 || n < 0 || n > 100) {
        printf("Valores de m e n devem estar entre 0 e 100.\n");
        return 1;
    }

    double matriz[m][n];//Números reais
    printf("Digite os elementos da matriz:\n");

    // Preenche a matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Contador de números repetidos
    int repeticoes = 0;
    double ElementoRepetido = 0;
    int maiorContagem = 0;

    // Verifica repetições enquanto percorre a matriz
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            double numeroAtual = matriz[i][j];

            // Verifica quantas vezes o numero se repete na matriz
            int contador = 0;
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    if (matriz[x][y] == numeroAtual) {
                        contador++;
                    }
                }
            }

            // Se o contador for maior que 1, o elemento se repete
            if (contador > 1) {
                repeticoes++;

                // Verifica se o elemento atual tem mais repetições que o atual elemento mais repetido
                if (contador > maiorContagem) {
                    maiorContagem = contador;
                    ElementoRepetido = numeroAtual;
                }
            }
        }
    }

    if (repeticoes > 0) {
        printf("Existem elementos repetidos na matriz. Total de repeticoes: %d\n", repeticoes);
        printf("Elemento mais repetido: %.2lf (repete %d vezes)\n", ElementoRepetido, maiorContagem);
    } else {
        printf("Nao existem elementos repetidos na matriz.\n");
    }

    return 0;
}
