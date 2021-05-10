#include <iostream>
#include <math.h>
using namespace std;
double summ(int count)
{
	double summ = 0;
	int i = 0;
	while (i <= count)
	{
		summ += pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
		i++;
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