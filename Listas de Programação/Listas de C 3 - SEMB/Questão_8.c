#include <stdio.h>

#define l_M 4
#define c_N 4

int main() {
    int matriz[l_M][c_N];
    int transposta[c_N][l_M];

    // Preenche a matriz
    printf("Selecione os elementos da Matriz\n");
    for (int i = 0; i < l_M; i++) {
        for (int j = 0; j < c_N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a matriz transposta
    for (int i = 0; i < l_M; i++) {
        for (int j = 0; j < c_N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprime a matriz transposta
    printf("Matriz Transposta:\n");
    for (int i = 0; i < c_N; i++) {
        for (int j = 0; j < l_M; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
