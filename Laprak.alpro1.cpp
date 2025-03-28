#include<iostream>
#include <iomanip>
#include<string>

using namespace std;

struct KTP {
	string nik;
	string nama;
	string tempat_tgl_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_kawin;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku;
};

void inputKTP(KTP &ktp){
	cout<<"Masukkan NIK:"; getline(cin,ktp.nik);
	cout<<"Masukkan Nama:"; getline(cin,ktp.nama);
	cout<<"Masukkan Tempat/Tgl Lahir:"; getline(cin,ktp.tempat_tgl_lahir);
	cout<<"Masukkan Jenis Kelamin:"; getline(cin,ktp.jenis_kelamin);
	cout<<"Masukkan Golongan Darah:"; getline(cin,ktp.gol_darah);
	cout<<"Masukkan Alamat:"; getline(cin,ktp.alamat);
	cout<<"Masukkan RT/RW:"; getline(cin,ktp.rt_rw);
	cout<<"Masukkan Kelurahan/Desa:"; getline(cin,ktp.kel_desa);
	cout<<"Masukkan Kecamatan:"; getline(cin,ktp.kecamatan);
	cout<<"Masukkan Agama:"; getline(cin,ktp.agama);
	cout<<"Masukkan Status Perkawinan:"; getline(cin,ktp.status_kawin);
	cout<<"Masukkan Pekerjaan:"; getline(cin,ktp.pekerjaan);
	cout<<"Masukkan Kewarganegaraan:"; getline(cin,ktp.kewarganegaraan);
	cout<<"Masukkan Berlaku Hingga:"; getline(cin,ktp.berlaku);
}

void displayKTP(const KTP &ktp){
	cout<<"\n====================== SIMULASI KTP ====================\n";
	cout<<"|                PROVINSI KEB. BANGKA BELITUNG          |\n";
	cout<<"|                      KABUPATEN BANGKA                 |\n";
	cout<<left<<setw(20)<<"|NIK" << ":"<<ktp.nik<<"\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Nama" << ":"<<ktp.nama<<"\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Tempat/Tgl Lahir" << ":"<<ktp.tempat_tgl_lahir<<"\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Jenis Kelamin" << ":"<<ktp.jenis_kelamin <<"\tGolongan Darah" << ":"<<ktp.gol_darah<<"\t|"<<endl;
	cout<<left<<setw(20)<<"|Alamat" << ":"<<ktp.alamat<<"\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|RT/RW" << ":"<<ktp.rt_rw<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Kelurahan/Desa" << ":"<<ktp.kel_desa<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Kecamatan" << ":"<<ktp.kecamatan<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Agama" << ":"<<ktp.agama<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Status Perkawinan" << ":"<<ktp.status_kawin<<"\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Pekerjaan" << ":"<<ktp.pekerjaan<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Kewarganegaraan" << ":"<<ktp.kewarganegaraan<<"\t\t\t\t|"<<endl;
	cout<<left<<setw(20)<<"|Berlaku Hingga" << ":"<<ktp.berlaku<<"\t\t\t|"<<endl;
	cout<<"=========================================================\n";
}

int main(){
	KTP ktp;
	
	cout<<"Input Data KTP\n";
	inputKTP(ktp);
	
	displayKTP(ktp);
	
	return 0;
}
