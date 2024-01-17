#include <iostream>
#include <stdio.h>
# define M_PI
#include <math.h>

using namespace std;
double x, y, a=1.65;
int main()
{
    cout << "Pi = " << M_PI << "\n";
    cout << "Введіть значення аргументу x: \n";
    cin >> x;
    if (x<1.4){
        if (x==0){
            cout << "Ділення на 0.\n";
        }
        else{
            y = pow(x, 2)*M_PI-(7/pow(x, 2));
        };
    }
    else
        if (x==1.4) {

        }
        else

    cout << "y=" << y;
    printf("Корінь з %f це %f", x, y);
    return 0;
}