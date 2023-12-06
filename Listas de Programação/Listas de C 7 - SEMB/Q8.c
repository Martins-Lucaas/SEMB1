#include <stdio.h>

int main() {
    int V[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &V[1];
    int *q = &V[5];

    printf("%d\n", *(p + 3));
    printf("%d\n", *(q - 3));
    printf("%d\n", q - p);

    (q < p) ? printf("SIM\n") : printf("NAO\n");

    if (*p < *q) printf("SIM\n");
    else printf("NAO\n");

    return 0;
}

/*:

1. *(p + 3)` imprime `14`.

2.  `*(q - 3)` imprime `34`.

3.  `q - p` imprime `4`.

4. `(q < p)`:
o resultado é "NAO" (não).

5. `if (*p < *q)`:
 o resultado é "SIM".

Portanto, a saída completa do código será:

```
14
34
4
NAO
SIM
```
*/