#include <stdio.h>

int main() {
    int panjang, lebar, luas, keliling;

    // Input panjang dan lebar persegi panjang
    printf("Masukkan panjang persegi panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar persegi panjang: ");
    scanf("%d", &lebar);

    // Menghitung luas dan keliling
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    // Menampilkan hasil
    printf("Luas persegi panjang = %d\n", luas);
    printf("Keliling persegi panjang = %d\n", keliling);

    return 0;
}
