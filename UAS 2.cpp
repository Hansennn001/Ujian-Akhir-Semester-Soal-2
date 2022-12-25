#include <iostream>
using namespace std;	

int main() {
	int baris, kolom, i, j, hasil;
	
	cout << "Mencari Value Yang Tidak Habis Dibagi Dengan Nilai 3, 5, 7\n"
	  	 << "Nama: Alhan Husein\n"
		 << "NIM: 1227050015\n\n"
	
	     << endl << "Masukkan banyak baris: "; 
		 cin >> baris;
	cout << endl << "Masukkan banyak kolom: "; 
		 cin >> kolom;
	
	int ang[baris][kolom];
	
	// input
	for (i = 1; i <= baris; i++) {
		for (j = 1; j <= kolom; j++) {
			cout << "Num[" << i << "." << j << "]: ";
			cin >> ang[i][j];
		}
	}
	
	// proses
	for (i = 1; i <= baris; i++) {
		for (j = 1; j <= kolom; j++) {
			if (ang[i][j] % 3 != 0 && ang[i][j] % 5 != 0 && ang[i][j] % 7 != 0) {
				cout << "Bilangan yang tidak habis dibagi 3, 5, 7 adalah : " << ang[i][j] << endl;
			} 
		}
	}
}
