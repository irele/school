#include "Header.h"
#include <iostream>

using namespace std;


int main()
{
	double a, b, c;
	setlocale(LC_ALL, "Russian");
	cout << "a ";    cin >> a;
	cout << "b ";   cin >> b;
	cout << "c ";           cin >> c;
	if (a >= b)
	{
		cout << "Error a>=b" << endl;
		exit(0);
	}
	else if (c <= 0)
	{
		cout << "Error c <= 0" << endl;
		exit(0);
	}
	cout << "y' = " << soul(y, a, b, c) << endl;


	system("pause");
	return 0;
}
