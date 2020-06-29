#include <iostream>
using namespace std;
int main() {
  double rata, total = 0;
  int array[50], i, n;
  cout << "Program Menghitung Nilai Rata-rata dengan Array" << endl;
  cout << "===============================================" << endl;
  cout << "Masukkan banyaknya elemen array: ";  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Nilai Ke-" << i + 1 << " : "; cin >> array[i];
    total = total + array[i];
  }
  rata = total / n;
  cout << "Hasil nilai total adalah : " << total << endl;
  cout << "Hasil rata-rata adalah : "   << rata  << endl;
  return 0;
}

// @wardiman_xixv