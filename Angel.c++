#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int MAX_ITEMS = 100;  // Maximum number of products
    string namaBarang[MAX_ITEMS];
    float hargaPerBarang[MAX_ITEMS];
    int jumlahTerjual[MAX_ITEMS];
    float totalPendapatan[MAX_ITEMS];
    int jumlahBarang = 0;
    char lagi;

    do {
        // Input data
        cout <<setprecision(12);
        cout << "Masukkan nama barang: ";
        cin >> namaBarang[jumlahBarang];
        cout << "Masukkan harga per barang: ";
        cin >> hargaPerBarang[jumlahBarang];
        cout << "Masukkan jumlah barang terjual: ";
        cin >> jumlahTerjual[jumlahBarang];

        // Hitung total pendapatan per barang
        totalPendapatan[jumlahBarang] = hargaPerBarang[jumlahBarang] * jumlahTerjual[jumlahBarang];

        jumlahBarang++;

        // Tanya apakah ingin memasukkan data lagi
        cout << "Apakah ingin memasukkan data penjualan lagi? (y/n): ";
        cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    // Output dalam bentuk tabel
    cout << "\nLaporan Penjualan:\n";
    cout << setw(5) << "No" 
         << setw(20) << "Nama Barang" 
         << setw(20) << "Harga Per Barang" 
         << setw(20) << "Jumlah Terjual" 
         << setw(20) << "Total Pendapatan\n";
    
    for (int i = 0; i < jumlahBarang; i++) {
        cout << setw(5) << (i+1)
             << setw(20) << namaBarang[i]
             << setw(20) << hargaPerBarang[i]
             << setw(20) << jumlahTerjual[i]
             << setw(20) << totalPendapatan[i] << endl;
    }

    return 0;
}
