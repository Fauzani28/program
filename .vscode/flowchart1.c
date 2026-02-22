#include <stdio.h>

int main() {
    int n, i, angka;
    int maks = 0, min = 1000000; // asumsi min awal sangat besar
    int tot = 0;
    float rata;

    printf("Masukkan jumlah angka (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan angka ke-%d: ", i);
        scanf("%d", &angka);

        tot += angka;

        if (angka < min) {
            min = angka;
        }
        if (angka > maks) {
            maks = angka;
        }
    }

    rata = (float)tot / n;

    printf("\nHasil Perhitungan:\n");
    printf("Total     : %d\n", tot);
    printf("Rata-rata : %.2f\n", rata);
    printf("Nilai Min : %d\n", min);
    printf("Nilai Maks: %d\n", maks);

    return 0;
}