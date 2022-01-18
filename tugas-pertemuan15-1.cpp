//Kelompok algoritma

//Sekar Puspita Arum        (Bagian Coding)
//Shafa Nanda Zasqia        (Bagian PPT)
//Lita Aftania Putri        (Bagian Study Kasus)
//Faradilla Galuh Pramesti  (Bagian Coding)
//Alka Kandia Risayida      (Bagian PPT)
//Agusttin Amalia Putri     (Bagian Study Kaus)

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
    cout<<"======================================================================================================================================="<<endl;
}

void pager()
{
    cout<<"#############################################################################################################"<<endl;
}
ppn(long int *p, long int *n)
{
    if(*p >= 100000)
        *n=*p*0.10;
    else if(*p <= 99999)
        *n=*p*0.05;
    else
        *p=0;
}
void tampilan()
{
    cout<<"\t\t\t\t\t\t\t RUMAH MAKAN MAMA DINDA"<<endl;
}

//class
class pembayaran
{
public:
    int ubay, ukem, tobay, tosem;
    char hadiah[50];
};


int main()
{
    pembayaran todalpem;
    //struct
    struct
    {
      char namapembeli[30], kodean_makanan[1], kodean_minuman[1], jenis_pilihan[20], kode2_makanan, kode2_minuman, nama_pilihan_makanan[30], nama_pilihan_minuman[15];
      int jubel_pilihan_makanan, jubel_pilihan_minuman, harga_pilihan_makanan, harga_pilihan_minuman;
      float subtotal, total;
    }kelompokan[5];


    //n=o
    long int p, n, i, o;
    int total=0;
    char pilih;
    char tampilanaja[4][4][100]={{"Nasi Goreng", "Mie Goreng", "Ketoprak", "Minuman"},
    {"Nasgor Biasa(NB)   Rp.13.000,-", "Migor Biasa(MB)   Rp.12.000,-", "Ketoprak Biasa(KB)  Rp. 12.000,-", "Teh Tawar(TT)      Rp. 2.000,-"},
    {"Nasgor Ampela(NA)  Rp.18.000,-", "Migor Ampela(MA)  Rp.17.000,-", "Ketoprak Dadar(KD)  Rp. 15.000,-", "Es Teh Manis(TM)   Rp. 3.000,-"},
    {"Nasgor Komplit(NK) Rp.21.000,-", "Migor Komplit(MK) Rp.20.000,-", "Ketoprak Ceplok(KC) Rp. 15.000,-", "Jeruk Hangat(JH)   Rp. 4.000,-"}};
atas:

    garis();
    tampilan();
    garis();

    //array
   cout<<tampilanaja[0][0]<<" "<<ends<<"\t\t\t "<<tampilanaja[0][1]<<" "<<ends<<"\t\t\t "<<tampilanaja[0][2]<<" "<<ends<<"\t\t\t\t "<<tampilanaja[0][3]<<" "<<"\t\t "<<ends<<endl;
   cout<<endl;
   cout<<tampilanaja[1][0]<<" "<<ends<<" "<<tampilanaja[1][1]<<" "<<ends<<" "<<tampilanaja[1][2]<<" "<<ends<<"\t "<<tampilanaja[1][3]<<" "<<"\t\t "<<ends<<endl;
   cout<<tampilanaja[2][0]<<" "<<ends<<" "<<tampilanaja[2][1]<<" "<<ends<<" "<<tampilanaja[2][2]<<" "<<ends<<"\t "<<tampilanaja[2][3]<<" "<<"\t\t "<<ends<<endl;
   cout<<tampilanaja[3][0]<<" "<<ends<<" "<<tampilanaja[3][1]<<" "<<ends<<" "<<tampilanaja[3][2]<<" "<<ends<<"\t "<<tampilanaja[3][3]<<" "<<"\t\t "<<ends<<endl;

   garis();

   cout<<"\t\t\tMasukkan Data : ";cin>>o;
   cout<<endl;

   //looping
   for(i=1; i<=o; i++)
   {
       cout<<"\t\t\tData Ke-"<<i<<endl;
       cout<<"\t\t\tNama Pelanggan    : ";cin>>kelompokan[i].namapembeli;
       kembali_kode_makanan:
       cout<<"\t\t\tPilihan Makanan   : ";cin>>kelompokan[i].kodean_makanan;
        if(strcmp(kelompokan[i].kodean_makanan, "NB")==0 || strcmp(kelompokan[i].kodean_makanan, "nb")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Nasi Goreng Biasa");
            kelompokan[i].harga_pilihan_makanan=13000;
        }
        else if(strcmp(kelompokan[i].kodean_makanan, "NA")==0 || strcmp(kelompokan[i].kodean_makanan, "na")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Nasi Goreng Ati Ampela");
            kelompokan[i].harga_pilihan_makanan=18000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "NK")==0 || strcmp(kelompokan[i].kodean_makanan, "nk")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Nasi Goreng Komplit");
            kelompokan[i].harga_pilihan_makanan=21000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "MB")==0 || strcmp(kelompokan[i].kodean_makanan, "mb")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Mie Goreng Biasa");
            kelompokan[i].harga_pilihan_makanan=13000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "MA")==0 || strcmp(kelompokan[i].kodean_makanan, "ma")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Mie Goreng Ati Ampela");
            kelompokan[i].harga_pilihan_makanan=18000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "MK")==0 || strcmp(kelompokan[i].kodean_makanan, "mk")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Mie Goreng Komplit");
            kelompokan[i].harga_pilihan_makanan=21000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "KB")==0 || strcmp(kelompokan[i].kodean_makanan, "kb")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Ketoprak Biasa");
            kelompokan[i].harga_pilihan_makanan=11000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "KD")==0 || strcmp(kelompokan[i].kodean_makanan, "kd")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Ketoprak Telur Dadar");
            kelompokan[i].harga_pilihan_makanan=14000;
        }
                else if(strcmp(kelompokan[i].kodean_makanan, "KC")==0 || strcmp(kelompokan[i].kodean_makanan, "kc")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_makanan, "Ketoprak Telur Ceplok");
            kelompokan[i].harga_pilihan_makanan=14000;
        }
        else
        {
            cout<<"\t\t\tKodenya salah, silahkan input ulang"<<endl;
            goto kembali_kode_makanan;
        }
       cout<<"\t\t\tJumlah Makanan    : ";cin>>kelompokan[i].jubel_pilihan_makanan;
       kembali_kode_minuman:
       cout<<"\t\t\tPilihan Minuman   : ";cin>>kelompokan[i].kodean_minuman;
        if(strcmp(kelompokan[i].kodean_minuman, "TT")==0 || strcmp(kelompokan[i].kodean_minuman, "tt")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_minuman, "Teh Tawar");
            kelompokan[i].harga_pilihan_minuman=2000;
        }
        else if(strcmp(kelompokan[i].kodean_minuman, "TM")==0 || strcmp(kelompokan[i].kodean_minuman, "tm")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_minuman, "Es Teh Manis");
            kelompokan[i].harga_pilihan_minuman=3000;
        }
        else if(strcmp(kelompokan[i].kodean_minuman, "JH")==0 || strcmp(kelompokan[i].kodean_minuman, "jh")==0)
        {
            strcpy(kelompokan[i].nama_pilihan_minuman, "Jeruk Hangat");
            kelompokan[i].harga_pilihan_minuman=4000;
        }
        else
        {
            cout<<"\t\t\tKodenya salah, silahkan input ulang"<<endl;
            goto kembali_kode_minuman;
        }
       cout<<"\t\t\tJumlah Minuman    : ";cin>>kelompokan[i].jubel_pilihan_minuman;
       cout<<endl;
   }

    garis();
    tampilan();
    garis();

cout<<setiosflags(ios::left)<<setw(10)<<"No";
cout<<setiosflags(ios::left)<<setw(15)<<"Nama Pembeli";
cout<<setiosflags(ios::left)<<setw(25)<<"Nama Makanan";
cout<<setiosflags(ios::left)<<setw(20)<<"Jumlah Makanan";
cout<<setiosflags(ios::left)<<setw(20)<<"Nama Minuman";
cout<<setiosflags(ios::left)<<setw(20)<<"Jumlah Minuman";
cout<<setiosflags(ios::left)<<setw(20)<<"Sub Total";
cout<<endl;
    garis();
for(i=1; i<=o; i++)
{
    cout<<endl;
    cout<<setiosflags(ios::left)<<setw(10)<<i;
    cout<<setiosflags(ios::left)<<setw(15)<<kelompokan[i].namapembeli;
    cout<<setiosflags(ios::left)<<setw(28)<<kelompokan[i].nama_pilihan_makanan;
    cout<<setiosflags(ios::left)<<setw(17)<<kelompokan[i].jubel_pilihan_makanan;
    cout<<setiosflags(ios::left)<<setw(23)<<kelompokan[i].nama_pilihan_minuman;
    cout<<setiosflags(ios::left)<<setw(20)<<kelompokan[i].jubel_pilihan_minuman;
    kelompokan[i].subtotal=(kelompokan[i].harga_pilihan_makanan*kelompokan[i].jubel_pilihan_makanan)+(kelompokan[i].harga_pilihan_minuman*kelompokan[i].jubel_pilihan_minuman);
    cout<<setiosflags(ios::left)<<setw(20)<<kelompokan[i].subtotal;
    cout<<endl;
    total=kelompokan[i].subtotal+total;
}
garis();
    p=total;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tTotal Bayar   :  "<<total<<endl;
    ppn(&p,&n);
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tPPN           :  "<<n<<endl;
    todalpem.tosem=(p+n);
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tTotal Semua   :  "<<todalpem.tosem<<endl;

    if(todalpem.tosem>=50000)
    {
        strcpy(todalpem.hadiah, "Tote Bag");
    }
    else
    {
       strcpy(todalpem.hadiah, "Tidak Ada");
    }
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tHadiah        :  "<<todalpem.hadiah<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tUang Bayar    :  ";cin>>todalpem.ubay;
    todalpem.ukem=todalpem.ubay-todalpem.tosem;
    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tUang Kembali  :  "<<todalpem.ukem<<endl;

    printf("\t\t\t\t\t\t\t\t\t\t\t\tBeli Lagi ??  : ");cin>>pilih;
if(pilih=='Y'||pilih=='y')
goto atas; //looping
else if (pilih=='T'||pilih=='t')


return 0;
}
