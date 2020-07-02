#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long octalNumber, decimalNumber = 0;
	int reminder, i = 1;
	cout << "Masukkan Bilangan Octal : "; cin >> octalNumber;
	while (octalNumber!=0)
	{
		reminder = octalNumber % 10;
		decimalNumber += reminder * i;
		octalNumber /= 10;
		i = i * 8;
	}
	cout << "Bilangan Decimalnya adalah : " << octalNumber;
	return 0;
}