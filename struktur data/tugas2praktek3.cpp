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

int main()
{
    int arr[10];
    int i, x, hasil;
    
    cout << "PROGRAM BINARY SEARCH" << endl;
    cout << "=====================" << endl << endl;
    cout << "Catatan: Data harus diinput dalam keadaan TERURUT (ascending)" << endl << endl;
    
    cout << "Masukkan 10 data nilai bulat secara terurut (dari kecil ke besar):" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << "Data ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    
    cout << endl << "Data yang telah dimasukkan:" << endl;
    for(i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << endl << "Masukkan nilai yang ingin dicari: ";
    cin >> x;
    
    hasil = binarySearch(arr, 0, 9, x);
    
    cout << endl << "HASIL PENCARIAN" << endl;
    cout << "================" << endl;
    if(hasil != -1)
    {
        cout << "Nilai " << x << " ditemukan pada indeks ke-" << hasil << endl;
        cout << "(posisi data ke-" << hasil+1 << ")" << endl;
    }
    else
    {
        cout << "Nilai " << x << " tidak ditemukan dalam array" << endl;
    }
    
    return 0;
}