#include <stdio.h>

int main() {
    float r ,t ,pi ,V ,L ,K;

    scanf("%f %f", &r, &t);

    pi = 22.0 / 7;

    V = pi * r * r * t;
    L = 2 * pi * r * (r + t);
    K = 2 * pi * r;

    printf("Volume = %.2f\n", V);
    printf("Luas = %.2f\n", L);
    printf("Keliling = %.2f", K);

    return 0;
}