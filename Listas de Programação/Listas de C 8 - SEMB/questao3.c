#include <stdio.h>
#include <stdlib.h>

/*
A solução proposta para corrigir o erro no código consiste em substituir a linha dentro do loop 'for' na função misterio por vet[i] = (i + 1) * vet[i - 1]. 
Isso permitirá calcular os fatoriais corretamente, começando a partir do fatorial de 1 e indo até o fatorial de n, como originalmente pretendido. 
*/

int *misterio(int n){
    
    int i, *vet = malloc(n*sizeof(int));
    
    vet[0] = 1;

    for(i=1; i<n; i++) {
        //codigo anterior com erro
        //vet[i] = i*vet[i-1];

        //codigo corrigido
        vet[i] = (i + 1) * vet[i - 1];
    }
    return vet;
}

int main(){

    int i, n, *v;

    printf("Digite n:");
    scanf("%d", &n);

    v = misterio(n);

    for(i=0;i<n;i++) printf("%d\n", v[i]);
    
    free(v);
    
    return 0;

}
