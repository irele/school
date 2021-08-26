#include "Header.h"

const double delta = 0.0000001;

double y(double x)
{
	int n = 5;
	double y = 1;
	double z = 1;
	if (x < 0)
	{
		for (int i = 1; i < n; i++)
		{
			for (int j = 1; j < n; j++)
				y += 1 / (x - i - j);
		}
	}
	else
	{
		for (int i = 1; i < n; i++)
			z *= (x - i);
		y += z;
	}
	return y;

}

double firstDer(F f, double x, double dx)
{
	return (f(x + dx) - f(x)) / dx;
}




double soul(F f, double a, double b, double c)
{
	double max = 0;
	max = firstDer(f, a, delta);
	for (double i = a; i < b; i += c)
	{
		double y = firstDer(f, i, delta);
		if (max < y)
			max = y;
	}
	return max;
}