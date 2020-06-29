#include <iostream>
using namespace std;
int main() {
  int matriks1[5][5], matriks2[5][5], hasil[5][5];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: "; cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: "; cin >> n;
  cout << "Masukkan jumlah baris matriks kedua: "  ; cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: "  ; cin >> q;
  
  if (n != p) {
    cout << "Matriks tidak dapat dikalikan satu sama lain." << endl;
  }
  else {
    cout << "Masukkan elemen matriks pertama: " << endl;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: " << endl;
    for (i = 0; i < p; i++) {
      for (j = 0; j < q; j++) {
        cin >> matriks2[i][j];
      }
    }
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: " << endl;
    for (i = 0; i < m; i++) {
      for (j = 0; j < n; j++) {
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }

  return 0;
}

// @wardiman_xixv