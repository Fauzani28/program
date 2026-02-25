#include <iostream>
#include <vector>
using namespace std;

int ex1(vector<int> A) {
    int s = A[0];
    for (int i = 1; i < A.size(); i++) {
        s = s + A[i];
    }
    return s;
}

int ex2(vector<int> A) {
    int s = A[0];
    for (int i = 2; i < A.size(); i += 2) {
        s = s + A[i];
    }
    return s;
}

int ex3(vector<int> A) {
    int s = 0;
    for (int i = 0; i < A.size(); i++) {
        s = s + A[i];
        for (int j = 1; j <= i; j++) {
            s = s + A[j];
        }
    }
    return s;
}

int ex4(vector<int> A) {
    int s = A[0];
    for (int t = 1; t < A.size(); t++) {
        s = s + A[t];
        for (int t = 1; t < A.size(); t++) {
            s = s + A[t];
        }
    }
    return s;
}

int ex5(vector<int> A, vector<int> B) {
    int c = 0;
    int n = A.size();
    
    for (int i = 0; i < n; i++) {
        int s = 0;
        for (int j = 0; j < n; j++) {
            s = s + A[i];
            for (int k = 1; k <= j; k++) {
                s = s + A[k];
            }
        }
        if (B[i] == s) {
            c = c + 1;
        }
    }
    return c;
}

void tampilkanArray(string nama, vector<int> arr) {
    cout << nama << " = [";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    cout << "==================================================" << endl;
    cout << "     TUGAS 01 PRAKTIK STRUKTUR DATA 2026" << endl;
    cout << "==================================================" << endl;
    
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B = {15, 30, 45, 60, 75, 90, 105, 120, 135, 150};
    
    cout << "\n--- INPUT ARRAY ---" << endl;
    tampilkanArray("A", A);
    tampilkanArray("B", B);
    cout << "--------------------------------------------------" << endl;
    
    cout << "\n1. Algoritma Ex1 - Jumlah semua elemen:" << endl;
    int hasil_ex1 = ex1(A);
    cout << "   Hasil: " << hasil_ex1 << endl;
    
    cout << "\n2. Algoritma Ex2 - Jumlah elemen pada indeks genap:" << endl;
    int hasil_ex2 = ex2(A);
    cout << "   Hasil: " << hasil_ex2 << endl;
    cout << "   (Indeks 0, 2, 4, 6, 8): " 
         << A[0] << " + " << A[2] << " + " << A[4] << " + " << A[6] << " + " << A[8] 
         << " = " << hasil_ex2 << endl;
    
    cout << "\n3. Algoritma Ex3 - Jumlah dari prefix sums:" << endl;
    int hasil_ex3 = ex3(A);
    cout << "   Hasil: " << hasil_ex3 << endl;
    
    vector<int> prefix_sums;
    int jumlah_saat_ini = 0;
    for (int i = 0; i < A.size(); i++) {
        jumlah_saat_ini += A[i];
        prefix_sums.push_back(jumlah_saat_ini);
    }
    
    int total_prefix = 0;
    for (int i = 0; i < prefix_sums.size(); i++) {
        total_prefix += prefix_sums[i];
    }
    
    cout << "   Prefix sums: [";
    for (int i = 0; i < prefix_sums.size(); i++) {
        cout << prefix_sums[i];
        if (i < prefix_sums.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    cout << "   Total semua prefix sums: " << total_prefix << endl;
    
    cout << "\n4. Algoritma Ex4 - Jumlah prefix sums (dengan loop bersarang):" << endl;
    int hasil_ex4 = ex4(A);
    cout << "   Hasil: " << hasil_ex4 << endl;
    
    cout << "\n5. Algoritma Ex5 - Menghitung elemen dalam B yang sama dengan jumlah prefix sums dalam A:" << endl;
    int hasil_ex5 = ex5(A, B);
    cout << "   Hasil: " << hasil_ex5 << " elemen yang memenuhi kondisi" << endl;
    
    return 0;
}