#include "ModulesUstynovych.h"

using namespace std;

string inputData(int numByt, string data, string msg)
{
    do {
        cout << msg;
        cin >> data;
    } while (data.length() < 1  || data.length() > numByt);
    return data;
}

void addUnit(Settings *&root)
{

    Settings *buff = root;
    Settings *newUnit = new Settings();
    while (buff->next != nullptr)
    {
        buff = buff->next;
    }

    string sNameUnit = "";
    string sNumSelection = "";
    string sNameSelection = "";
    string sCodeUnit = "";

    strcpy(newUnit->numSelection, inputData(4, sNumSelection, "Уведіть номер розділу: ").c_str());
    strcpy(newUnit->nameUnit, inputData(256, sNameUnit, "Уведіть назву розділу: ").c_str());
    strcpy(newUnit->codeUnit, inputData(4, sCodeUnit, "Уведіть номер товару: ").c_str());
    strcpy(newUnit->nameSelection, inputData(256, sNameSelection, "Уведіть назву товару: ").c_str());

    buff->next = newUnit;
    buff = buff->next;
}

void deleteUnit(Settings *&root)
{
    Settings *find = root;
    Settings *buff = nullptr;

    char searchCode[4] = "";
    cout << endl << "Уведіть код запису, запис якого хочете видалити: ";
    cin >> searchCode;

    while(find != nullptr)
        {
            if (strcmp(searchCode, find->codeUnit) == 0)
            {
                if (find == root)
                    root = root->next;
                else
                    buff->next = find->next;
                delete(find);
                break;
            }
            buff = find;
            find = find->next;
        }
}
