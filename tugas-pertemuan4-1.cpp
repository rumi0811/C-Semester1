#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    char nama[30],pend[10],balik;
    long lembur,tunjab,tunpend,gaji,gol;
    int qty,jmljam;
atas: //label
system("cls");
  
    printf("\t\t PROGRAM HITUNG GAJI KARYAWAN\n");
    printf("\t\t\tPT. DINGIN DAMAI\n");
    printf("\t\t ==============================\n\n");
  
 //input
    cout<<"Nama Karyawan : ";cin>>nama;
    cout<<"Golongan Jabatan : ";cin>>gol;
    cout<<"Pendidikan : ";cin>>pend;
    cout<<"Jumlah Jam Kerja : ";cin>>jmljam;
    cout<<endl;
  
 //penggajian uang nya 
    gaji=300000;
 switch(gol)
 {
    case 1:
    tunjab=(0.05*300000);
 break;
    case 2:
    tunjab=(0.10*300000);
 break;
    case 3:
    tunjab=(0.15*300000);
 break;
 default:
    cout<<" \nKode Golongan Jabatan Yang Anda Masukkan Salah!!!";
    cout<<endl;
 goto bawah;
 }
  
  
  //penggajian pendidikannya
    if (strcmp(pend,"sma")==0||strcmp(pend,"SMA")==0)
 {
      tunpend = 2.5 * gaji / 100;
 }
    else if (strcmp(pend,"d1")==0||strcmp(pend,"D1")==0)
 {
      tunpend = 3 * gaji / 100;
 }
    else if (strcmp(pend,"d3")==0||strcmp(pend,"D3")==0)
 {
      tunpend = 5 * gaji / 100;
 }
    else if (strcmp(pend,"s1")==0||strcmp(pend,"S1")==0)
 {
      tunpend = 7.5 * gaji / 100;
 }
    else
 {
      cout<<" \nPendidikan Yang Anda Masukkan Salah!!!";
      cout<<endl;
 goto bawah;
 }
  
  
    //penggajian lemburan lebih dari 8 jam
      if(lembur>8)
      lembur=(jmljam-8)*2500;
      qty=(gaji+tunjab+tunpend+lembur);
  
  
    //output
        cout<<"Karyawan yang bernama"<<nama<<endl;
        cout<<"Honor yang diterima" <<endl<<endl;
        cout<<setiosflags(ios::fixed);
        cout<<"\tTunjangan Jabatan Rp "<<setw(10)<<tunjab<<endl;
        cout<<"\tTunjangan Pendidikan Rp "<<setw(10)<<tunpend<<endl;
        cout<<"\tHonor Lembur Rp "<<setw(10)<<lembur<<endl;
        cout<<"\t\t\t -------------+"<<setw(10)<<endl;
        cout<<"\tTotal Gaji Rp "<<setw(10)<<qty<<endl<<endl;
  
 bawah://label
  
    cout<<"\nInput Data Lagi ? [Y/T]: ";
    balik = getche();
      if(balik == 'Y' || balik =='y')
      {
        goto atas;
      }
      else if (balik == 'T' || balik =='t')
      {
        system("cls");
      }
        cout<<"Tekan Enter 2x Untuk Keluar ";
        getch();
}
