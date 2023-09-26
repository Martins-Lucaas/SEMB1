#include <stdio.h>

struct dois_valores {
    int vi;    
    float vf;  
};

int main() {
    struct dois_valores reg1 = {53, 7.112}, reg2, *p = &reg1;
    reg2.vi = (*p).vf;
    reg2.vf = (*p).vi;
    
    printf("1: %d %f\n2: %d %f\n", reg1.vi, reg1.vf, reg2.vi, reg2.vf);

    return 0;
}
/*
reg1 é uma variável do tipo dois_valores inicializada com os valores 53 para vi e 7.112 para vf.
reg2 é uma variável do tipo dois_valores que não é inicializada explicitamente.
p é um ponteiro para dois_valores que aponta para reg1.
reg2.vi = (*p).vf;: Isso atribui o valor de vf de reg1 (que é 7.112) ao membro vi de reg2. Portanto, reg2.vi se torna 7.
reg2.vf = (*p).vi;: Isso atribui o valor de vi de reg1 (que é 53) ao membro vf de reg2. Portanto, reg2.vf se torna 53.000000.
*/