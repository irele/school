#include<iostream>
using namespace std;
int main() 
{
	int arr[2][2] = { 2, 3, -4, -5 };
	int sum = 0;
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[i][j] > 0)
			{
				sum += arr[i][j];
			}
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}