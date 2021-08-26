//
// Lab 6 - Task 2
//

#include <iostream>
#include <cmath>
#include "BisectionMethod.h"

using namespace std;

bool isInputCorrect(double valx, double valy, double step);

int main()
{
	double valueX;
	double valueY;
	double step;

	cout << "Input A value: ";
	cin >> valueX;

	cout << "Input B value: ";
	cin >> valueY;

	cout << "Enter step: ";
	cin >> step;

	if (isInputCorrect(valueX, valueY, step))
	{
		double result = findMinSecDer(valueX, valueY, step, getPower);
		cout << "Result: " << result << endl;
	}
	else
	{
		cout << "Incorrect input data!";
	}
	system("pause");
}

double getPower(double valx)
{
	return (pow(valx, 5));
}

bool isInputCorrect(double valx, double valy, double step)
{
	if (valx <= valy && step > 0)
	{
		return true;
	}
	else return false;
}

double firstDerivative(FuncType funcType, double x)
{
	double delta = 0.0000001;
	return (funcType(x + delta) - funcType(x - delta)) / (2 * delta);
}

double secondDerivative(FuncType funcType, double x)
{
	double delta = 0.0000001;
	return	(firstDerivative(funcType, x + delta) - firstDerivative(funcType, x - delta)) / (2 * delta);
}

double findMinSecDer(double x, double y, double step, FuncType funcType)
{
	double minimum = secondDerivative(funcType, x);

	for (int i = 0; i <= y; i += step)
	{
		if (minimum > secondDerivative(funcType, i))
		{
			minimum = secondDerivative(funcType, i);
		}
	}
	return minimum;
}