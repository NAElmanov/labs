#include "pch.h"
#include <iostream>

using namespace std;
int main() 
{
	int A[30], t, p, a=0, b=1;
	for (int i = 0; i < 30; i++)
	{
		A[i] = rand() % 5 ;
	}
	t = A[0];
	p = 0;
	for (int i = 0; i < 30; i++)
	{
		cout << A[i] << endl;
	}
	for (int i = 0; i < 30; i++)
	{

		if (A[i] > t) 
		{
			p = i;// номер максимального элемента массива
			t = A[i]; 
		}
	}
	for (int i = 2; i < 30; i++)
	{
		if (A[i] == 0)
		{
			a = 1;

		}
		if (a == 1 and A[i] != 0)
		{
			b = b * A[i];
			a = 3;
		}
		if (a == 3  and A[i] == 0) a = 2;
		if (a == 2) break;
	}
	cout << "Max" << p << endl;
	cout << "Mult" << b;
	return 0;

}