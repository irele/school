#include<iostream>
using namespace std;
void maxint(int arr[],int eleman)
{
	static int maxindex, i;
	maxindex = arr[0];
	for (i = 0; i < eleman; i++)
	{
		if (maxindex < arr[i])
			maxindex = arr[i];
	}
	cout <<"entered max value" <<"   "<<maxindex << endl;
}
void minint(int arr[],int eleman) {
	static int minindex, i;
	minindex = arr[0];
	for (i = 0; i < eleman; i++)
	{
		if (minindex > arr[i])
			minindex = arr[i];
	}

	cout << "entered mini value" <<"   "<< minindex << endl;

}


int main() {
	int arr[100], i, eleman;
	cout << "Enter the number of elements of the array:" << endl;
    cin >> eleman;
	cout << "Enter the numbers" << endl;
	for (i = 0; i < eleman; i++)
	{
		cin >> arr[i];
	}
	maxint(arr, eleman);
	minint(arr, eleman);
	system("pause");
	return 0;

}