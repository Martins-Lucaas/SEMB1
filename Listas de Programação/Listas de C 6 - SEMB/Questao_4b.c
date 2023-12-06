#include <stdio.h>
#include <string.h>

struct Empregado {
    char nome[50];
    char sobrenome[50];
    char dataNascimento[11];  // No formato dd/mm/aaaa
    char CPF[15];             // No formato xxx.xxx.xxx-xx
    char dataAdmissao[11];    // No formato dd/mm/aaaa
    float salario;
};

// Função de busca por CPF
int buscarPorCPF(struct Empregado colaboradores[], int tamanho, const char* cpfBuscado) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(colaboradores[i].CPF, cpfBuscado) == 0) {
            // CPF encontrado, retorna o índice do colaborador no vetor
            return i;
        }
    }
    
    // CPF não encontrado, retorna -1 para indicar que não foi encontrado
    return -1;
}

int main() {
    // Declarando e inicializando um vetor de empregados (exemplo)
    struct Empregado colaboradores[100]; // Por exemplo, um vetor com capacidade para 100 colaboradores
    
    strcpy(colaboradores[0].nome, "Lucas");
    strcpy(colaboradores[0].sobrenome, "Martins");
    strcpy(colaboradores[0].dataNascimento, "12/09/2001");
    strcpy(colaboradores[0].CPF, "123.456.789-10");
    strcpy(colaboradores[0].dataAdmissao, "18/09/2023");
    colaboradores[0].salario = 5000.0;

    strcpy(colaboradores[1].nome, "Karoline");
    strcpy(colaboradores[1].sobrenome, "Barbosa");
    strcpy(colaboradores[1].dataNascimento, "24/04/2002");
    strcpy(colaboradores[1].CPF, "98765432100"); // Remova os pontos e hífen
    strcpy(colaboradores[1].dataAdmissao, "18/09/2023");
    colaboradores[1].salario = 6000.0;

    // Solicita ao usuário que insira o CPF a ser buscado
    char cpfBuscado[15];
    printf("Digite o CPF a ser buscado (no formato xxx.xxx.xxx-xx): ");
    scanf("%14s", cpfBuscado);  // Limitado a 14 caracteres para o formato "xxx.xxx.xxx-xx"

    // Realiza a busca por CPF
    int indice = buscarPorCPF(colaboradores, 2, cpfBuscado); // Neste exemplo, procuramos apenas nos dois primeiros colaboradores
    
    if (indice != -1) {
        printf("Colaborador com CPF %s encontrado no indice %d.\n", cpfBuscado, indice);
        printf("Nome: %s %s\n", colaboradores[indice].nome, colaboradores[indice].sobrenome);
    } else {
        printf("Colaborador com CPF %s nao encontrado.\n", cpfBuscado);
    }
    
    return 0;
}
