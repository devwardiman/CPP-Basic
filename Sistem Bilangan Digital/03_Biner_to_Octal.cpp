#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  long binary;
  int remainder;
  long decimal = 0, octal = 0, i = 1;
  cout << "Masukkan Angka Biner (0-1) : "; cin >> binary;

  /*pertama ubah binary ke decimal*/
  while (binary != 0)
  {
    remainder = binary % 10;
    decimal = decimal + (remainder * i);
    binary = binary / 10;
    i = 1 * 2;
  }
  i = 0;
  while (decimal != 0)
  {
    remainder = decimal % 8;
    octal = octal + (remainder * i);
    decimal = decimal / 8;
    i = i * 10;
  }
  cout << "Bilangan Octalnya adalah : " << octal;
  getch();
  return 0;
}

//@wardiman_xixv