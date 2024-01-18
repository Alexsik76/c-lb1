#include <iostream>
#include <stdio.h>
#define M_PI
#include <math.h>

using namespace std;
double x, y, a = 1.65;
int main()
{
    cout << "Enter the value of the argument x: ";
    cin >> x;
    if (x < 1.4)
    {
        if (x == 0)
        {
            cout << "Division by 0.\n";
            system("pause");
            return 0;
        }
        else
        {
            y = pow(x, 2) * M_PI - (7 / pow(x, 2));
        };
    }
    else if (x == 1.4)
    {
        y = a * pow(x, 3) + (8 / sqrt(x));
    }
    else
    {
        y = log(x + 9 * sqrt(abs(x + a)));
    }

    cout << "y = " << y << "\n";
    printf("With x = %f, a = %f \n     y = %f\n", x, a, y);
    system("pause");
    return 0;
}