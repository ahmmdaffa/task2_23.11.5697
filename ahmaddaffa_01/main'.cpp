//menghitung sisi miring
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float sisi_miring, alas, tinggi;
	cout << "program mencari sisi miring" << endl;
	cout << "..........................." << endl;

	
	cout << "tinggi segitiga tersebut :  "; cin >> tinggi;
	cout << "alas segitiga tersebut :  "; cin >> alas;

	sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

	cout << "................................." << endl;

	cout << "sisi miring: " << sisi_miring;
	cout << endl;

	system("pause");

	return 0;
} 