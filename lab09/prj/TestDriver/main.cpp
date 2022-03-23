#include <ModulesUstynovych.h>

int main()
{
    int mark [5] = {88, 55, 33, 78, 2};
    string str [5] = {"B (above average some mistakes)", "F (with the possibility of re-assembly)",
                    "FX (with obligatory repeated course)","C (overall correct fulfillment of certain significant number of errors)", "FX (with obligatory repeated course)" };

    cout << "Test task 9.1" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << test_module(rating(mark[i]) == str[i]) << endl;
    }

    int d1 [5] = {20, 23, 3, 15, -3};
    int d2 [5] = {25, 25, 7, 16, 0};
    int d3 [5] = {22, 22, 12, 12, 1};
    int d4 [5] = {30, 18, 5, 14, 2};
    int d5 [5] = {26, 26, 10, 10, 1};
    int d6 [5] = {20, 20, 4, 17, -5};
    int d7 [5] = {27, 19, 8, 18, -4};
    int celsium [5] = {24, 21, 7, 14, -1};
    float fahrenheit [5] = {75, 69, 44, 57, 30};

    cout << "Test task 9.2.1" << endl;
    for(int i = 0; i < 5; i++){
        cout << test_module(celsium[i] == avr_temperature_cel(d1[i], d2[i], d3[i], d4[i], d5[i], d6[i], d7[i] )) << endl;
    }

    cout << "Test task 9.2.2" << endl;
    for(int i = 0; i < 5; i++ ){
        cout << test_module(fahrenheit[i] == avr_temperature_far(celsium[i])) << endl;
    }


    int number [5] = {34, 52085, 798534, 4258050, 5335662};
    int result_task_9_3 [5] = {2, 10, 10, 24, 12};

    cout << "Test task 9.3" << endl;
    for(int i = 0; i < 5; i++){
        cout << test_module(result_task_9_3[i] == bits_number(number[i])) << endl;
    }
}
