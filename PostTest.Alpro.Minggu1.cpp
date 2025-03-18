#include <iostream> //Library yang digunakan
#include <iomanip>
#include <string>

using namespace std;

struct Data { //Struktur Sata yang digunakan untuk menyimpan data
    string nama_pelanggan;
    string jenis_bensin;
    float total_liter;
    float perliter;
    float total_harga;
};

void inputData(Data &data) { //Menggunakan fungsi void untuk menerima input
	cout << endl;
	cout << "+------------------------ DATA PEMBELIAN ------------------------+" << endl;
    cout << "Masukkan Nama Pelanggan: "; getline(cin, data.nama_pelanggan);
	cout << "Masukkan Jenis Bensin (pertalite/pertamax): "; getline(cin, data.jenis_bensin);
	cout << "Masukkan Jumlah Liter Bensin: "; cin >> data.total_liter;
    cin.ignore();  // Untuk menghindari bug saat getline() dipakai setelah cin
    cout << "+----------------------------------------------------------------+" << endl;

    if (data.jenis_bensin == "pertalite") {
        data.perliter = 7000;
    } else if (data.jenis_bensin == "pertamax") {
        data.perliter = 9000;
    } else {
        cout << "Jenis Bensin Tidak Tersedia! Harga diatur menjadi 0." << endl;
        data.perliter = 0;
    }

	data.total_harga = data.total_liter * data.perliter;
	
	//system("cls"); //menggunalan sistem clear
}

void displayData(const Data &data) { //Fungsi yang digunakan untuk menampilkan data 
	cout << endl;
    cout << "\n============================ PERTAMINI =============================\n";
    cout << "                               123748                             \n";
    cout << "                              POM GUCCI                           \n";
    cout << "               Jln. Jendral Sudirman No.12 Belinyu              \n";
    cout << "Shif:  2              No. Transaksi : 5346721 \n";
    cout << "Waktu: 18/03/2025     14:08:53 \n";
    cout << "--------------------------------------------------------------------\n";
    cout << endl;
    cout << left << setw(20) << "Nama Pelanggan" << ": " << data.nama_pelanggan << endl;
    cout << left << setw(20) << "Jenis Bensin" << ": " << data.jenis_bensin << endl;
    cout << left << setw(20) << "Total Liter" << ": " << data.total_liter << " liter" << endl;
    cout << left << setw(20) << "Harga Per Liter" << ": Rp " << data.perliter << endl;
    cout << left << setw(20) << "Total Harga" << ": Rp " << data.total_harga << endl;
    cout << endl;
    cout << "--------------------------------------------------------------------\n";
    cout << "          TERIMA KASIH, HATI - HATI SELAMAT JALAN               \n";
    cout << "   Subsidi di Bulan Maret : Pertalite Rp7.000/Liter & Pertamax  \n";
    cout << "   Rp9.000/Liter. Subsidi hanya untuk yang berhak menerimanya   \n";
    cout << "====================================================================\n";
    cout << "                        * CUSTOMER COPY *                       \n";
}

int main() { //program dijalankan
    Data data;

    cout << "Input Data Struk\n";
    inputData(data);

    displayData(data);

    return 0;
}

