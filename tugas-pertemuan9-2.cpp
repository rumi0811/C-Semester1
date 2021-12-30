#include <iostream>
using namespace std;
int main()
{
string nama_barang[4];
int jml_penjualan[4][4];
for(int i=1; i<=3; i++)
{
cout<<"Data Ke - " << i << endl;
cout<<"Nama Barang : ";
cin>>nama_barang[i];
for(int j=1; j<=3; j++)
{
cout<<"Jumlah Penjualan : ";
cin>>jml_penjualan[i][j];
}
cout<<endl;
}
cout << endl<<endl;
cout << "HASIL PENJUALAN BARANG"<<endl;
cout << 
"========================================================================="<
<endl;
cout << "No\tNama Barang\t2001 \t2002 \t2003"<<endl;
cout << 
"========================================================================="<
<endl;
for(int i =1;i<=3;i++){
cout <<i<<"\t"<<nama_barang[i];
for(int j=1;j<=3;j++)
{
cout<<"\t"<<" "<< jml_penjualan[i][j];
}
cout<<endl;
}
return 0;
}
