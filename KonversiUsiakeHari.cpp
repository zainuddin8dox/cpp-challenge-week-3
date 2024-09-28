#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std

int main() {
    int tahun, bulan, hari, totalHari;  // Deklarasi variabel

    cout << "Masukkan tahun: ";  // Menampilkan pesan untuk meminta input bilangan tahun
    cin >> tahun;   // Menerima input dan menyimpan di tahun

    cout << "Masukkan bulan: ";  // Menampilkan pesan untuk meminta input bilangan bulan
    cin >> bulan;   // Menerima input dan menyimpan di bulan

    cout << "Masukkan hari: ";  // Menampilkan pesan untuk meminta input bilangan hari
    cin >> hari;  // Menerima input dan menyimpan di hari


    totalHari = (tahun * 365) + (bulan * 30) + hari;   // Menghitung nilai konversi usia ke hari

    cout << tahun << " tahun " << bulan  << " bulan "  << hari << " hari = " << totalHari << " hari" << endl;  // Menampikan hasil dari konversi usia ke hari


    return 0; // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
