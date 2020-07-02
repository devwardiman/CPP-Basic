#include <iostream>
using namespace std;

int main()
{
  long int decimalNumber, remainder, quotient;
  int i = 1, j, temp;
  char hexadecimalNumber[100];
  cout << "Masukkan Bilangan Decimal : "; cin >> decimalNumber;

  quotient = decimalNumber;
  while (quotient != 0)
  {
    temp = quotient % 16;
    if (temp < 10) {
      temp = temp + 48;
    }
    else {
      temp = temp + 55;
    }
    hexadecimalNumber[i++] = temp;
    quotient = quotient / 16;
  }
  cout << "Bilangan Hexadecimalnya adalah : ";
  for (j = i; j > 0; j--)
  {
    cout << hexadecimalNumber[j];
  }
  return 0;
}

//@wardiman_xixv