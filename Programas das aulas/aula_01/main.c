#include <stdlib.h>
#include <stdio.h>

int var_1 = 2;
int var_2 = 2;

int main(void) {

    // if (var_1 > var_2) {
    //     /*condição verdadeira*/
    //     printf("var_1 > var_2\n");
    // }
    // else if(var_1 < var_2) {
    //     /*condição verdadeira*/
    //     printf("var_1 < var_2\n");
    // }
    // else {
    //     /*condição falsa*/
    //     printf("var_1 = var_2\n");
    // }

    // int i = 0;
    // for (; ;) {
    //     printf("valor de i = %d\n", i++);
    //     if (i >= 10) {
    //         break;
    //     }
    // }

    int i = 0;
    while(i <= 10) {
        printf("valor de i = %d\n", i++);
        i += 1;
    }

    printf("valor de final i = %d\n", i);
    
    return EXIT_SUCCESS;
}