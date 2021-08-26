#include <iostream>

using namespace std;

int main()
{
	int m, n,sum;
	cout << "enter the size of the array :" << endl;
	cin >> m >> n;
	int i,j;

	// 1	2	3
	// 4	5	6
	// 7	8	9
	// 12	14	18
	int **a = new int*[m];
	for (i = 0; i < m; i++)
	{
		a[i] = new int[n];
	}

	
	cout << "Enter elements of array :" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}

	}

	cout << endl;

	for (int j = 0; j < n; j++)
	{
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i][j];
		}
		cout << sum <<"    ";

	}

	
	
	system("pause");
	return 0;
}