#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main() {
    int nilai[10];
    int cari;
    int hasil;
    
    cout << "PROGRAM SEARCH NILAI (SEQUENTIAL SEARCH)" << endl;
    cout << "========================================" << endl << endl;
    
    cout << "Masukkan 10 data nilai:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
    }
    
    cout << "\nData nilai yang dimasukkan:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << nilai[i] << " ";
    }
    
    cout << "\n\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;
    
    hasil = search(nilai, 10, cari);
    
    cout << "\nHASIL PENCARIAN" << endl;
    cout << "================" << endl;
    if(hasil != -1) {
        cout << "Nilai " << cari << " ada di indeks ke-" << hasil << endl;
    } else {
        cout << "Nilai " << cari << " tidak ditemukan dalam data" << endl;
    }
    
    return 0;
}