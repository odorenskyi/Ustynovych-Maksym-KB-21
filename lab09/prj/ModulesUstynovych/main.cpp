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

string rating (int mark)
{
    if (rating >= 1 && rating <= 34 ){
        return "FX (with obligatory repeated course)";
    }

    if (rating >= 35 && rating <= 59){
        return "F (with the possibility of re-assembly)";
    }

    if (rating >= 60 && rating <= 66){
        return "E (satisfies minimum criteria)";
    }

    if (rating >= 67 && rating <= 74) {
        return "D (not bad, but with significant number of defects)";
    }

    if (rating >= 75 && rating <= 81){
        return "C (overall correct fulfillment of certain significant number of errors)";
    }

    if (rating >= 82 && rating <= 89){
        return "B (above average some mistakes)";
    }

    if (rating >= 90 && rating <= 100){
        return "A (excellent performance with small number errors)";
    }
}

int avr_temperature_cel(int d1, int d2, int d3, int d4, int d5, int d6, int d7)
{
    int cel = (d1+d2+d3+d4+d5+d6+d7) / 7;
    return cel;
}

int avr_temperature_far(int cel)
{
    int far;
    far = 32 + 1.8 * cel;
    return far;
}

int bits_number(int number)
{
    bitset<32> b_number{number};
    if (b_number[12]) {
        return 32 - b_number.count();
    }
    return b_number.count();
}


string test_module(bool result){
    if(result){
        return "Test passed";
    }
    else{
        return "Test failed";
    }
}
