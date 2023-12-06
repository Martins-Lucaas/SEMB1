# include <stdio.h>
# include <string.h>

struct Aluno{
    char nome[45];
    float nota;
};

int main(){
    struct Aluno a, b;
    strcpy(a.nome, "Helen");
    a.nota = 8.6;

    strcpy(b.nome, "Dilbert");
    b.nota = 8.2;

    printf("a.nome = %s, a.nota = %f\n", a.nome, a.nota);
    printf("b.nome = %s, b.nota = %f\n", b.nome, b.nota);
    return 0;
}


/*
Saida: a.nome = Helen, a.nota = 8.600000
b.nome = Dilbert, b.nota = 8.200000
*/