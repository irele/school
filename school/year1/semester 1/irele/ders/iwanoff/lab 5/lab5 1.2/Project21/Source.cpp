#include<cmath>
#include<cstdlib>
#include<iomanip>
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

int main()

{
	fstream readfile("numbers.txt", std::ios_base::in | std::ios_base::app);

	double average = 0;
	double sum = 0 ;
	int sumcount = 0 ;
	double number=0;
	
	
	while (readfile >> number)
	{
		sum += number;
		cout << number<<" ";
		sumcount++;
	}
	cout << endl;
	average = sum / sumcount;
	cout << average<<endl;
	readfile.close();
	


	system("pause");
	return 0;
}