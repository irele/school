#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()
{
	const unsigned int m = 3;
	const unsigned int n = 5;
	double min;


	int array[m][n] = { {1,-2,33,-10,11,},
					   {58,44,-8,26,-1},
					   {29,33,-4,-1,-2},
	};

	double *ptrarray = new double[n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (array[i][j] % 2 == 0)
				array[i][j] = (array[i][j] * array[i][j]);
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << array[i][j];
		cout << endl;
	}
	cout << endl;
	int k = 0;
	for (int j = 0; j < n; j++)
	{
		min = 1000000;
		for (int i = 0; i < m; i++)
		{
			if (array[i][j] < min)
				min = array[i][j];
		}
		ptrarray[k] = cbrt(min);
		k++;
	}
	for (int i = 0; i < k; i++)
	{
		cout << " " << ptrarray[i];
	}
	cout << endl;
	delete[] ptrarray;
	system("pause");
}