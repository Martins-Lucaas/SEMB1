#include <stdio.h>
#include <string.h>

int main() {
    char T1[50], T2[50];

    printf("Digite a primeira string (T1): ");
    fgets(T1, sizeof(T1), stdin);
    T1[strcspn(T1, "\n")] = '\0'; // Remove a nova linha, se presente

    printf("Digite a segunda string (T2): ");
    fgets(T2, sizeof(T2), stdin);
    T2[strcspn(T2, "\n")] = '\0'; // Remove a nova linha, se presente

    int lenT1 = strlen(T1);
    int lenT2 = strlen(T2);

    int i = 0, j = 0;

    while (i < lenT1 && j < lenT2) {
        if (T1[i] == T2[j]) {
            i++;
        }
        j++;
    }

    if (i == lenT1) {
        printf("%s e uma subsequencia de %s.\n", T1, T2);
    } else {
        printf("%s nao e uma subsequencia de %s.\n", T1, T2);
    }

    return 0;
}
