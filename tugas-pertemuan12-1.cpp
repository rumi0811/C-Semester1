#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
int main()
{
 struct {
 char nama[25], jns[40], kode;
 int harga, jumbel, total;
 }kue[5];
 int o, m;
 char x;
 atas://label
 cout<< "\t\t ================================================="<<endl;
 cout<< "\t\t\t \t Transaksi Penjualan"<<endl;
 cout<< "\t\t ================================================="<<endl;
 cout<< "\t\t Masukkan Jumlah Data : ";cin>>m;
 for(o=1; o<=m; o++)
 {
 //cout<< "\t\t Data Ke : "<<o<<endl;
 cout<< "\t\t Nama Pembeli : ";cin>>kue[o].nama;
 cout<< "\t\t Kode Obat[S/T/K] : ";cin>>kue[o].kode;
 if(kue[o].kode=='S'||kue[o].kode=='s')
 {
 strcpy(kue[o].jns, "Sirup");
 kue[o].harga=25000;
 }
 else if(kue[o].kode=='T'||kue[o].kode=='t')
 {
 strcpy(kue[o].jns, "Tablet");
 kue[o].harga=20000;
 }
 else if(kue[o].kode=='K'||kue[o].kode=='k')
 {
 strcpy(kue[o].jns, "Kapsul");
 kue[o].harga=15000;
 }
 else
 {
 goto atas;
 }
 cout<< "\t\t Jumlah Beli : ";cin>>kue[o].jumbel;
 cout<< "\t\t ================================================="<<endl;
 }
 cout<<endl;
 cout<<endl;
 cout<< 
"==========================================================================="<<endl;
 cout<< "\t\t \t \t Data Penjualan "<<endl;
 cout<< 
"==========================================================================="<<endl;
 cout<< "No Nama Kode Jenis Harga Jumlah"<<endl;
 cout<< " Pembeli Obat obat Obat Bayar "<<endl;
 cout<< 
"==========================================================================="<<endl;
 cout<<endl;
 for(o=1;o<=m;o++)
 {
 cout<<setiosflags(ios::left)<<setw(6)<<o;
 cout<<setiosflags(ios::left)<<setw(15)<<kue[o].nama;
 cout<<setiosflags(ios::left)<<setw(10)<<kue[o].kode;
 cout<<setiosflags(ios::left)<<setw(11)<<kue[o].jns;
 cout<<setiosflags(ios::left)<<setw(17)<<kue[o].harga;
 kue[o].total=kue[o].jumbel*kue[o].harga;
 cout<<setiosflags(ios::left)<<setw(13)<<kue[o].total;
 cout<<endl;
 }
 cout<< 
"==========================================================================="<<endl;
 cout<<"Mau Input Lagi Ngga?[Y/T] : "<<x<<endl;
 x=getche();
 if(x=='Y'||x=='y')
 goto atas;
 getch();
}
