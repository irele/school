#include<iostream>
using namespace std;
int sum(int a, int b, int c,int g=10) {

	return a + b + c + g;

}



int main() {
	cout << sum(10, 15,25) << endl;
	cout << sum(10, 15, 25) << endl;
	cout << sum(10, 15, 25, 30) << endl;
	
	system("pause");
	return 0;
}