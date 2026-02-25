#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int n, int x)
{
    int lo = 0, hi = (n - 1);
  
    while (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {
        if (lo == hi)
        {
            if (arr[lo] == x) return lo;
            return -1;
        }
        
        int pos = lo + (((double)(hi - lo) /
            (arr[hi] - arr[lo])) * (x - arr[lo]));
  
        if (arr[pos] == x)
            return pos;
  
        if (arr[pos] < x)
            lo = pos + 1;
  
        else
            hi = pos - 1;
    }
    return -1;
}

int main() {
    int nilai[10];
    int cari;
    int hasil;
    
    cout << "PROGRAM INTERPOLATION SEARCH NILAI" << endl;
    cout << "===================================" << endl << endl;
    
    cout << "Masukkan 10 data nilai (harus diurutkan dari kecil ke besar):" << endl;
    cout << "Catatan: Interpolation search membutuhkan data yang sudah terurut!" << endl << endl;
    
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
    
    hasil = interpolationSearch(nilai, 10, cari);
    
    cout << "\nHASIL PENCARIAN" << endl;
    cout << "================" << endl;
    if(hasil != -1) {
        cout << "Nilai " << cari << " ada di indeks ke-" << hasil << endl;
    } else {
        cout << "Nilai " << cari << " tidak ditemukan dalam data" << endl;
    }
    
    return 0;
}