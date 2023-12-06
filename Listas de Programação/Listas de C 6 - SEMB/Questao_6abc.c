#include <stdio.h>
#include <stdlib.h>

#define MAX_ALUNOS 100

typedef struct {
    char nome[80];
    float nota;
} t_aluno;

void lerAlunos(t_aluno alunos[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fflush(stdin);  // Clear the input buffer
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite a nota do aluno %d: ", i + 1);
        if (scanf("%f", &alunos[i].nota) != 1) {
            printf("Erro ao ler a nota.\n");
            exit(1);
        }
    }
}

void encontrarMaiorNota(t_aluno alunos[], int n) {
    float maiorNota = alunos[0].nota;
    int indiceMaiorNota = 0;

    for (int i = 1; i < n; i++) {
        if (alunos[i].nota > maiorNota) {
            maiorNota = alunos[i].nota;
            indiceMaiorNota = i;
        }
    }

    printf("O aluno com a maior nota eh: %s", alunos[indiceMaiorNota].nome);
    printf("Nota: %.2f\n", alunos[indiceMaiorNota].nota);
}

int main() {
    int numAlunos;

    printf("Digite o numero de alunos: ");
    if (scanf("%d", &numAlunos) != 1 || numAlunos <= 0 || numAlunos > MAX_ALUNOS) {
        printf("Número de alunos invalido.\n");
        return 1;
    }

    t_aluno alunos[numAlunos];

    lerAlunos(alunos, numAlunos);
    encontrarMaiorNota(alunos, numAlunos);

    return 0;
}
