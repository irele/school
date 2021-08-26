#include<iostream>

using namespace std;

int f(int a,int max,int min)
{
	if (a >= max)
		max = a;
	return a;
	if (a <= min)
		min = a;
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
		f(a,max,min);
		cout << "max = " << max << " \n" << "min = " << min << endl;
	}
}
