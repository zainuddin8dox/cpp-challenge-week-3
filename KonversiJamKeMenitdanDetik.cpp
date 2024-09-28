#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std

int main() {
    int jam, menit, detik;  // Deklarasi variabel

    cout << "Masukkan bilangan jam: ";  // Menampilkan pesan untuk meminta input bilangan jam
    cin >> jam;  // Menerima input dan menyimpan di variabel jam

    menit = jam * 60;  // Menghitung nilai konversi dari jam ke menit

    cout << jam << " jam = " << menit << " menit "  << 0 << " detik" << endl;  // Menampilkan hasil konversi dari jam ke menit

    return 0;   // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
