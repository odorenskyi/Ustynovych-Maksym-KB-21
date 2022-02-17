#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

double s_calculation(double x, double y, double z)
{
    double S;
    S =(abs(sqrt(abs(z-2*x))-x*sin(pow(x,2*z)*y)));
    return S;
}

void copyright(){
    system ("chcp 1251 & cls");
    cout << "  ------------------------\n"
         << " | Ustynovych Maksym, CNTU |\n"
         << " | @ustynovychm@gmail.com  |\n"
         << " |  © All Rights Reserved  |\n"
         << "  ------------------------\n";
}
