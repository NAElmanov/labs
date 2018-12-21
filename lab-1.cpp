#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() 
{
	int z1, z2, k;
	cin >> k;
	z1 = (1 - 2 * pow(sin(k),2)) / (1 + sin(2*k));
	z2 = (1 - tan(k)) / (1 + tan(k));
	if (z1 < z2) cout << "z1 < z2";
	if (z1 > z2) cout << "z1 > z2";
	if (z1 == z2) cout << "z1 = z2";
	return 0;
}