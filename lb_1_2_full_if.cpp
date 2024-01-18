#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
double x, y, tax, amount;
int type;
int main()
{
    cout << "Enter the value of the argument x: ";
    cin >> x;
    cout << "Enter the type of work (possible options 1,2,3): ";
    cin >> type;
    if ((type < 1) || (type > 3))
    {
    }
    if (type == 1)
    {
        y = 100 * abs(cos(pow(x, 2) - 3.8) / (4.5 - 9.7 * sin(x - 3.1))) + 50;
        tax = (y / 100) * 10;
    }
    else if (type == 2)
    {
        y = 150 * abs(13.4 * sin(-1.26 * x) * cos(abs(x / 7.5))) + 100;
        tax = (y / 100) * 15;
    }
    else if (type == 3)
    {
        y = 100 * abs(2 * sin(abs(x)) * cos(2) * x - 11.6 * sin(x / 0.4 - 1)) + 135;
        tax = (y / 100) * 20;
    }
    else
    {
        cout << "The type of work is invalid.\n";
        system("pause");
        return 0;
    }

    amount = y - tax;

    printf("With x = %f, \nsumm = %f, \ntax = %f, \namount = %f.\n", x, y, tax, amount);
    system("pause");
    return 0;
}