#include <iostream>
#include <math.h>
using namespace std;
double summ1(int count)
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
void task1()
{
	int count;
	cout << "Enter count = ";
	cin >> count;
	cout << "Function summ = " << summ1(count);
}
double summ2(double eps)
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
void task2()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Function summ = " << summ2(eps);
}
void print(int n, int k)
{
	double count = 0;
	int i = 0;
	while (i < n)
	{
		count = pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));;
		if ((i + 1) % k == 0)
		{
			i++;
			continue;
		}
		else
		{
			cout << count << " ";
		}
		i++;
	}
}
void task3()
{
	int n, k = 0;
	cout << "Enter n = ";
	cin >> n;
	cout << "Enter k = ";
	cin >> k;
	print(n, k);
}
int findFirstElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
		i++;
		if (abs(count) < eps)
		{
			break;
		}
	}
	return i;
}
void task4()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstElement(eps);
}
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double count = 0;
	while (true)
	{
		count = pow(-1, i) * 2 * (i + 1) / (2 + (i + 1) * (i - 1));
		i++;
		if (abs(count) < eps && count < 0)
		{
			return i;
		}
	}
}
void task5()
{
	double eps;
	cout << "Enter eps = ";
	cin >> eps;
	cout << "Number = " << findFirstNegativeElement(eps);
}
