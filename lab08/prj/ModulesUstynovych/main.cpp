#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <bitset>

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

string rating (int rating)
{
    if (rating >= 1 && rating <= 34 ){
        return "FX (with obligatory repeated course";
    }

    if (rating >= 35 && rating <= 59){
        return "F (with the possibility of re-assembly";
    }

    if (rating >= 60 && rating <= 66){
        return "E (satisfies minimum criteria";
    }

    if (rating >= 67 && rating <= 74) {
        return "D (not bad, but with significant number of defects";
    }

    if (rating >= 75 && rating <= 81){
        return "C (overall correct fulfillment of certain significant number of errors";
    }

    if (rating >= 82 && rating <= 89){
        return "B (above average some mistakes";
    }

    if (rating >= 90 && rating <= 100){
        return "A (excellent performance with small number errors";
    }
}

int avr_temperature(double temp[7])
{
    float sum, cel, far;
    for (int i = 0; i < 7; i++) {
        sum += temp[i];
    }
    cel = sum / 7;
    far = 32 + 1.8 * cel;
}



int bits_number(int number)
{
    bitset<31> b_number{number};
    if (b_number[12]) {
        return 32 - b_number.count();
    }
    return b_number.count();
}


