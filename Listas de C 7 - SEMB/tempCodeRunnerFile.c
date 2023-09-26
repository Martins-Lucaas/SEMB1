
#include <stdio.h>

int main() {

    int a = 1, b = 10, c;
    int *p = &a;
    int **r = &p;
    (**r)++;   
    b++;
    c = *p + b;
    printf("%d\n", c);
    return 0;
}
