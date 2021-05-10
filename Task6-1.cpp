#include <iostream>
#include <math.h>
using namespace std;
void task1();
void task2();
void task3();
void task4();
void task5();
int main()
{
    int number;
    while (true)
    {
        system("cls");
        cout << "For" << endl
            << "1 - Task1 " << endl
            << "2 - Task2" << endl
            << "3 - Task3" << endl
            << "4 - Task4" << endl
            << "5 - Task5" << endl
            << "6 - Exit" << endl
            << "Number: ";
        cin >> number;
        system("cls");
        switch (number)
        {
        case 1:
        {
            task1();
            cout << endl;
            system("pause");
            break;
        }
        case 2:
        {
            task2();
            cout << endl;
            system("pause");
            break;
        }
        case 3:
        {
            system("cls");
            task3();
            cout << endl;
            system("pause");
            break;
        }
        case 4:
        {
            task4();
            cout << endl;
            system("pause");
            break;
        }
        case 5:
        {
            task5();
            cout << endl;
            system("pause");
            break;
        }
        case 6:
        {
            return true;
        }
        }
    }
}
