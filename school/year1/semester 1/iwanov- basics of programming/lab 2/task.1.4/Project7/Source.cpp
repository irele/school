#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	double eps, y = 0;
	cout << "Input eps   ";
	cin >> eps;
	if (eps <= 0.5)
	{
		int i = 1;
		while (1 / pow(2,i) > eps)
		{
			y += 1 / pow(2,i);
			i++;
		}
	cout << "y = " << y << endl;
	
	}
	else 
	{
		cout << "incorrect input" << endl;
	}
	
	system("pause");
}