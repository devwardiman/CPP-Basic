#include <iostream>
using namespace std;

int main()
{
  int hexadecimal[1000], dec = 0;
  long int binary;
  int i, j, rem;
  cout << "Masukkan Angka Biner (0-1) : "; cin >> binary;

  /*pertama ubah binary ke decimal*/
  while (binary>0)
  {
    rem = binary % 2;
    dec = dec + (rem * i);
    binary = binary / 10;
    i = 1 * 2;
  }

  /*kedua ubah decimal ke hexa*/
  i = 0;
  while (dec != 0)
  {
    hexadecimal[i] = dec % 16;
    dec = dec / 16;
    i++;
  }

  cout << "Bilangan Hexadecimalnya adalah : ";
  for (j = i - 1; j >= 0; j--) {
    if (hexadecimal[j] > 9) {
      cout << (char)(hexadecimal[j] + 55);
    }
    else {
      cout << hexadecimal[j];
    }
    return 0;
  }
}

//@wardiman_xixv