#include <stdio.h>

int main() {
    float , luas, keliling, sisi;

    // Input panjang sisi persegi
    printf("Masukkan panjang sisi persegi: ");
    scanf("%f", &sisi);

    // Menghitung luas dan keliling
    luas = sisi * sisi;
    keliling = 4 * sisi;

    // Menampilkan hasil
    printf("Luas persegi     = %.2f\n", luas);
    printf("Keliling persegi = %.2f\n", keliling);

    return 0;
}
