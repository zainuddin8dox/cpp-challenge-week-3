#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std 

int main() {
    int a, b,c;  // Deklarasi variabel

    cout << "Masukkan bilangan pertama: ";  // Menampilkan pesan untuk meminta input bilangan pertama dari pengguna
    cin >> a;  // Menerima input dan menyimpan di variabel a

    cout << "Masukkan bilangan kedua: ";  // Menampilkan pesan untuk meminta input bilangan kedua dari pengguna
    cin >> b;  // Menerima input dan menyimpan di variabel b

    cout << "Masukkan bilangan ketiga: ";  // Menampilkan pesan untuk meminta input bilangan ketiga dari pengguna
    cin >> c;  // Menerima input dan menyimpan di variabel c
    
    int rata_rata = (a + b + c) / 3;  // Menghitung nilai rata-rata dari a , b dan c

    cout << "Rata-rata: " << rata_rata << endl;  // Menampilkan hasil rata-rata dari a , b dan c

    return 0;   // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
