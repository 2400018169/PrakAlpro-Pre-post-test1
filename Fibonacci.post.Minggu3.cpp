#include<iostream>
using namespace std;

void fibonacci(int a, int b, int jumlah) {
	int hasil;
	cout<<a<<endl;
	cout<<b<<endl;
	for(int i = 3; i<=jumlah; i++) {
		hasil = a + b;
		a = b;
		b = hasil;
		cout<<hasil<<endl;
	}
	
}

int main() {
	int a, b, jumlah;
	
	cout<<"Masukkan bilangan pertama: "; cin>>a;
	cout<<"Masukkan bilangan kedua: "; cin>>b;
	cout<<"Masukkan jumlah bilangan: "; cin>>jumlah;
	fibonacci(a, b, jumlah);
}
