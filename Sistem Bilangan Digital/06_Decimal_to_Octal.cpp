#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  long decimal;
  int reminder;
  long octal = 0,i=1;
  cout << "Masukkan Bilangan Decimal : "; cin >> decimal;

  while (decimal != 0)
  {
    reminder = decimal % 8;
    octal = octal + (reminder * i);
    decimal = decimal / 8;
    i = i * 10;
  }
  cout << "Bilangan Octalnya adalah : " << octal;
  getch();
  return 0;
}

//@wardiman_xixv