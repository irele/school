#include<iostream>
using namespace std;

void part1(int& y,int n, int x)
{
	y = 1;
	int sum = 0, a;
	for (int i = 1; i <= n - 2; i++) {

		a = (i - x);
		sum += a;
	}
	cout << "y:" << sum << endl;

}
void part2(int y, int n, int x)
{
	y = 1;
		int sum1 = 0, mult = 1;
	for (int j = 1; j <= n - 1; j++) {
		mult *= j;
	}
	for (int i = 0; i <= n; i++) {
		int j = 1;
		sum1 += (pow(i, 2) + j);

	}
	y = sum1 * mult;
	cout << "y:" << y << endl;
	
}
int main () {
	int y,x, n;
	cout << "enter x value:" << endl;
	cin >> x;
	cout << "enter n value:" << endl;
	cin >> n;
	if (x >= 0)
	{
		part1(y, n, x);
	}
	else 
	{
	    part2(y,n,x);
	}

	system("pause");
	return 0;

}