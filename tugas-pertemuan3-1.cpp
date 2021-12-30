#include <iostream>
using namespace std;
int main()
{
  int jari;
  float keliling, luas, isi, phi=3.14;
    
    //menghitung keliling bola
    cout << "Masukkan Jari-jari = "; cin >> jari;
    keliling=(2*phi*jari);
    cout << "Nilai Keliling Bola = " << keliling << endl;
    cout << endl;
  
    //menghitung luas permukaan bola
    cout << "Masukkan Jari-jari = "; cin >> jari;
    luas=(4/3*phi*jari*jari*jari);
    cout << "Nilai Luas Permukaan Bola = " << luas << endl;
    cout << endl;
  
    //menghitung isi bola
    cout << "Masukkan Jari-jari = "; cin >> jari;
    isi=(4*phi*jari*jari);
    cout << "Nilai Isi Bola = " << isi << endl;
    cout << endl;
  
 return 0;
}
