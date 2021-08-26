#include<iostream>
using namespace std;
//PROGRAMME FOR FIND Y (7 VARIANT)
void main() {
	double y, a, b, step, f;
	int i, j, k, n;
	cout << "Input n  ";
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! You entered non numeric data" << endl << "Input n  ";

	}
	while (n <= 0) {
		cout << "Invalide date : n must be > 0" << endl;
		cin >> n;
	}
	cout << "Input point a  ";
	while (!(cin >> a) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! You entered non numeric data" << endl << "Input a  ";
	}
	cout << "Input point b  ";
	while (!(cin >> b) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! You entered non numeric data" << endl << "Input b  ";
	}
	while (a >= b)
	{
		cout << "Error!Value a can not be greater than value b" << endl << "Input point b   ";
		cin >> b;
	}
	cout << "Input step  ";
	while (!(cin >> step) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! You entered non numeric data" << endl << "Input step  ";
	}
	while (step <= 0)
	{
		cout << "Error! Step can`t be negative" << endl << "Input step   ";
		cin >> step;
	}

	k = n - 1;
	for (f = a; f <= b; f += step) {
		if (f > 0)
		{
			y = 1;
			for (i = 1; i <= n; i++)
			{
				y *= (1 / f) - (1 / i);
			}
		}
		else
		{
			y = 0;
			for (i = 1; i <= k; i++)
			{

				for (j = 1; j <= k; j++)
				{
					try
					{
						if (f - i == -j || (f == 0 && i == j))
						{
							throw 123;
						}

					}
					catch (int t)
					{
						cout << "Error " << i << " : Division by zero" << endl;
					}
					y += 1 / (f - i + j);
				}
			}

		}
		cout << "The answer : y = " << y << endl;
	}
	system("pause");
}
