#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    if (N == 0)
        return -1;
    if (arr[N-1] == x)
        return N-1;
    return search(arr, N-1, x);
}

int main()
{
    int arr[10];
    int i, x, hasil;
    
    cout << "PROGRAM SEQUENTIAL SEARCH REKURSIF" << endl;
    cout << "==================================" << endl << endl;
    
    cout << "Masukkan 10 data nilai bulat:" << endl;
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
    
    hasil = search(arr, 10, x);
    
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