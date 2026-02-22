#include <stdio.h>

int main() {
    int angka;

    // Meminta input dari pengguna
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &angka);

    // Menentukan apakah bilangan positif, negatif, atau nol
    if (angka > 0) {
        printf("Bilangan %d adalah positif.\n", angka);
    } else if (angka < 0) {
        printf("Bilangan %d adalah negatif.\n", angka);
    } else {
        printf("Bilangan 0 adalah netral.\n");
    }

    return 0;
}
