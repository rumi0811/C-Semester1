#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void header()
{
  cout<<"===============================================\n"<<endl;
  cout<<"TERMINAL AURUM CHAN\n"<<endl;
  cout<<"Jl. CIKIWUL UDIK\n"<<endl;
  cout<<"===============================================\n\n"<<endl;
}

int main(){
  char kode_b, nama_b[50], tujuan[10], nama[50], lagi;
  string kode_tj, hadiah;
  int harga, total, jmlh_beli, ppn, tobay;
  
atas://label
  
header();
  cout<<"Nama Penumpang : ";gets(nama);
  cout<<"Pilihan BUS : (R) Rosalia\n (S) Sinar Jaya\n (H) Hiba Utama\n"<<endl;
  cout<<"===============================================\n"<<endl;
  cout<<"Kode BUS [R / S / H] : ";cin>>kode_b;
  
//pemilihan kode bus R
  if(kode_b == 'R'||kode_b == 'r')
  {
      harga = 0;
      strcpy(nama_b, "Rosalia");
      cout<<"===============================================\n"<<endl;
      cout<<"Pilihan Tujuan : (SBY) Surabaya\n (MLG) Malang\n"<<endl;
      cout<<"===============================================\n"<<endl;
      cout<<"TUJUAN [ SBY / MLG ] : ";cin>>kode_tj;
    
 //pemilihan kode bus R lebih jauh lagi
            if(kode_tj == "SBY"||kode_tj == "sby")
            {
              harga = 300000;
              strcpy(tujuan, "Surabaya");
            }
            else if(kode_tj == "MLG"||kode_tj == "mlg")
            {
              harga = 400000;
              strcpy(tujuan, "Malang");
            }
           else
           {
              cout<<"KODE TUJUAN SALAH";
           }
   }
  
//pemilihan kode bus S
  else if(kode_b == 'S'||kode_b == 's')
  {
    harga = 0;
    strcpy(nama_b, "Sinar Jaya");
    cout<<"===============================================\n"<<endl;;
    cout<<"Pilihan Tujuan : (SLO) Solo\n (TGL) Tegal\n"<<endl;
    cout<<"===============================================\n"<<endl;
    cout<<"TUJUAN [ SLO / TGL ] : ";cin>>kode_tj;
    
//pemilihan kode bus S lebih lanjut
            if(kode_tj == "SLO"||kode_tj == "slo")
            {
                harga = 200000;
                strcpy(tujuan, "Solo");
            }
            else if(kode_tj == "TGL"||kode_tj == "tgl")
            {
                harga = 250000;
                strcpy(tujuan, "Tegal");}
            else
            {
                cout<<"KODE TUJUAN SALAH";
            }
    }
//pemilihan kode bus H
      else if(kode_b == 'H'||kode_b == 'h')
      {
        harga = 0;
        strcpy(nama_b, "Hib");
        cout<<"===============================================\n"<<endl;
        cout<<"Pilihan Tujuan : (LMP) Lampung\n (JGY) Jogyakarta\n"<<endl;
        cout<<"===============================================\n"<<endl;
        cout<<"TUJUAN [ LMP / JGY ] : ";cin>>kode_tj;
        
//pemilihan kode bus H lebih lanjut        
        if(kode_tj == "LMP"||kode_tj == "lmp")
        {
            harga = 350000;
            strcpy(tujuan, "Lampung");
        }
        else if(kode_tj == "JGY"||kode_tj == "jgy")
        {
            harga = 400000;
            strcpy(tujuan, "Jogyakarta");}
        else
        {
            cout<<"KODE TUJUAN SALAH";
        }
      }
  
//apabila tidak memasukkan kode yang benar antara R/S/H
      else
      {
            cout<<"KODE BUS SALAH";
      }
  
//output
      cout<<"===============================================\n\n";system("cls");
      header();
      cout<<"Nama Bus : "<<nama_b<<endl;
      cout<<"Tujuan Bus : "<<tujuan<<endl;
      cout<<"Harga Tiket : Rp. "<<harga<<endl;
      cout<<"Jumlah Beli Tiket : ";cin>>jmlh_beli;
  
//bila pembelian lebih dari 3 tiket
        if(jmlh_beli>=3)
        {
            cout<<" Hadiah : JAM TANGAN GRATIS"<<endl;
        }
      total = harga * jmlh_beli;
      cout<<"===============================================\n"<<endl;
      cout<<"Total : Rp. "<<total<<endl;
      ppn=total*0.05;
      cout<<"PPN : Rp. "<<ppn<<endl;
      tobay=total-ppn;
      cout<<"Total Bayar : Rp. "<<tobay<<endl;
      cout<<"===============================================\n\n"<<endl;
      cout<<"Ingin Input Lagi ? [ Y / N ] : ";
      cin>>lagi;
    if(lagi=='y'||lagi=='Y')
    {
      system("cls");goto atas;
    }
    else
    {
      system("cls");cout<<"\n*** Terima Kasih Berkunjung Ke TERMINAL AURUM CHAN ***\n";
    }
}
