#include<iostream>
#include<math.h>
using namespace std;

void main()
{
	int n;
	double  y ,a,b,step,x;
	double sum = 0, mult = 1, c = 0, sum1 = 0;
	cout << "Input n  ";
	while (!(cin >> n) || (cin.peek() != '\n'))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << "Error! You entered non numeric data" << endl << "Input n  ";

	}
	while (n <=2) {
		cout << "Invalide date : n must be > 2" << endl;
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

	for (x = a;x <= b;x+=step) {
	 
		if (x >= 0)
	{
		y = 0;
		for (int i = 1; i <= n - 2; i++) {

			
			sum += i-x;
			y = sum;

		}
		cout << "x: " << x << '\n' << "Your sum is: " << y << '\n';;
		
		
		cout << '\n';
		
	}
	else
	{
		y = 1;
		for (int j = 1; j <= n - 1; j++) {
			mult *= j;
		}
		for (int i = 0; i <= n; i++) {
			int j = 1;
			try
			{
				if (x - i == -j || (x == 0 && i == j))
				{
					throw 123;
				}

			}
			catch (int t)
			{
				cout << "Error " << i << " : Division by zero" << endl;
			}
			sum1 += (pow(i, 2) + j);

		}
		y = sum1 * mult;
		cout << "x: " << x << '\n';
		cout << "Your sum is: " << y << '\n';
		cout << '\n';
	}
		}
		

	
	

system("pause");

}
