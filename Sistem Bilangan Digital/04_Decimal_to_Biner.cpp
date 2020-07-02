#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
  int i = 0, j;
  int dNum;
  int bArr[20];
  cout << "Masukkan Angka Decimal (0-10) : "; cin >> dNum;

  if (dNum == 0) {
    cout << "Angka Binernya adalah : 0";
    getch(); exit(0);
  }
  while (dNum > 0){}
  {
    bArr[i] = dNum % 2;
    dNum = dNum / 2;
    i++;
  }
  cout << "Bilangan Binernya adalah";
  for (j=i-1; j>=0; i--)
  {
    cout << bArr[j];
  }
  return 0;
}

//@wardiman_xixv