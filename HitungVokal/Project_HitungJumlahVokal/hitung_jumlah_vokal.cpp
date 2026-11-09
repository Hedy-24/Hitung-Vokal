#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

bool isConsonant(char ch) {
    ch = tolower(ch);
    return (isalpha(ch) && !isVowel(ch));
}

int main() {
    string kalimat;
    int pilihan;
    char lanjut;

    do {
        cout << "Penghitungan Jumlah Vokal atau Konsonan" << endl;
        cout << "Masukkan kalimat yang akan dicek: ";
        getline(cin, kalimat);

        cout << "Masukkan 1 untuk menghitung huruf vokal, masukkan 2 untuk menghitung huruf konsonan: ";
        cin >> pilihan;
        cin.ignore();

        int jumlah = 0;

        if (pilihan == 1) {
            for (char ch : kalimat) {
                if (isVowel(ch)) {
                    jumlah++;
                }
            }
            cout << "Jumlah huruf vokal yang dipilih: " << jumlah << endl;
        }
        else if (pilihan == 2) {
            for (char ch : kalimat) {
                if (isConsonant(ch)) {
                    jumlah++;
                }
            }
            cout << "Jumlah huruf konsonan yang dipilih: " << jumlah << endl;
        }
        else {
            cout << "Pilihan tidak valid" << endl;
        }

        cout << "Apakah lanjut? (Yes/No): ";
        cin >> lanjut;
        cin.ignore();

    } while (lanjut == 'Y' || lanjut == 'y');
    cout << endl;

    cout << "Ubur-ubur ikan lele" << endl;
    cout << "Matur nuwun lee" << endl;
    return 0;
}
