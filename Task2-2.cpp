#include <iostream>
#include <math.h>
using namespace std;
double summ(double eps)
{
	int i = 0;
	double summ = pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
	while (abs(summ) > eps)
	{
		i++;
		summ += pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
	}
	return summ;
}
void main()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ(eps);
}