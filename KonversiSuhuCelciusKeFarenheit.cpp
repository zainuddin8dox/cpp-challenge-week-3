#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std

int main() {
    int a;  // Deklarasi variabel

    cout << "Masukkan suhu dalam celcius: ";  // Menampilkan pesan untuk meminta input nilai suhu dalam celcius
    cin >> a;   // Menerima input dan menyimpan di variabel a
    
    int b = (a * 9.0 / 5.0) + 32;  // Menghitung nilai suhu dalam Fahrenheit
    
    cout << a << " Celcius = " << b << " Fahrenheit" << endl;  // Menampilkan hasil konversi suhu dari Celcius ke Fahrenheit

    return 0;   // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
