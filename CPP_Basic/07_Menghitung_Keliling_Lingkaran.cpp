#include <iostream>
using namespace std;
int main() {
  float k, r;
  const float phi = 3.14;
  cout << "Program Menghitung Keliling Lingkaran\n";
  cout << "=====================================\n";
  cout << "Masukkan panjang jari-jari lingkaran: " ; cin >> r;
  k = 2 * phi * r;
  cout << "Keliling Lingkaran adalah " << k << endl;
  return 0;
}

// @wardiman_xixv