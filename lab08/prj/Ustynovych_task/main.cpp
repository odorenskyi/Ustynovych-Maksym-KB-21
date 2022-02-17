#include <iostream>
#include "ModulesUstynovych.h"

using namespace std;

void Inequality(int a, int b)
{
    if (a+1 >= b+2)
        cout << "a+1 >= b+2 is true" << endl;
    else
        cout << "a+1 >= b+2 is false" << endl;
}

double ChangeValue (int number)
{
   int i = 1, j = 0;
    while (number)
    {
        j += number%16*i;
        number/=16;
        i*=10;
    }
    return j;
}

void ShowChangedValue(int changed)
{
    cout << changed << " in 10 number system: "  << changed << endl;
    cout << changed << " in 16 number system: 0" << ChangeValue(changed) << endl;
}

int main()
{
    copyright();

    int x = 0;
    int y = 0;
    int z = 0;
    int a = 0;
    int b = 0;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "Enter z: ";
    cin >> z;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    Inequality(a, b);
    ShowChangedValue(x);
    ShowChangedValue(y);
    ShowChangedValue(z);
    cout <<"S = " << s_calculation(x,y,z);
    return 0;
}
