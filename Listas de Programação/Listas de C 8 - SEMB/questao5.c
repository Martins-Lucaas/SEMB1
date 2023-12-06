#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um elemento já está presente no array
int estaNaUniao(int* resultado, int tamanho_resultado, int elemento) {
    for (int i = 0; i < tamanho_resultado; i++) {
        if (resultado[i] == elemento) {
            return 1; // Elemento encontrado
        }
    }
    return 0; // Elemento não encontrado
}

// Função para calcular a união de dois conjuntos
int* uniao(int* v1, int n1, int* v2, int n2, int* tamanho_resultado) {
    int* resultado = NULL;
    *tamanho_resultado = 0;

    for (int i = 0; i < n1; i++) {
        int elemento = v1[i];
        if (!estaNaUniao(resultado, *tamanho_resultado, elemento)) {
            (*tamanho_resultado)++;
            resultado = (int*)realloc(resultado, (*tamanho_resultado) * sizeof(int));
            resultado[*tamanho_resultado - 1] = elemento;
        }
    }

    for (int i = 0; i < n2; i++) {
        int elemento = v2[i];
        if (!estaNaUniao(resultado, *tamanho_resultado, elemento)) {
            (*tamanho_resultado)++;
            resultado = (int*)realloc(resultado, (*tamanho_resultado) * sizeof(int));
            resultado[*tamanho_resultado - 1] = elemento;
        }
    }

    return resultado;
}

// Função para imprimir a união dos conjuntos
void imprimirUniao(int* resultado, int tamanho_resultado) {
    printf("Uniao dos conjuntos: ");
    for (int i = 0; i < tamanho_resultado; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
}

int main() {
    int n1, n2;

    printf("Digite o numero de elementos no primeiro vetor: ");
    scanf("%d", &n1);

    int* v1 = (int*)malloc(n1 * sizeof(int));
    printf("Digite os elementos do primeiro vetor: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Digite o numero de elementos no segundo vetor: ");
    scanf("%d", &n2);

    int* v2 = (int*)malloc(n2 * sizeof(int));
    printf("Digite os elementos do segundo vetor: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }

    int tamanho_resultado;
    int* resultado = uniao(v1, n1, v2, n2, &tamanho_resultado);

    imprimirUniao(resultado, tamanho_resultado);

    free(v1);
    free(v2);
    free(resultado);

    return 0;
}
