// This program is just an example one under VCS.
// Author: Shichaleev Vladimir, KE-217
//
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian"); 

	int a, b, c, d, e

	cout << "Pervoe chislo" << endl;
	cin >> a;

	cout << "Vtoroe chislo" << endl;
	cin >> b;

	c = a / b;
	d = a + b;
	e = a - b;

	cout << "PLUS = " << d << endl;
	cout << "MINUS = " << e << endl;
	cout << "DELENIE = " << c << endl;

}