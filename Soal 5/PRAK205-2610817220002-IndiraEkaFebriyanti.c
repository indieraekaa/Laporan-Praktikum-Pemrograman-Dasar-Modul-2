#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, K, L;

    scanf("%d %d", &a, &b);

    c = sqrt(pow(b, 2) - pow(a, 2));

    K = a + b + c;
    L = (a * c) / 2;

    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("Keliling = %d cm\n", K);
    printf("Luas = %d cm^2\n", L);

    return 0;
}