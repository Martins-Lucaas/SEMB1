#include <stdio.h>

int main() {
    int n;
    int result = 0;
    printf("Digite o valor de n\n");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--) {
        result +=i;
    }
    printf("A soma ate n e %i\n", result);
    return 0;
}
