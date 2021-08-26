#include<iostream>
using namespace std;
double maxint(double arr[], double eleman)
{
	static double maxindex,i;
	maxindex = arr[0];
	for (int i = 0; i < eleman; i++)
	{
		if (maxindex < arr[i])
			maxindex = arr[i];
	}
	return maxindex;
}
double minint(double arr[], double eleman) {
	static double minindex, i;
	minindex = arr[0];
	for (int i = 0; i < eleman; i++)
	{
		if (minindex > arr[i])
			minindex = arr[i];
	}

	return minindex;

}


int main() {
	double arr[100], i, eleman,sum;
	cout << "Enter the number of elements of the array:" << endl;
	cin >> eleman;
	cout << "Enter the numbers" << endl;
	for (int i = 0; i < eleman; i++)
	{
		cin >> arr[i];
	}
	maxint(arr, eleman);
	minint(arr, eleman);
	sum = maxint(arr, eleman) + minint(arr, eleman);
	cout << "mini + max  ="<< sum<<endl;
	system("pause");
	return 0;

}