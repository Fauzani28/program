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

int main()
{
    int arr[10];
    int i, x, hasil;
    
    cout << "PROGRAM INTERPOLATION SEARCH" << endl;
    cout << "============================" << endl << endl;
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
    
    hasil = interpolationSearch(arr, 10, x);
    
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