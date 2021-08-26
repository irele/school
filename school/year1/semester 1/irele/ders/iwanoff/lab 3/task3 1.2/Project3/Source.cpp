#include<iostream>
using namespace std;

int mult(int x, int n){
	if (n == 0) return x;
	return (x+n) *mult(x,n  - 1);

}




int main()
{
	int x, n;
	int sum;
	cout << "enter x value" << endl;
	cin >> x;
	cout << "enter n value" << endl;
	cin >> n;
	sum = mult(x, n);
	cout << sum<< endl;
	system("pause");
	return 0;

}