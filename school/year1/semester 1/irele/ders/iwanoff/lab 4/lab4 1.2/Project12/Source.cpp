#include <iostream>
using namespace std;

void sortNumbers(int dizi[])
{
	int temp;
	for (int a = 0; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			if (dizi[b] > dizi[b + 1])
			{
				temp = dizi[b];
				dizi[b] = dizi[b + 1];
				dizi[b + 1] = temp;
			}
		}
	}
}

int main()
{
	int dizi[10], temp;
	for (int i = 0; i <= 9; i++)
	{
		cout << "enter value=";
		cin >> dizi[i];
	}

	sortNumbers(dizi);
	
	for (int d = 0; d <= 10; d++) 
	{
		cout << dizi[d] << endl;
	}
	system("pause");
	return 0;
}