#include <stdio.h>

int main() {
    int n;
    printf("Quantidade de numeros a serem somados: ");
    scanf("%d", &n);

    int soma =0;
    for(int i = 0; i<n; i++)
    {
        int numbers;
        printf("digite um numero:");
        scanf("%d",&numbers);
        soma += numbers;
    }

    printf("O resultado e:%d\n",soma);
    return 0;
}
