#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char jurusan[25], jenjang[11], nim[11], nama[20], tahun_masuk[11];
    int pilihan;
    
    do {
        system("clear");
        
        printf("   INPUT DATA MAHASISWA POLMED\n");
        
        printf("Masukkan nama Anda  : "); 
        fgets(nama, sizeof(nama), stdin);
        nama[strcspn(nama, "\n")] = 0;
        
        printf("Masukkan NIM Anda   : "); 
        fgets(nim, sizeof(nim), stdin);
        nim[strcspn(nim, "\n")] = 0;
        
        // cari jurusan
        switch(nim[2]) { 
            case '1' : 
                strcpy(jurusan, "Teknologi Rekayasa Multimedia Grafis"); 
                break;
            case '2' : 
                strcpy(jurusan, "Manajemen Informatika"); 
                break;
            case '3' : 
                strcpy(jurusan, "Teknik Komputer"); 
                break;
            case '0' : 
                strcpy(jurusan, "Teknologi Rekayasa Perangkat Lunak"); 
                break;
            default : 
                strcpy(jurusan, "Tidak Diketahui");
                break;
        }
        
        // cari jenjang
        strcpy(jenjang, "");
        if(nim[4] == '3') {
            strcpy(jenjang, "Diploma-3");
        }
        else if(nim[4] == '1') {
            strcpy(jenjang, "Diploma-4");
        }
        else {
            strcpy(jenjang, "Tidak Diketahui");
        }
        
        // cari tahun masuk
        if(nim[0] == '2' && nim[1] == '2') {
            strcpy(tahun_masuk, "2022");
        }
        else if(nim[0] == '2' && nim[1] == '3') {
            strcpy(tahun_masuk, "2023");
        }
        else if(nim[0] == '2' && nim[1] == '4') {
            strcpy(tahun_masuk, "2024");
        }
        else if(nim[0] == '2' && nim[1] == '5') {
            strcpy(tahun_masuk, "2025");
        }
        else {
            strcpy(tahun_masuk, "Tidak Diketahui");
        }
        
        // tampilkan data mahasiswa
        printf("\nData Mahasiswa Politeknik Negeri Medan\n");
        printf("Nama         : %s\n", nama);
        printf("NIM          : %s\n", nim);
        printf("Jurusan      : %s\n", jurusan);
        printf("Jenjang      : %s\n", jenjang);
        printf("Tahun Masuk  : %s\n", tahun_masuk);
        
        // tanya apakah ingin mengulang
        printf("\nPilihan:\n");
        printf("1. Input data lagi\n");
        printf("2. Keluar\n");
        printf("Pilih (1/2): ");
        scanf("%d", &pilihan);
        getchar();
        
    } while(pilihan == 1);

    printf("\nTerima kasih! jumpa lagi.\n");
    return 0;
}