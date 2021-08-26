#include <iostream>

using namespace std;
double z(double a, double b, double c, double &x1, double &x2);

int main()
{
	double a, b, c;
	cout << "Input a ,b ,c" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	double x1 = 0;
	double x2 = 0;
	if (z(a, b, c, x1, x2) == -1)
	{
		cout << "No roots" << endl;
	}
	else if (z(a, b, c, x1, x2) == 1)
	{
		cout << "x1=" << x1;
	}
	else {
		cout << "x1=" << x1 << "\n" << "x2=" << x2 << endl;
	}
	return 0;
}

double z(double a, double b, double c, double &x1, double &x2)
{
	double D;
	D = (b*b) - (4 * a*c);
	D = sqrt(D);
	if (D < 0)
		return -1;
	else if (D == 0)
	{
		x1 = -b / 2 * a;
		return 1;
	}
	else
	{

		x1 = (-b - D) / (2 * a);
		x2 = (-b + D) / (2 * a);

		return 2;
	}
}
