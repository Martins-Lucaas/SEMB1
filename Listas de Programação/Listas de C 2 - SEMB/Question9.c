#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Potencia de 2 desejada: ");
    scanf("%d", &n);

    for(int i = 0; i<=n; i++)
    {
        int power = pow(2,i);
        printf("Potencia 2^%d = %d\n", i, power);
    }

    return 0;
}
