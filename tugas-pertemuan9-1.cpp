#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
char nama[3][4][90]={{"Januari","Februari","Maret","April"},
{"Mei","Juni","Juli","Agustus"},
{"September","Oktober","November","Desember"}};
cout<<"============================="<<endl;
cout<<"Program Nama Bulan Pada 2018"<<endl;
cout<<"============================="<<endl;
cout<<nama[0][0]<<" "<<ends<<"\t "<<nama[0][1]<<" "<<ends<<"\t 
"<<nama[0][2]<<ends<<endl;
cout<<nama[0][3]<<" "<<ends<<"\t "<<nama[1][0]<<" "<<ends<<"\t 
"<<nama[1][1]<<ends<<endl;
cout<<nama[1][2]<<" "<<ends<<"\t "<<nama[1][3]<<" "<<ends<<"\t 
"<<nama[2][0]<<ends<<endl;
cout<<nama[2][1]<<" "<<ends<<"\t "<<nama[2][2]<<" "<<ends<<"\t 
"<<nama[2][3]<<ends<<endl;
getch();
}
