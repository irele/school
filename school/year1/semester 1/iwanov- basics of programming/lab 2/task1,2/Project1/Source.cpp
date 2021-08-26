#include<iostream>
using namespace std;

int  main() {
	int x, n, y = 1;
	int i;
	cout << "Input x";
	cin >> x;
	cout << "Input n";
	cin >> n;
	for (i = 1; i <= 2 * n; i++) {
		if (i != 2 * n) {
			if (i % 2 == 0) {
				y *= x - i;
			}
			else {
				y *= x + i;
			}
		}
	}
	cout << "Result : " << y << endl;

	system("pause");

	return 0;


}