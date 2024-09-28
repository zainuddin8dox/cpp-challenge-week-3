#include <iostream>     // Library untuk input/output
using namespace std;    // Menggunakan objek dari namespace std 

int main() {
    int  a, b;  // Deklarasi variabel
   
    cout << "Masukkan bilangan pertama: ";  // Menampilkan pesan untuk meminta input angka pertama dari pengguna
    cin >> a;  // Menerima input dan menyimpan di variabel a

    cout << "Masukkan bilangan kedua: ";  // Menampilkan pesan untuk meminta input angka kedua dari pengguna
    cin >> b;  // Menerima input dan menyimpan di variabel b

    cout << "Penjumlahan: " << a + b << endl;  // Menghitung dan menampilkan hasil penjumlahan dari a dan b
    cout << "Pengurangan: " << a - b << endl;  // Menghitung dan menampilkan hasil Pengurangan dari a dan b
    cout << "Perkalian: " << a * b << endl;    // Menghitung dan menampilkan hasil Perkalian dari a dan b
    cout << "Pembagian: " << a / b << endl;    // Menghitung dan menampilkan hasil Pembagian dari a dan b


    return 0;   // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
