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

    int matriz[m][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int menorElem = matriz[0][0];
    int maiorElem = matriz[0][0];
    int menorFreq = m * n; // Inicializado com o valor máximo
    int maiorFreq = 0;

    // Inicializa variáveis para armazenar o menor e o maior elemento, bem como suas frequências.
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int elementoAtual = matriz[i][j];
            int freqAtual = 0;

            // Loop aninhado para contar quantas vezes o elemento atual aparece na matriz.
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    if (matriz[x][y] == elementoAtual) {
                        freqAtual++;
                    }
                }
            }

            // Atualiza o menor e o maior elemento, bem como suas frequências, se necessário.
            if (freqAtual < menorFreq || (freqAtual == menorFreq && elementoAtual < menorElem)) {
                menorFreq = freqAtual;
                menorElem = elementoAtual;
            }

            if (freqAtual > maiorFreq || (freqAtual == maiorFreq && elementoAtual > maiorElem)) {
                maiorFreq = freqAtual;
                maiorElem = elementoAtual;
            }
        }
    }

    printf("Elemento com menor frequencia: %d (ocorre %d vezes)\n", menorElem, menorFreq);
    printf("Elemento com maior frequencia: %d (ocorre %d vezes)\n", maiorElem, maiorFreq);

    return 0;
}
