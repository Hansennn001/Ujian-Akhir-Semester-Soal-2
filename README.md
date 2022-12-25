# Ujian Akhir Semester 
<br> Mata Kuliah 	: Dasar Pemrograman
<br> Nama		      : Alhan Husen
<br> NIM		      : 1227050015
<br> Jurusan		  : [Teknik Informatika](http://if.uinsgd.ac.id/) [UIN Sunan Gunung Djati Bandung](https://uinsgd.ac.id/) 

## Deskripsi Umum

Lalu, untuk soal nomor dua ini adalah membahas pengimplementasian array dalam bentuk sebuah deret. deret ini akan membagi mana bilangan yang di input tidak habis dibagi dengan nilai tertentu, dalam kasus ini adalah bilangan 3,5 dan juga 7.

## Source Code

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

## Output
 
![uas2](https://user-images.githubusercontent.com/120738510/209472378-604b5ffa-8d5f-4d97-9292-635f315a4a5a.jpg)
