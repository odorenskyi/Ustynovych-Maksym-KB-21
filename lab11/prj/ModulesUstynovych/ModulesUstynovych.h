#ifndef MODULESUSTYNOVYCH_H_INCLUDED
#define MODULESUSTYNOVYCH_H_INCLUDED

#include "struct_type_project_4.h"

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string inputData(int numByt, string data, string msg);

void addUnit(Settings *&root);

void deleteUnit(Settings *&root);

#endif // MODULESUSTYNOVYCH_H_INCLUDED
