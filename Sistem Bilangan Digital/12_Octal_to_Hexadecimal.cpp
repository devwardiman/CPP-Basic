#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
int main()
{
	char hex[20], c; int octalNumber, i = 0,decimal = 0, rem;
	cout << "Masukkan Bilangan Octal : "; cin >> octalNumber;
	/*Pertama ubah octal ke Decimal*/
	while (octalNumber != 0)
	{
		rem = octalNumber % 10;
		octalNumber /= 10;
		decimal = decimal + rem * pow(8, i);
		++i;
	}
	/*Kedua ubah Decimal ke Hexa*/
	i = 0;
	while (decimal != 0)
	{
		rem = decimal % 16;
		switch (rem)
		{
		case 10: hex[i] = 'A'; break;
		case 11: hex[i] = 'B'; break;
		case 12: hex[i] = 'C'; break;
		case 13: hex[i] = 'D'; break;
		case 14: hex[i] = 'E'; break;
		case 15: hex[i] = 'F'; break;
		default: hex[i] = rem + '0'; break;
		}
		++i;
		decimal /= 16;
	}
	hex[i] = '\0';
	/*Balik nilai Hexa*/
	strrev(hex);

	cout << "Bilangan Hexadecimalnya adalah : " << hex;
	return 0;
}