#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{

char lagi, nama_pelanggan[50], kodelayanan, jenislayanan[20], kembali, balik;
int hargalayanan, jumlahlayanan, total_bayar;

atas:

    cout<<"\t SALON KECANTIKAN ";
cout<<"\n============================================";
    cout<<endl;
    cout<<"Nama Pelanggan : ";cin>>nama_pelanggan;
    cout<<"kodelayanan : ";cin>>kodelayanan;
    if(kodelayanan=='C'||kodelayanan=='c')
    {
        strcpy(jenislayanan, "Creambath");
        hargalayanan=80000;
    }
    else if(kodelayanan=='G'||kodelayanan=='g')
    {
        strcpy(jenislayanan, "Gunting");
        hargalayanan=55000;
    }
    else if(kodelayanan=='L'||kodelayanan=='l')
    {
        strcpy(jenislayanan, "Lulur");
        hargalayanan=100000;
    }
    cout<<"Jumlah Layanan : ";cin>>jumlahlayanan;
    cout<<"\t SALON KECANTIKAN ";
cout<<"\n============================================";
    cout<<endl;

    cout<<"Nama Pelanggan:"<<nama_pelanggan<<endl;
    cout<<"Layanan       : "<<jenislayanan<<endl;
    cout<<"Harga        : "<<hargalayanan<<endl;
    total_bayar=hargalayanan*jumlahlayanan;
    cout<<"Total bayar   : "<<total_bayar<<endl;



    bawah://label
        cout<<"Input Data Lagi Nggak?[Y/T] : ";kembali=getch();
        if(balik=='Y'||balik=='y')
        {
            goto atas;
        }
        else if(kembali=='T'||kembali=='t')
        {
            system("cls");
        }
        cout<<"Tekan Enter 2x Untuk Keluar";getch();
}

