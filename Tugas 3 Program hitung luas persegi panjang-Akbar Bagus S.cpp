
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
using namespace std;

int P,L;
void menu_utama();
void pemilihan_berulang();
void hitung_luas();
void hitung_keliling();
void hitung_diagonal();
void keluar_program();

int main ()
 {
 
 menu_utama();
 return 0;
 }

void menu_utama()
 {
  int Pilihan;
  cout<<endl;
  cout<<"-----MENU EMPAT PERSEGI PANJANG----"<<endl;
  cout<<endl;
  cout<<"=======MENU======= "<<endl;
  cout<<"1. Hitung luas."<<endl;
  cout<<"2. Hitung keliling."<<endl;
  cout<<"3. Hitung panjang diagonal."<<endl;
  cout<<"4. Keluar program."<<endl;
  cout<<"==========================================================="<<endl;
  cout<<"MASUKAN NOMOR PILIHAN: "; cin>>Pilihan;
  cout<<endl;
  
 switch (Pilihan)
  {
   case 1:
   	hitung_luas();
   	break;
   case 2:
   	hitung_keliling();
   	break;
   case 3:
   	hitung_diagonal();
   	break;
   case 4:
   	keluar_program();
   	break;
   default:
   cout<<endl;
   cout<<"Tidak ada dalam daftar. Ulangi kembali !";
   cout<<endl;
   menu_utama();
  }
 } 
  void pemilihan_berulang()
   {
    
    char pilih;
    cout<<endl;
    cout<<endl;
    cout<<"Ketik [Y] untuk kembali ke Menu utama."<<endl;
    cout<<"Ketik [T] untuk keluar program."<<endl;
    cout<<"[Y/T]....? "; cin>>pilih;
     
     if (pilih=='Y' || pilih=='y')
     {
      menu_utama();
     }
     else if (pilih=='T' || pilih=='y')
     {
      keluar_program();
     }
     else
     {
      cout<<endl;
      cout<<endl;
      cout<<"Ulangi !!!"<<endl;
      pemilihan_berulang();
      cout<<endl;
      cout<<endl;
      cout<<endl;
     }
    }
     
void hitung_luas()
 {
  int hasil_hitung_luas;
  cout<<endl;
  cout<<"ANDA MEMILIH HITUNG LUAS."<<endl;
  cout<<"Masukan nilai panjang   : ";cin>>P;
  cout<<"Masukan nilai lebar   : ";cin>>L;
  hasil_hitung_luas=P*L;
  cout<<"Luas persegi panjang   : "<<hasil_hitung_luas<<endl;
  pemilihan_berulang();
 }
 
void hitung_keliling()
 {
  int hasil_hitung_keliling;
  cout<<endl;
  cout<<"ANDA MEMILIH MENGHITUNG KELILING. "<<endl;
  cout<<"Masukan nilai panjang    : ";cin>>P;
  cout<<"Masukan nilai lebar   : ";cin>>L;
  hasil_hitung_keliling=2*(P+L);
  cout<<"Keliling persegi panjang : "<<hasil_hitung_keliling<<endl;
  pemilihan_berulang();
 }
 
void hitung_diagonal()
 {
  int diagonal;
  cout<<endl;
  cout<<"ANDA MEMILIH MENGHITUNG PANJANG DIAGONAL. "<<endl;
  cout<<"Masukan nilai panjang : ";cin>>P;
  cout<<"Masukan nilai lebar : ";cin>>L;
  diagonal=sqrt((double) P * P + (double) L*L);
  cout<<"Hasil hitung panjang diagonal : "<<diagonal<<endl;
  getch();
  pemilihan_berulang();
 }
 
void keluar_program()
 {
  cout<<endl;
  cout<<endl;
  cout<<endl;
  cout<<"====================EXIT======================="<<endl;
  
 }
