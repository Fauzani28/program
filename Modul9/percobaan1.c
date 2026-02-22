#include <stdio.h>

int main() {
    int index, nilai[10];

    printf("Input nilai 10 mahasiswa:\n");
    for (index = 0; index < 10; index++) {
        printf("Mahasiswa %i: ", index + 1);
        scanf("%d", &nilai[index]);
    }

    printf("\tNilai mahasiswa yang telah diinput:\t");
    for (index = 0; index < 10; index++) {
        printf("%5d", nilai[index]);
    }
    printf("\t");
    return 0;
}