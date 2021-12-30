#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
  //membuat angka 15 22 31 42 55
  int i, n, x;
  n=10;
  x=5;
  
  for(i=1; i<=5; i=i+1)
  {
    n=n+x;
    x=x+2;
    printf("\n%i", n);
  }
