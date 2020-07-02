#include <iostream>
using namespace std;
#define MAX 1000
int main()
{
	char octalNumer[MAX];
	long int i = 0;
	cout << "Masukkan Bilangan Octal : "; cin >> octalNumer;
	cout << "Bilangan Binernya adalah : ";
	while (octalNumer[i])
	{
		switch (octalNumer[i])
		{
		case '0': cout << "000"; break;
		case '1': cout << "001"; break;
		case '2': cout << "010"; break;
		case '3': cout << "011"; break;
		case '4': cout << "100"; break;
		case '5': cout << "101"; break;
		case '6': cout << "110"; break;
		case '7': cout << "111"; break;
		default:
			cout << "Angka Octal tidak benar" << octalNumer[i];
			return 0;
			break;
		}
		i++;
	}	
	return 0;
}