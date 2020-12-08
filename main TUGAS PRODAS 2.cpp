/*SANTIKA LANA HAYTAI-NIM 20051397006*/
/*D4-MANAJEMEN INFORMATIKA-2020B*/
/*Menentukan keterangan dari nilai*/

#include <iostream>
#include <conio.h>
#include <sstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
 string k="************************";	
 const int ukuran_array = 5;
 int nilai_maksimal = 0;
 string namap;
 string array[ukuran_array][2];
 string kategori;
 
 for(int i=0;i<=ukuran_array-1;i++){
 	cout<<k<<endl;
 	cout<<"nilai ke-"<<i+1<<endl;
 	cout<<"masukkan nama =";
 	cin>>*(*(array+i)+0);
 	cout<<"masukkan nilai =";
 	cin>>*(*(array+i)+1);
 	cout<<endl;
 }	
cout<<endl<<"kategori nilai"<<endl<<endl<<endl
	
 for(int p=0;p<=ukuran_array-1;p++){
 	string nama = *(*(array+p)+0);
 	stringstream ss(*(*(array+p)+1));
 	int nilai;
	ss>>nilai;
 	if(nilai>=90&&nilai<=100){
 		kategori = "A";
}
else if(nilai>=80&&nilai<90){
kategori ="B";
}
else if(nilai>=70&&nilai<80){
	kategori ="C";
}
else if(nilai>=60&&nilai<70){
	kategori ="D";
}
else if(nilai>=50&&nilai<60){
	kategori ="E";
}
else if(nilai<50){
	kategori ="tidak lulus"
}
cout<<endl<<endl<<k<<endl<<"Nama ="<<nama<<endl<<"Nilai ="<<nilai<<endl<<"kategori nilai ="<<kategori<<endl;
if(nilai>nilai maksimal){
	nilai_maksimal = nilai;
	namap = nama;
}
 }
 
	return 0;
}
