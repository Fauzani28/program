#include <iostream>
#include <vector>
using namespace std;

// Algoritma Ex1
int ex1(vector<int> A) {
    int s = A[0];
    for (int i = 1; i < A.size(); i++) {
        s = s + A[i];
    }
    return s;
}

// Algoritma Ex2
int ex2(vector<int> A) {
    int s = A[0];
    for (int i = 2; i < A.size(); i += 2) {
        s = s + A[i];
    }
    return s;
}

// Algoritma Ex3
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

// Algoritma Ex4
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

// Algoritma Ex5
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
            c++;
        }
    }
    return c;
}

int main() {
    cout << "==================================================" << endl;
    cout << "     TUGAS 01 PRAKTIK STRUKTUR DATA 2026" << endl;
    cout << "==================================================" << endl;
    
    // MEMBUAT DATA SENDIRI DENGAN 10 ELEMEN (SESUAI SOAL NO. 2)
    cout << "\n--- DATA ARRAY BUATAN SENDIRI (10 ELEMEN) ---" << endl;
    
    // Bisa memilih salah satu variasi atau membuat sendiri
    
    // Variasi 1: Bilangan berurutan
    vector<int> A1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> B1 = {15, 30, 45, 60, 75, 90, 105, 120, 135, 150};
    
    cout << "\nVARIASI 1 - Bilangan Berurutan:" << endl;
    cout << "A1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]" << endl;
    cout << "B1 = [15, 30, 45, 60, 75, 90, 105, 120, 135, 150]" << endl;
    cout << "Hasil Ex1: " << ex1(A1) << endl;
    cout << "Hasil Ex2: " << ex2(A1) << endl;
    cout << "Hasil Ex3: " << ex3(A1) << endl;
    cout << "Hasil Ex4: " << ex4(A1) << endl;
    cout << "Hasil Ex5: " << ex5(A1, B1) << endl;
    
    // Variasi 2: Bilangan genap
    vector<int> A2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    vector<int> B2 = {50, 100, 150, 200, 250, 300, 350, 400, 450, 500};
    
    cout << "\nVARIASI 2 - Bilangan Genap:" << endl;
    cout << "A2 = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]" << endl;
    cout << "B2 = [50, 100, 150, 200, 250, 300, 350, 400, 450, 500]" << endl;
    cout << "Hasil Ex1: " << ex1(A2) << endl;
    cout << "Hasil Ex2: " << ex2(A2) << endl;
    cout << "Hasil Ex3: " << ex3(A2) << endl;
    cout << "Hasil Ex4: " << ex4(A2) << endl;
    cout << "Hasil Ex5: " << ex5(A2, B2) << endl;
    
    // Variasi 3: Bilangan acak
    vector<int> A3 = {3, 7, 1, 9, 4, 6, 8, 2, 5, 0};
    vector<int> B3 = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    cout << "\nVARIASI 3 - Bilangan Acak:" << endl;
    cout << "A3 = [3, 7, 1, 9, 4, 6, 8, 2, 5, 0]" << endl;
    cout << "B3 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]" << endl;
    cout << "Hasil Ex1: " << ex1(A3) << endl;
    cout << "Hasil Ex2: " << ex2(A3) << endl;
    cout << "Hasil Ex3: " << ex3(A3) << endl;
    cout << "Hasil Ex4: " << ex4(A3) << endl;
    cout << "Hasil Ex5: " << ex5(A3, B3) << endl;
    
    cout << "\n==================================================" << endl;
    
    return 0;
}