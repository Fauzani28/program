#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        if (arr[m] == x)
            return m;
  
        if (arr[m] < x)
            l = m + 1;
  
        else
            r = m - 1;
    }
  
    return -1;
}

int main() {
    int nilai[10];
    int cari;
    int hasil;
    
    cout << "PROGRAM BINARY SEARCH NILAI" << endl;
    cout << "===========================" << endl << endl;
    
    cout << "Masukkan 10 data nilai (diurutkan dari kecil ke besar):" << endl;
    cout << "Catatan: Binary search membutuhkan data yang sudah terurut!" << endl << endl;
    
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
    
    hasil = binarySearch(nilai, 0, 9, cari);
    
    cout << "\nHASIL PENCARIAN" << endl;
    cout << "================" << endl;
    if(hasil != -1) {
        cout << "Nilai " << cari << " ada di indeks ke-" << hasil << endl;
    } else {
        cout << "Nilai " << cari << " tidak ditemukan dalam data" << endl;
    }
    
    return 0;
}