#include <stdio.h>

int main() {
    int n;
    
    // Passo 1: Ler a dimensão da matriz
    printf("Digite a dimensao da matriz quadrada (n): ");
    scanf("%d", &n);
    
    int matriz[n][n];  // Agora a matriz é alocada de acordo com a dimensão fornecida
    
    // Passo 2: Ler a matriz de entrada
    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
int somaDiagonalPrincipal = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    
    // Passo 4: Calcular a soma da diagonal secundária
    int somaDiagonalSecundaria = 0;
    for (int i = 0; i < n; i++) {
        somaDiagonalSecundaria += matriz[i][n - 1 - i];
    }
    
    // Passo 5: Verificar se as somas das linhas e colunas são iguais à soma das diagonais
    int somaLinhas, somaColunas;
    
    // Inicialize as somas das linhas e colunas com a primeira linha e a primeira coluna
    somaLinhas = somaColunas = 0;
    for (int i = 0; i < n; i++) {
        somaLinhas += matriz[0][i];
        somaColunas += matriz[i][0];
    }
    
    // Verifique se as somas das linhas e colunas são iguais à soma das diagonais
    if (somaLinhas == somaColunas && somaColunas == somaDiagonalPrincipal && somaDiagonalPrincipal == somaDiagonalSecundaria) {
        printf("A matriz e um quadrado magico!\n");
    } else {
        printf("A matriz nao e um quadrado magico.\n");
    }
    
    return 0;
}
