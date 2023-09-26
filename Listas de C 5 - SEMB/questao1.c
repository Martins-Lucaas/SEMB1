#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float distancia(int x1, int y1, int x2, int y2) {
    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return dist;
}

int main() {
    int x1, y1, x2, y2;
    float result;

    printf("Coordenadas do primeiro ponto (x1 y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Coordenadas do segundo ponto (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    result = distancia(x1, y1, x2, y2);

    printf("A distancia entre esses pontos eh: %f\n", result);

    return EXIT_SUCCESS;
}
