#include<stdio.h>

int main() {
    int nilai[10];
    int index;
    
    printf("Masukkan 10 nilai: \n");
    
    // Mengisi array dengan nilai yang diinputkan
    for(index = 0; index < 10; index++) {
        printf("Nilai ke-%d: ", index + 1);
        scanf("%d", &nilai[index]);
    }
    
    printf("\nData yang dioutputkan: \n");
    
    // Menampilkan data di layar
    for(index = 0; index < 10; index++) {
        printf("nilai[%d] = %d\n", index, nilai[index]);
    }
    
    return 0;
}