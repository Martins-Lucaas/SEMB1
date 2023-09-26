# include <stdio.h>

int main(){

    enum {black, blue, green, cyan, red} cores;
    cores = green;
    switch(cores){
    case 0:
    printf("Cor preto \n");
    break;
    case 1:
    printf("Cor azul \n");
    break;
    case 2:
    printf("Cor verde \n");
    break;
    case 3:
    printf("Cor ciano \n");
    break;
    case 4:
    printf("Cor vermelho \n");
    break;
    default:
    printf("?? \n");
    }
    return 0;

}

/*O programa atribui o valor "green" (2) a uma variável chamada "cores" e, em seguida, 
usa uma estrutura `switch` para verificar o valor de "cores". Como "cores" é igual a 2 (que corresponde a "green"), 
o programa imprime "Cor verde" na tela.*/
