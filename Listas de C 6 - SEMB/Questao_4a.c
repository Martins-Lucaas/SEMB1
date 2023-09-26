#include <stdio.h>
#include <string.h>

// Definindo a estrutura (registro) empregado
struct Empregado {
    char nome[50];
    char sobrenome[50];
    char dataNascimento[11];  // No formato dd/mm/aaaa
    char CPF[12];             // No formato xxx.xxx.xxx-xx
    char dataAdmissao[11];    // No formato dd/mm/aaaa
    float salario;
};
int main() {
    // Declarando e inicializando um vetor de empregados
    struct Empregado colaboradores[100]; // Por exemplo, um vetor com capacidade para 100 colaboradores
    
    // Preenchendo os dados para alguns colaboradores (exemplo)
    strcpy(colaboradores[0].nome, "Lucas");
    strcpy(colaboradores[0].sobrenome, "Martins");
    strcpy(colaboradores[0].dataNascimento, "12/09/2001");
    strcpy(colaboradores[0].CPF, "123.456.789-10");
    strcpy(colaboradores[0].dataAdmissao, "18/09/2023");
    colaboradores[0].salario = 5000.0;

    strcpy(colaboradores[1].nome, "Karoline");
    strcpy(colaboradores[1].sobrenome, "Barbosa");
    strcpy(colaboradores[1].dataNascimento, "24/04/2002");
    strcpy(colaboradores[1].CPF, "987.654.321-00");
    strcpy(colaboradores[1].dataAdmissao, "18/09/2023");
    colaboradores[1].salario = 6000.0;
    
    // Exemplo de acesso aos dados de um colaborador
    printf("Nome: %s %s\n", colaboradores[0].nome, colaboradores[0].sobrenome);
    printf("Data de Nascimento: %s\n", colaboradores[0].dataNascimento);
    printf("CPF: %s\n", colaboradores[0].CPF);
    printf("Data de Admissao: %s\n", colaboradores[0].dataAdmissao);
    printf("Salario: %.2f\n", colaboradores[0].salario);
    
    return 0;
}
