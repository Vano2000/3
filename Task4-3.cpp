﻿#include <iostream>
#include <math.h>
using namespace std;
int findFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	do
	{
		count = pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
		i++;
		if (abs(count) < eps)
		{
			break;
		}
	} while (true);
	return i;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstElement(eps);
}