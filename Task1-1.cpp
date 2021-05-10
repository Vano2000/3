#include <iostream>
#include <math.h>
using namespace std;
double summ(int count)
{
	double summ = 0;
	for (int i = 0; i <= count; i++)
	{
		summ += pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
	}
	return summ;
}
void main()
{
	int count;
	cout << "Enter count = ";
	cin >> count;
	cout << "Function summ = " << summ(count);
}