#include<iostream>
#include<cmath>
#include"func.h"

using namespace std;

void calculateBisection(double a, double b)
{
	if (f(a) * f(b) >= 0)
	{
		cout << "ERORORORORORO 404";
		return;
	}

	double c = a;
	while ((b - a) >= 0.01)
	{
		c = (a + b) / 2;

		if (f(c) == 0.0) break;
		else if (f(c) * f(a) < 0)
		{
			cout << "Root value: " << c << endl;
			b = c;
		}
		else
		{
			cout << "Root value: " << c << endl;
			a = c;
		}
		
	}
	
}

void main()
{
	double a, b;

	while (true)
	{
		cout << "Input X1: ";
		cin >> a;
		cout << "Input X2: ";
		cin >> b;

		calculateBisection(a, b);

		cout << "==============================================" << endl;
	}

	system("pause");
}