#include<iostream>

using namespace std;

int f(int a)
{
	static int max, min;
	if (a >= max&&a > min)
	{
		max = a;
		return max;
	}
	else if (a < max&&a <= min)
	{
		min = a;
		return min;
	}
	else
		return a;
}

int main()
{
	int a, max, min;
	cin >> a;
	max = min = a;
	cout << "max = " << max << " \n" << "min = " << min << endl;
	for (;;)
	{
		cin >> a;
		f(a);
		if (a >= max)
			max = a;
		else if (a <= min)
			min = a;
		cout << "max = " << max << " \n" << "min = " << min << endl;
	}
}
