#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
	char hex[17];
	long int decimal = 0;
	int i = 0, val, len, octal = 0,reminder;
	cout << "Masukkan Bilangan Hexadecimal : "; cin >> hex;
	len = strlen(hex);
	len--;
	/*Pertama ubah hexa ke decimal*/
	for (i = 0; hex[i] != '\0'; i++)
	{
		switch (hex[i])
		{
		case '0': val = 0; break;
		case '1': val = 1; break;
		case '2': val = 2; break;
		case '3': val = 3; break;
		case '4': val = 4; break;
		case '5': val = 5; break;
		case '6': val = 6; break;
		case '7': val = 7; break;
		case '8': val = 8; break;
		case '9': val = 9; break;

		case 'A':
		case 'a': val = 10; break;

		case 'B':
		case 'b': val = 11; break;

		case 'C':
		case 'c': val = 12; break;

		case 'D':
		case 'd': val = 13; break;

		case 'E':
		case 'e': val = 14; break;

		case 'F':
		case 'f': val = 15; break;
		}
		decimal += val * pow(16, len);
		len--;
	}
	/*kedia ubah decimal ke octal*/
	i = 1;
	while (decimal != 0)
	{
		reminder = decimal % 8;
		octal = octal + (reminder * i);
		decimal = decimal / 8;
		i = i * 10;
	}
	cout << "Bilangan Octalnya adalah : " << octal;
	return 0;
}