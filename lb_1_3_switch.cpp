#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int group_code, current_number;
    cout << "Enter the goup code (I know groups from 31 to 35): ";
    cin >> group_code;

    switch (group_code)
    {
    case 31:
        current_number = 20;
        break;
    case 32:
        current_number = 23;
        break;
    case 33:
        current_number = 24;
        break;
    case 34:
        current_number = 28;
        break;
    case 35:
        current_number = 18;
        break;
    default:{
        printf("There is no group with code %i.\n", group_code);
        system("pause");
        return 0;
    }
    }

    printf("Full name of the group: ZPI-zp-%i. \nThe number of the students in this group is %i.\n",
           group_code, current_number);
    system("pause");
    return 0;
}