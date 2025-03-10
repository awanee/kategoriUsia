#include <iostream> // library c++ merakyat;

using namespace std; // biar tidak menulis [std::cout <<] karena nanti terlalu panjang kalo gak make ini;

int main() {
    int usia; // deklarasi variabel;
    string kategori;

    cout << "Masukkan Usia Anda: "; // meminta user untuk memasukkan data usianya;
    cin >> usia; // data usia disimpan di variabel sini;

    if (usia <= 12) { // pengkondisian else if yang memberikan banyak pilihan kategori;
        kategori = "Anak-Anak";
    } else if (usia <= 18) {
        kategori = "Remaja";
    } else if (usia <= 59) {
        kategori = "Dewasa";
    } else {
        kategori = "lansia";
    }

    cout << "Kategori Usia Anda: " << kategori << endl; // cetak kategori usia user;
}