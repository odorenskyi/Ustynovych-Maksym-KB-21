#include "ModulesUstynovych.h"

int main()
{
    int mark;
    int d1,d2,d3,d4,d5,d6,d7;
    double x,y,z;
    int number;

    char act;
    do {
        cout << "Choose action:" << endl;
        cout << "h - s_calculation" << endl;
        cout << "f - task 9.1" << endl;
        cout << "d - task 9.2" << endl;
        cout << "s - task 9.3" << endl;
        cout << "a,A,p - quit" << endl;

        cin >> act;

        if (act == 'h')
        {
            cout << "Enter x:";
            cin >> x;
            cout << "Enter y:";
            cin >> y;
            cout << "Enter z:";
            cin >> z;
            cout << s_calculation(x, y, z) << endl;
        }

        else if (act == 'f')
        {
            cout << "Enter mark:";
            cin >> mark;
            cout << rating(mark) << endl;
        }

        else if (act == 'd')
        {
            cout << "Enter temperature on monday: ";
            cin >> d1;
            cout << "Enter temperature on tueday: ";
            cin >> d2;
            cout << "Enter temperature on wednesday: ";
            cin >> d3;
            cout << "Enter temperature on thursday: ";
            cin >> d4;
            cout << "Enter temperature on friday: ";
            cin >> d5;
            cout << "Enter temperature on saturday: ";
            cin >> d6;
            cout << "Enter temperature on sunday: ";
            cin >> d7;
            cout << avr_temperature_cel(d1, d2, d3, d4, d5, d6, d7) << " C" << endl;
            cout << avr_temperature_far(avr_temperature_cel(d1, d2, d3, d4, d5, d6, d7)) << " F" <<  endl;
        }

        else if (act == 's')
            {
            cout << "Enter number:";
            cin >> number;
            cout << bits_number(number) << endl;
            }

        else if(act != 'a' && act != 'A' && act != 'p'){
            cout << '\a' << endl;
        }

    }while(act != 'a' && act != 'A' && act != 'p');
    return 0;
}

