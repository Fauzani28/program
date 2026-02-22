#include <iostream>
#include <string>
using namespace std;

void chatSimulasi() {
    string user1 = "muhammad";
    string user2 = "Udin";
    string pesan;
    int giliran = 1;

    cout << "=== Simulasi Chat Sederhana ===\n";
    cout << "Ketik 'exit' untuk keluar.\n\n";

    while (true) {
        if (giliran == 1) {
            cout << user1 << ": ";
        } else {
            cout << user2 << ": ";
        }

        getline(cin, pesan);

        if (pesan == "exit") {
            cout << "Chat berakhir.\n";
            break;
        }

        if (giliran == 1) {
            cout << user2 << " menerima: " << pesan << endl;
            giliran = 2;
        } else {
            cout << user1 << " menerima: " << pesan << endl;
            giliran = 1;
        }

        cout << endl;
    }
}

int main() {
    chatSimulasi();
    return 0;
}
