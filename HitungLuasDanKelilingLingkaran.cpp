#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std

int main() {
    int diameter, radius, luas, keliling;   // Deklarasi variabel lingkaran
    const double pi = 3.14159;   // Deklarasi variabel pi

    cout << "Masukkan diameter lingkaran: ";  // Menampilkan pesan untuk meminta input diameter lingkaran dari pengguna
    cin >> diameter;  // Menerima input dan menyimpan di variabel diameter
    
    radius = diameter / 2;  // Menghitung nilai radius (jari-jari) lingkaran

    luas = pi * radius * radius;  // Menghitung nilai luar lingkaran

    keliling = 2 * pi * radius;  // Menghitung nilai keliling lingkaran

    cout << "Luas: " << luas << endl;  // Menampikan hasil dari luar lingkaran 
    cout << "Keliling: " << keliling << endl;  // Menampikan hasil dari keliling lingkaran

    return 0;   // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
