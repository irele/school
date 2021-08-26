#include "stdafx.h"
#include <iostream>

using namespace std;


int f(int x, int n)
{
	if (n == 0)
		return 1;
	else
		return (x + n)*f(x, n - 1);
}

void main()
{
	int x, n;
	cin >> x >> n;
	cout << f(x, n) << endl;
	//system("PAUSE");
}
