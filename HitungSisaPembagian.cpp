#include <iostream>   // Library untuk input/output
using namespace std;  // Menggunakan objek dari namespace std

int main() {
    int dibagi, pembagi, sisa;  // Deklarasi variabel

    cout << "Masukkan bilangan dibagi: ";  // Menampilkan pesan untuk meminta input bilangan dibagi
    cin >> dibagi;  // Menerima input dan menyimpan di variabel dibagi

    cout << "Masukkan bilangan pembagi: ";  // Menampilkan pesan untuk meminta input bilangan pembagi
    cin >> pembagi;  // Menerima input dan menyimpan di variabel pembagi

    sisa = dibagi % pembagi;  // Menghitung nilai sisa dari bilangan dibagi dan pembagi

    cout << dibagi << "dibagi " << pembagi  << " adalah"  << dibagi / pembagi << " dengan sisa" << sisa << " *x dan y adalah bilangan bulat > 0" << endl;  // Menampikan hasil dari sisa pembagian

    return 0;  // Mengembalikan nilai 0 yang menandakan program selesai tanpa error
}
