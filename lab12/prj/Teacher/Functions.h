#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include "ModulesUstynovych.h"

using namespace std;

bool checkFileDirectory(string writeFile)
{
    string cpp = __FILE__;
    size_t found = cpp.find("\\lab12\\prj");

    if (found == -1)
    {
        fstream file(writeFile, ios::out);
        file << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        file.close();
        return false;
    }
    return true;

    fstream file(writeFile, ios::out);
        file << "Встановлені вимоги порядку виконання лабораторної роботи порушено!" << endl;
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        file.close();
}

bool checkFileOpen(string writeName, string readName)
{
    fstream writeFile(writeName, ios::out);
    fstream readFile(readName, ios::in);

    if (readFile.is_open() == false || writeFile.is_open() == false)
    {
        fstream file("TestReuslts.txt", ios::out);
        file << "Встановлені вимоги порядку виконання лабораторної роботи порушено" << endl;
        file.close();
        return false;
    }
    return true;
}

void TestResults (string readName, ClassLab12_Ustynovych flag, string outSquare, string expSquare, string outPer, string expPer, int index)
{
    fstream resFile(readName, ios::app);
    resFile << "----------------------------------------------------" << endl;
    resFile << "| TEST CASE " << index << endl;
    resFile << "| Flag width: " << flag.getWidth()  << endl;
    resFile << "| Flag height: "  << flag.getHeight()  << endl;
    resFile << "| Flag square: " << outSquare  << endl;
    resFile << "| Flag square(exp): " << expSquare  << endl;
    resFile << "| Flag perimeter: " << outPer  << endl;
    resFile << "| Flag perimeter(exp): " << expPer  << endl;
    resFile << "| TEST CASE RESULT:       " << boolalpha << (expSquare.compare(outSquare) == 0 && expPer.compare(outPer) == 0 ) << "     |" << endl;
    resFile << "----------------------------------------------------" << endl;
}

#endif // FUNCTIONS_H_INCLUDED
