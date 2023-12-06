//No programa abaixo, os valores de x e v[0] não deveriam ser iguais? O que acontece?
# include <stdio.h>

void func1 (int x) {
    x = 9 * x;
}

void func2 (int *v) {
    v[0] = 9 * v[0];
}

int main() {
    int x, v[2];
    x = 111;
    func1(x);
    printf("x: %d\n", x);
    v[0] = 111;
    func2 (v);
    printf("v[0]: %d\n", v[0]);

    return 0;
}

/*

1. A função `func1` recebe um valor inteiro por valor, o que significa que ela opera em uma cópia local da variável. 
Portanto, as alterações feitas em `x` dentro de `func1` não afetam a variável `x` na função `main`.

2. A função `func2` recebe um ponteiro para um vetor de inteiros e opera diretamente sobre o vetor original. 
Portanto, as alterações feitas em `v[0]` dentro de `func2` afetam o vetor `V` na função `main`. 
Isso ocorre porque o ponteiro passado para `func2` aponta para o mesmo espaço de memória onde o vetor `V` está armazenado.

*/