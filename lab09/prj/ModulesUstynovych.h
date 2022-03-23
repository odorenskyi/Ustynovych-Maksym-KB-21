#ifndef MODULESUSTYNOVYCH_H_INCLUDED
#define MODULESUSTYNOVYCH_H_INCLUDED

#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>

using namespace std;

double s_calculation(double x, double y, double z);

string rating (int mark);

int avr_temperature_cel(int d1, int d2, int d3, int d4, int d5, int d6, int d7);

int avr_temperature_far(float cel);

int bits_number(int number);

string test_module (bool result);


#endif // MODULESUSTYNOVYCH_H_INCLUDED
