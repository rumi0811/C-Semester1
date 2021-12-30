#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main()
{
    int x, hargasatu, level, hargalevel, jumbel, subtotal, diskon, totbay, uabay, ukem;
    char menu[100], kodepaket, atas, bawah, balik;

    atas://label
        system("cls");

    cout<<"AYAM GEPREK MEMBAHANA RAINY"<<endl;
    cout<<"==========================="<<endl;
    cout<<"PILIHAN PAKET [A/B/C] : ";cin>>kodepaket;
    if(kodepaket=='A'||kodepaket=='a')
    {
        strcpy(menu, "Ayam Geprek + Mozarella");
        hargasatu=29000;
    }
    else if(kodepaket=='B'||kodepaket=='b')
    {
        strcpy(menu, "Ayam Geprek + Sambal Matah");
        hargasatu=25000;
    }
    else if(kodepaket=='C'||kodepaket=='c')
    {
        strcpy(menu, "Ayam Geprek + Sambal Terasi");
        hargasatu=49000;
    }
    cout<<"Menu : "<<endl;
    cout<<"1. Level 1"<<endl;
    cout<<"2. Level 2"<<endl;
    cout<<"3. Level 3"<<endl;
    cout<<"4. Level 4"<<endl;
    cout<<"5. Level 5"<<endl;
    cout<<"Pilih Level [1/2/3/4/5] : ";cin>>level;
    if(level==1)
    {
        hargalevel=1000;
    }
    else if(level==2)
    {
        hargalevel=2000;
    }
    else if(level==3)
    {
        hargalevel=3000;
    }
    else if(level==4)
    {
        hargalevel=4000;
    }
    else if(level==5)
    {
        hargalevel=5000;
    }
    cout<<"============================"<<endl;

    cout<<"Menu         : "<<menu<<endl;
    cout<<"Harga        : "<<hargasatu<<endl;
    cout<<"Tambah Level : "<<hargalevel<<endl;
    cout<<"Jumlah Beli  : ";cin>>jumbel;
    subtotal=hargasatu*jumbel+hargalevel*jumbel;
    cout<<"Sub Total    : "<<subtotal<<endl;
    if(jumbel>=6)
    {
        diskon=0.06*hargasatu;
    }
    else if(jumbel>=3)
    {
        diskon=0.02*hargasatu;
    }
    else if(jumbel<=2)
    {
        diskon=0;
    }
    cout<<"Diskon       : " <<diskon<<endl;
    totbay=subtotal-diskon;
    cout<<"Total Bayar  : " <<totbay<<endl;
    cout<<"Uang Bayar   : " ;cin>>uabay;
    ukem=uabay-totbay;
    cout<<"Uang Kembali : "<<ukem<<endl;

    bawah://label
        cout<<"Input Data Lagi Nggak?[Y/T] : ";balik=getche();
        if(balik=='Y'||balik=='y')
        {
            goto atas;
        }
        else if(balik=='T'||balik=='t')
        {
            system("cls");
        }
        cout<<"Tekan Enter 2x Untuk Keluar";getch();

}
