#include <iostream>
#include <iomanip>
#include <cmath>
#include "ModulesUstynovych.h"

using namespace std;

void test_drv (void){

    system("chcp 65001 & cls");

    int x [5] = {1, 2, 3, 1, 3};
    int y [5] = {1, 2, 3, 2, 2};
    int z [5] = {1, 2, 3, 3, 1};
    float result[5] = {0.158529, 0.31136, 0.423068, 0.0907026, 4.48903};

     for(int i = 0; i < 5; i++){
        if (round(s_calculation(x[i], y[i], z[i])) == result[i] ){
            cout << "Test case is passed"  << endl;
        }
        else{
            cout << "Test case is failed " <<endl;
        }
    }
}
int main (){
    test_drv();
    return 0;
}
