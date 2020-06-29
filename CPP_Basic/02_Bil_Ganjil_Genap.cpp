#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "Masukkan sebuah bilangan : "; cin >> a;
  if (a % 2 == 0) {
    cout << "Bilangan " << a << " adalah genap." << endl;
  }
  else {
    cout << "Bilangan " << a << " adalah ganjil." << endl;
  }
  return 0;
}
//@wardiman_xixv