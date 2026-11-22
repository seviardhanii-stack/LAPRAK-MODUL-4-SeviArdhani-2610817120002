#include <stdio.h>

int main() {
    char Sevi_Ardhani[] = "[Sevi Ardhani]";
    int pilihan;
    float v1, v2, hasil;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s\n", Sevi_Ardhani);
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &v1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &v2);

            if (pilihan == 1) {
                hasil = v1 + v2;
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", v1, v2, hasil);
            } else if (pilihan == 2) {
                hasil = v1 - v2;
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", v1, v2, hasil);
            } else if (pilihan == 3) {
                hasil = v1 * v2;
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n\n", v1, v2, hasil);
            } else if (pilihan == 4) {
                hasil = (v2 != 0) ? (v1 / v2) : 0;
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n\n", v1, v2, hasil);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    }

    return 0;
}