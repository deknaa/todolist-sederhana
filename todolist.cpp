// Created by Dekna
#include <iostream>

using namespace std;

int main() {

    // Membuat variabel
    string nama;
    string kegiatan;
    // -------------

    // Meminta output user
    cout << "----- Program To Do List Sederhana -----\n";
    cout << "Masukan nama : \n";
        cin >> nama;
    cout << "Masukan kegiatan yang ingin anda lakukan : \n";
        cin >> kegiatan;
    // -----------------

    // Mencetak output
    cout << endl;
    cout << "Nama anda adalah : " << nama << endl;
    cout << "Kegiatan yang dilakukan : " << kegiatan << endl;
    // --------------

    cout << "---------------------------- \n";
    
    return 0;
}
