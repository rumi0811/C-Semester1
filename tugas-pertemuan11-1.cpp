#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <cstring>
using namespace std;
int main();
nilai(float uts,float uas,float *jumlah,char **nilaihuruf)
{
*jumlah=(uas*0.4)+(uts*0.6) ;
if (*jumlah>=80)
{
*nilaihuruf="A";
}
else
if (*jumlah>=70)
{
*nilaihuruf="B";
}
else
if (*jumlah>=56)
{
*nilaihuruf="C";
}
else
if (*jumlah>=47)
{
*nilaihuruf="D";
}
else
{
*nilaihuruf="E";
}
}
main()
{
int o, jumlahdata;
char kembali, atas;
struct
{
float jumlah,uas,uts;
char nama[50], lagi, *nilaihuruf;
}mhs[5];
atas:
cout<<endl;
cout<<"\t\t=================================================="<<endl;
cout<<"\t\t "<<endl;
cout<<"\t\tDaftar Nilai Mata Kuliah C++ "<<endl;
cout<<"\t\t "<<endl;
cout<<"\t\t=================================================="<<endl;
cout<<endl;
cout<<"Masukkan jumlah mahasiswa : ";cin>>jumlahdata;
cout<<endl;
for(o=1;o<=jumlahdata;o++)
{
cout<<"Mahasiswa ke- "<<o<<endl;
cout<<"Nama Mahasiswa : ";cin>>mhs[o].nama;
cout<<"Nilai UTS : ";cin>>mhs[o].uts;
cout<<"Nilai UAS : ";cin>>mhs[o].uas;
cout<<endl;
}
cout<<"No Nama Nilai Nilai Nilai "<<endl;
cout<<" Mahasiswa UTS UAS Akhir Huruf "<<endl;
for(o=1;o<=jumlahdata;o++)
{
cout<<setiosflags(ios::left)<<setw(6)<<o;
cout<<setiosflags(ios::left)<<setw(15)<<mhs[o].nama;
cout<<setiosflags(ios::left)<<setw(10)<<mhs[o].uts;
cout<<setiosflags(ios::left)<<setw(11)<<mhs[o].uas;
nilai(mhs[o].uts,mhs[o].uas,&mhs[o].jumlah,&mhs[o].nilaihuruf);
cout<<setiosflags(ios::left)<<setw(17)<<mhs[o].jumlah;
cout<<setiosflags(ios::left)<<setw(13)<<mhs[o].nilaihuruf<<endl;
}
cout<<endl;
cout<<"Jumlah Mahasiswa : "<< jumlahdata <<endl;
cout<<"input data lagi [Y]/[T]? : ";kembali=getche();
if(kembali=='Y'||kembali=='y')
{
 goto atas;
}
else if(kembali=='T'||kembali=='t')
{
 system("cls");
}
getch();
}
