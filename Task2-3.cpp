#include <iostream>
#include <math.h>
using namespace std;
double summ(double eps)
{
	int i = 0;
	double summ = 0;
	do
	{
		summ += pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
		i++;
	} while (abs(summ) > eps);
	return summ;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ(eps);
}	