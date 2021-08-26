#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
struct list
{
	int data;
	list *next;

};

void out(int **mas, int n, int m, int *mas_mas);
int **readfile(int &counter, int n, int &m);
int f(int counter, double n);

void main()
{
	int m = 0;
	const int n = 4;
	int counter = 0;
	int **mas = readfile(counter, n, m);
	int *mas_mas = new int[m];
	out(mas, n, m, mas_mas);
	delete[]mas_mas;
	for (int i = 0; i < m; i++)
		delete[]mas[i];
	delete[]mas;
}

int f(int counter, double n)
{
	double a = counter / n;
	int b = a;
	if (a - b == 0)
		return b;
	return ++b;

}

int **readfile(int &counter, int n, int &m)
{
	list *first = 0;
	list *buffer = 0;
	ifstream read("fail.txt");
	list *last;
	int a;
	while (read >> a)
	{
		counter++;
		last = new list;
		last->data = a;
		last->next = 0;
		if (buffer == 0)
			first = buffer = last;
		else
			buffer->next = last;
		buffer = last;
	}
	buffer = first;
	m = f(counter, n);
	int **mas = new int *[m];
	for (int i = 0; i < m; i++)
		mas[i] = new int[n];
	for (int i = 0, k = 0; i < m; i++)
		for (int j = 0; j < n; j++, k++)
		{
			if (k < counter)
			{
				mas[i][j] = buffer->data;
				buffer = buffer->next;
			}
			else
				mas[i][j] = 0;
		}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (mas[i][j] > 0)
				mas[i][j] = log(mas[i][j]);
	for (int i = 0; i < counter; i++)
	{
		buffer = first;
		first = first->next;
		delete buffer;

	}
	return mas;
}

void out(int **mas, int n, int m, int *mas_mas)
{
	ofstream put("results.txt");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			put << mas[i][j] << "\t";
		put << endl;
	}
	put << endl << endl << endl;
	for (int i = 0; i < m; i++)
	{
		mas_mas[i] = 0;
		for (int j = 0; j < n; j++)
			if (mas[i][j] < 0)
			{
				mas_mas[i] = 1;
				mas_mas[i] *= mas[i][j];
			}
	}
	for (int i = 0; i < m; i++)
		put << mas_mas[i] << "\t";

}


