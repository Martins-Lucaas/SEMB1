#include <stdio.h>
int main()
{
    if (3<2)//cond1
    {
        printf("Primeiro IF\n");
        if (2<10) //cond2
        {
            printf("Comando1 executado");
        }
        else printf("Comando2 executado");}
    else{
        if(3>10)//Cond3
        {
            printf("Comando3 executado");
        }
        else{printf("Comando 4 executado");}
    }
    return 0;
}