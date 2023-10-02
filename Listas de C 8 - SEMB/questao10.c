#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);
    int v[n]; //Vetor alocado com tamanho n não pré-estabelecido

    for(i=0; i<n; i++) v[i] = i;
    for(i=0; i<n; i++) printf("%d\n", v[i]);

    return 0;
}
/*Quando o valor de n é igual a 4000000, seu código tenta criar um vetor v com 4 milhões de elementos. 
No entanto, isso pode levar a problemas de alocação de memória, pois a quantidade de memória necessária 
para armazenar um vetor tão grande pode exceder a disponível no sistema. Isso pode resultar em um erro de alocação de memória, 
travamento do programa ou até mesmo no encerramento abrupto do programa devido a estouro de memória.*/