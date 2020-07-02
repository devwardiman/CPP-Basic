#include <iostream>
#include <conio.h>
using namespace std;

long bin2dec(char binaryString[]);
int main()
{
  char bstr[20];
  long decNum;
  cout << "Masukkan Angka Biner (0-1) : "; cin >> bstr;

  decNum = bin2dec(bstr);
  if (decNum == -1) {
    cout << "Masukkan biner tidak benar";
  }
  else {
    cout << "Bilangan decimalnya adalah : " << decNum;
  }
  return 0;
}

long bin2dec(char binaryString[])
{
  long dnum = 0;
  int i = 0;
  int n;
  while (binaryString[i] != '\0') {
    n = binaryString[i] - 48;
    if (n!= 0 && n!= 1) {
      return -1;
    }
    dnum = (dnum * 2) + n;
    i++;
  }
  return (dnum);
}

//@wardiman_xixv