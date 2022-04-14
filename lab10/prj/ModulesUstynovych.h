#ifndef MODULESUSTYNOVYCH_H_INCLUDED
#define MODULESUSTYNOVYCH_H_INCLUDED

#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <fstream>
#include <ctime>
#include <bitset>
#include <filesystem>

using namespace std;

double s_calculation(double x, double y, double z);

void checkFile (string outPutfile, string inPutfile);

bool copyright(string outPutfile);

string test_module(bool result);

int upAmount (string outPutfile, string stroke);

bool fileTime(string inPutfile);

bool fileSize(string inPutfile);

bool findString (string outPutfile, string stroke);

bool textInfile (string inputFile, string stroke);

double s_calculationres(string outPutfile, double x, double y, double z);

bool decimalToBinary(string outPutfile, int b);

#endif // MODULESUSTYNOVYCH_H_INCLUDED
