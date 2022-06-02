#include "ModulesUstynovych.h"
#include "Functions.h"

using namespace std;

string tsDirPath = "./";
string testResPath = "TestResults.txt";

int main()
{
    system("chcp 1251 & cls");
    string path = __FILE__;
    if (path.find("lab12\\prj\\") == string::npos) {
        for (int i = 0; i < 100; i++) {
            cout << "\a";
        }
        ofstream testRes(testResPath);
        if (testRes.is_open()) {
            testRes << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
            testRes.close();
        }
        else {
            cout << "Помилка при роботі з файлом " << testResPath << "." << endl;
        }
        return -1;
    }

    ifstream mainFile("main.cpp");
    if (mainFile.is_open()) {
        tsDirPath = "../../TestSuite/";
        mainFile.close();
    }
    else {
        tsDirPath = "../TestSuite/";
    }

    testResPath = tsDirPath+testResPath;
    ofstream testRes(testResPath, ios::out);
    if (testRes.is_open()) testRes.close();

    ClassLab12_Ustynovych flag;
    string examples = tsDirPath + "TestSuite.txt";
    string results = tsDirPath + "TestResults.txt";

    if (checkFileDirectory(results) == false) { return 1; }
    if (checkFileOpen(results, examples) == false) { return 2; }

    string buff;
    ofstream resOut(results, ios::app);
    if (resOut.is_open()) {
        ifstream resTest(examples);
        if (resTest.is_open()) {
            bool newLine = true;
            resOut << "+" << setw(34) << left << setfill('-') << "" << setw(45)
                    << "+" << endl << setfill(' ');
            for (int i = 0, j = 0; resTest.tellg() != -1; i++) {
                if (newLine) {
                    resOut << "|TC_" << left << setw(2) << j+1 << "|";
                    newLine = false;
                }
                getline(resTest, buff);
                buff = buff.erase(0, 11);
                cout << stod(buff) << endl;
                switch (i%4) {
                case 0:
                    resOut << "h - " << setw(8) << buff;
                    flag.setHeight(stod(buff));
                    break;
                case 1:
                    resOut << "w - " << setw(8) << buff;
                    flag.setWidth(stod(buff));
                    break;
                case 2:
                    resOut << "|square - " << setw(11) << flag.Square();
                    resOut << resetiosflags(ios::left);
                    cout << (int)(flag.Square()*1000) << " | " << (int)(stod(buff)*1000) << endl;
                    break;
                case 3:
                    resOut << "|perimeter - " << flag.Perimeter() << ' ';
                    resOut << resetiosflags(ios::left);
                    cout << (int)(flag.Perimeter()*1000) << " | " << (int)(stod(buff)*1000) << endl;
                    if(((int)(flag.Perimeter()*1000)) == (int)(stod(buff)*1000))
                    {
                        resOut << "Passed" << endl;
                    }
                    else
                        resOut << "Failed" << endl;

                    newLine = true;
                    j++;
                }
            }
            resOut << "+" << setw(80) << setfill('-') << "+" << endl << setfill(' ');
            resTest.close();
        }
        else {
            cout << "Помилка при роботі з файлом!" << examples << "." << endl;
        }
        resOut.close();
    }
    else {
        cout << "Помилка при роботі з файлом!" << results << "." << endl;
    }

    return 0;
}
