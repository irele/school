#include <iostream>

using namespace std;

int sum(int x);

int f(int x);

int	f(int x, int y,int a);


int main()
{
	int x;
	int y;
	int a;
	cin >> x>>y>>a;
	cout << f(x) << endl;
	cout << f(x, y,a) << endl;
	cout << sum(x) << endl;
	return 0;
}

int f(int x)
{
	return x;
}

int f(int x, int y, int a)
{
	return x*y*a;
}
int sum(int x)
{
	return 1;
}
