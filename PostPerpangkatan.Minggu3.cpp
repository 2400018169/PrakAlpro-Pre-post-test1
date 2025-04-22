#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, pangkat;
	float hasil;
	
	cout << "========== MENGHITUNG PERPANGKATAN ==========" << endl;
	cout << endl;
	cout << " Masukkan Nilai A: ";
	cin >> a;
	cout << " Masukkan Perpangkatan: ";
	cin >> pangkat;
	cout << endl;
	cout << "=============================================" << endl;
	
	hasil = pow(a,pangkat);
	
	cout << " Hasil dari Perpangkatan Adalah " << hasil << endl;
	
	return 0;
}
