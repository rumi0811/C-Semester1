#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

//function
void garis()
{
    cout<<"===================================================================================================="<<endl;
}
diskonan(long int *c, long int *d)
{
    if(*c >= 100000)
        *d=*c*0.10;
    else if(*c <= 99999)
        *d=*c*0.05;
    else
        *d=0;
}

int main()
{

//structure
    struct
    {
        int pcs, harga;
        char jenpot[25], kode, pilih;
        float subtotal, total, ppn, grandtotal;
    }data[5];

    long int c, d, i, n, ubay, ukem;
    int total=0, ppn, grandtotal;
    char pilih;
    char strukpenjualan[90]={"No", "Jenis"

    atas:
    garis();
    cout<<"\t\t\t\tDaftar Harga Mouse Gaming"<<endl;
    garis();
    cout<<setiosflags(ios::left)<<setw(15)<<"\t\t\t\tKode";
    cout<<setiosflags(ios::left)<<setw(15)<<"Jenis";
    cout<<setiosflags(ios::left)<<setw(15)<<"Harga"<<endl;
    cout<<setiosflags(ios::left)<<setw(15)<<"\t\t\t\tLG";
    cout<<setiosflags(ios::left)<<setw(15)<<"Logitec";
    cout<<setiosflags(ios::left)<<setw(15)<<"Rp.50.000,-"<<endl;
    cout<<setiosflags(ios::left)<<setw(15)<<"\t\t\t\tMC";
    cout<<setiosflags(ios::left)<<setw(15)<<"Macro";
    cout<<setiosflags(ios::left)<<setw(15)<<"Rp.45.000,-"<<endl;
    cout<<setiosflags(ios::left)<<setw(15)<<"\t\t\t\tRX";
    cout<<setiosflags(ios::left)<<setw(15)<<"Rexus";
    cout<<setiosflags(ios::left)<<setw(15)<<"Rp.30.000,-"<<endl;
    garis();

    cout<<"\t\tInput Data"<<endl;
    cout<<"\t\tMasukkan Jumlah Data : ";cin>>n;

    //looping
    
    for(i=1; i<=n; i++)
    {
        cout<<"\t\tData Ke-"<<i<<endl;
        kembalikodenya:
        cout<<"\t\tMasukkan Kode    : ";cin>>data[i].kode;
            if(data[i].kode=='L'||data[i].kode=='l')
    {
        strcpy(data[i].jenpot, "Logitec");
        data[i].harga=50000;
    }
    else if(data[i].kode=='M'||data[i].kode=='m')
    {
        strcpy(data[i].jenpot, "Macro");
        data[i].harga=45000;
    }
    else if(data[i].kode=='R'||data[i].kode=='r')
    {
        strcpy(data[i].jenpot, "Rexus");
        data[i].harga=30000;
    }
    else
    {
        cout<<"\t\tMasukkan Kode Kembali"<<endl;
        goto kembalikodenya; //looping
    }

        cout<<"\t\tBanyak Pembelian : ";cin>>data[i].pcs;
        cout<<endl;
    }


garis();
cout<<"\t\t\t\tStruk Penjualan Mouse Gaming"<<endl;
garis();
cout<<setiosflags(ios::left)<<setw(15)<<"No";
cout<<setiosflags(ios::left)<<setw(15)<<"Jenis";
cout<<setiosflags(ios::left)<<setw(15)<<"Harga";
cout<<setiosflags(ios::left)<<setw(15)<<"Pcs";
cout<<setiosflags(ios::left)<<setw(15)<<"PPN";
cout<<setiosflags(ios::left)<<setw(15)<<"Sub Total";
cout<<endl;
garis();

//looping
for(i=1; i<=n; i++)
{
    cout<<setiosflags(ios::left)<<setw(15)<<i;
    cout<<setiosflags(ios::left)<<setw(15)<<data[i].jenpot;
    cout<<setiosflags(ios::left)<<setw(15)<<data[i].harga;
    cout<<setiosflags(ios::left)<<setw(15)<<data[i].pcs;
    data[i].ppn=data[i].harga*data[i].pcs*0.10;
    cout<<setiosflags(ios::left)<<setw(15)<<data[i].ppn;
    data[i].subtotal=data[i].harga*data[i].pcs+data[i].ppn;
    cout<<setiosflags(ios::left)<<setw(15)<<data[i].subtotal;
    cout<<endl;
    total=total+data[i].subtotal;
}
    garis();
    c=total;
    cout<<"\t\t\t\t\tTotal            : "<<total<<endl;
    diskonan(&c,&d);
    cout<<"\t\t\t\t\tDiskon           : "<<d<<endl;
    grandtotal=(c-d);
    cout<<"\t\t\t\t\tGrand Total      : "<<grandtotal<<endl;
    cout<<"\t\t\t\t\tUang Bayar       : ";cin>>ubay;
    ukem=(ubay-grandtotal);
    cout<<"\t\t\t\t\tUang Kembalian   : "<<ukem<<endl;

printf("\t Mau Coba Lagi ??");cin>>pilih;
if(pilih=='Y'||pilih=='y')
goto atas; //looping
else if (pilih=='T'||pilih=='t')


    return 0;
}
