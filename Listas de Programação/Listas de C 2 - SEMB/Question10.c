#include <stdio.h>

int main() {
    int n;
    printf("Fatorial de : ");
    scanf("%d", &n);

    unsigned long long factorial = 1;//Usado para receber números muito grandes
    for(int i = n; i>=1; i--)
    {
        factorial *=i;
    }
    printf("Fatorial de %d = %llu\n",n, factorial);
    return 0;
}
