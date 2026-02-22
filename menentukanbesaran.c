#include <stdio.h>

int main() {
    int bil1, bil2;

    // Input dua bilangan
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    // Menentukan hubungan antara kedua bilangan
    if (bil1 > bil2) {
        printf("Bilangan pertama (%d) lebih besar dari bilangan kedua (%d).\n", bil1, bil2);
    } else if (bil1 < bil2) {
        printf("Bilangan pertama (%d) lebih kecil dari bilangan kedua (%d).\n", bil1, bil2);
    } else {
        printf("Kedua bilangan sama besar (%d).\n", bil1);
    }

    return 0;
}
