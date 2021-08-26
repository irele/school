#include<iostream>
#include<math.h>
using namespace std;
bool quad(double a,double b,double c,double& x1,double& x2) {
	double D;
	D = pow(b, 2) - 4*a*c;
	if (D > 0) {

		x1 = -b + sqrt(D) / 2 * a;
		x2 = -b - sqrt(D) / 2 * a;
		cout << "X1=" << x1 << endl << "x2=" << x2;
		return true;
	}
	else {

		cout << "there is no root " << endl;

		system("pause");
		return false;

	}



}
void main() {
	double a, b, c, x1, x2,D;
	cin >> a >> b >> c;
	
	if (quad(a, b, c, x1, x2))
	{
    
	}
	else {
	
	}
	system("pause");
}