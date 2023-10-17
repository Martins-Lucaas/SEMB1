#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <stdint.h>

#define V_LEN   9
#define M_ROW   3
#define M_COL   3

// static int v[V_LEN]         = {0, 1, 2, 3, 4, 5, 6, 7, 8};
// static int m[M_ROW][M_COL]  = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

int main(void) {

    int v[V_LEN]         = {0, [1 ... 7] = 10};
    int m[M_ROW][M_COL]  = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};

    uint8_t c[10];
    uint8_t *pc = c;

    int *pv = &v[0];
    int *pm = &m[0][0];

    printf("sizeof(size_t): %d\n ", sizeof(size_t));

    memset(pc, 0, sizeof(c));
    for (int i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    for (size_t i = 0; i < V_LEN; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // for (int i = 0; i < V_LEN; i++) {
    //     printf("%d ", pv[i]);
    // }
    // printf("\n");

    // for (int i = 0; i < V_LEN; i++) {
    //     printf("%d ", *(pv + i));
    // }
    // printf("\n");

    for (int i = 0; i < M_ROW; i++) {
        for (int j = 0; j < M_COL; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < M_ROW; i++) {
        for (int j = 0; j < M_COL; j++) {
            printf("%d ", *(pm + i * M_COL + j));
        }
        printf("\n");
    }
    printf("\n");

    return EXIT_SUCCESS;
}