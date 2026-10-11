#include <stdio.h>

int main() {
    float a, b, c;

    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &a);

    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &b);

    c = a + b;

    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"" ,a ,b ,c );
    return 0;
}