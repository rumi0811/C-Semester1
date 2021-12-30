#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <conio.h>
#include <ctime>
using namespace std;
garis()
{
cout<<"==============================================================================
==\n";
}
int main()
{
class pegawai
{
 public:
 int jumlah_p, honor, honor_l, total_h, i;
 char nama_p[35];
}pegawai_s[5];
 int jumlahpegawai, i;
 time_t now = time(0);
 char* dt = ctime(&now), balik, atas;
 int total_h_p=0;
atas://label
 garis();
 cout<< "\t\t\tPT.Meriang Gembira"<<endl;
 garis();
 cout<<endl;
 cout<< "Jumlah : ";cin>>jumlahpegawai;
 cout<< "Tanggal Input : "<<dt<<endl;
 garis();
 cout<<endl;
 for(i=1;i<=jumlahpegawai;i++)
 {
 cout<< "Data Ke-"<<i<<endl;
 cout<< "Nama Pegawai : ";cin>>pegawai_s[i].nama_p;
 cout<< "Jumlah Jam Kerja : ";cin>>pegawai_s[i].jumlah_p;
 cout<<endl;
 }
 garis();
 cout<< "\t\t\tPT.Meriang Gembira"<<endl;
 garis();
 cout<<endl;
 cout<< "Tanggal :"<<dt<<endl;
 garis();
 //no.5 nama.10 honor.7 jumlah 5 honor 6
 cout<< "NO. Nama Honor Jumlah Honor Total"<<endl;
 cout<< " Pegawai Jam Kerja Lembur Honor"<<endl;
 garis();
 for(i=1;i<=jumlahpegawai;i++)
 {
 cout<<setiosflags(ios::left)<<setw(8)<<i;
 cout<<setiosflags(ios::left)<<setw(14)<<pegawai_s[i].nama_p;
 pegawai_s[i].honor=25000;
 cout<<setiosflags(ios::left)<<setw(12)<<pegawai_s[i].honor;
 cout<<setiosflags(ios::left)<<setw(14)<<pegawai_s[i].jumlah_p;
 if(pegawai_s[i].jumlah_p>8)
 {
 pegawai_s[i].honor_l=((pegawai_s[i].jumlah_p-8)*1500);
 }
 else
 {
 pegawai_s[i].honor_l=pegawai_s[i].honor*0;
 }
 cout<<setiosflags(ios::left)<<setw(11)<<pegawai_s[i].honor_l;
 pegawai_s[i].total_h=pegawai_s[i].honor_l+pegawai_s[i].honor;
 cout<<setiosflags(ios::left)<<setw(8)<<pegawai_s[i].total_h;
 total_h_p=total_h_p+pegawai_s[i].total_h;
 cout<<endl;
 }
 garis();
 cout<< "Total honor pekerja yang harus dibayar : "<<total_h_p<<endl;
 cout<< "Ingin input data lagi?[Y/T] : ";cin>>balik;
 if(balik=='Y'||balik=='y')
 {
 goto atas;
 }
 else
 {
 system("cls");
 }
}
