#include "pch.h"
#include <iostream>

using namespace std;
int main() 
{
	int A[30], t, p, a=0, b=1, j=0, u, r=1;
	for (int i = 0; i < 30; i++)
	{
		A[i] = rand() % 5 ;
	}
	cout << "Mas1:" << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << A[i] << endl;
	}
	t = 0; 
	p = 0;
	for (int i = 0; i < 30; i++)
	{
		if (A[i] > t)
		{
			t = A[i];
			p = i;
		}
	}
	cout << "MAX:" << p << endl;
	for (int i = 0; i < 30; i++)
	{
		if ((A[i] == 0) and (j==0))
		{
			j = i;
		}
		if ((A[i] == 0) and (i != j))
		{
			u = i;
			break;
		}
	}
	for (int i = j+1; i < u; i++)
	{
		r =r * A[i];
	}
	cout << "Mult:" << r << endl;

	int B[15], C[15], s=0, z=0;
	for (int i = 0; i < 30; i++)
	{
		if (i % 2 == 0)
		{
			B[s] = A[i];
			s++;
		}
		if (i % 2 != 0)
		{
			C[z] = A[i];
			z++;
		}
	}
	for (int i = 0; i < 14; i++)
	{
		A[i] = B[i];
	}
	for (int i = 14; i < 30; i++)
	{
		A[i] = C[i];
	}
	cout << "Mass2:" << endl;
	for (int i = 0; i < 30; i++)
	{
		cout << A[i] << endl;
	
	}
	
	return 0;

}