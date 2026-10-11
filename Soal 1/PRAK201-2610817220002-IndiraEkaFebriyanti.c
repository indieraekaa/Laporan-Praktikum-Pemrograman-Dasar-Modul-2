#include <stdio.h>

int main() {
    char nama[30];
    char nim[20];
    int kelas;
    char ttl[20];
    char alamat[60];
    char hoby[20];
    char no_hp[20];

    printf("Nama                    :");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                     :");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel           :");
    scanf("%d", &kelas);
    getchar();
    printf("Tempat/Tanggal Lahir    :");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                  :");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                   :");
    fgets(hoby, sizeof(hoby), stdin);
    printf("No. Hp                  :");
    fgets(no_hp, sizeof(no_hp), stdin);

    printf("\nNama                    :%s", nama);
    printf("NIM                     :%s", nim);
    printf("Kelas Paralel           :%d\n", kelas);
    printf("Tempat/Tanggal Lahir    :%s", ttl);
    printf("Alamat                  :%s", alamat);
    printf("Hobby                   :%s", hoby);
    printf("No. Hp                  :%s", no_hp);

    return 0;
}