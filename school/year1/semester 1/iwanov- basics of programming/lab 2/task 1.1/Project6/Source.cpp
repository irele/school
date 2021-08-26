#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double D, a, c, b, x1, x2;
	cout << "this program calculates the 2nd degree equations" << endl;
	m1: cout << endl << "Enter a value" << endl;
	cin >> a;
	cout << endl << "Enter c value" << endl;
	if (a == 0) {
		cout << "Invalid data" << endl;
		goto m1;
	}

	cin >> c;
	cout << endl << "Enter b value" << endl;
	cin >> b;
	D = pow(b, 2) - 4 * a*c;
	if (D >= 0)
	{
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << "result" <<endl<<"x1:"<< x1 << endl <<"x2:"<< x2<<endl;
	}
	else if (D == 0)
	{
		x1 = x2 = -b / 2 * a;
	}
	else
	{
		cout << "there isnt real roots" << endl;
	}

	system("pause");
	return 0;
}