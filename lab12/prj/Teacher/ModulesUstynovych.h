#ifndef MODULESUSTYNOVYCH_H_INCLUDED
#define MODULESUSTYNOVYCH_H_INCLUDED

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

class ClassLab12_Ustynovych
{
public:
    ClassLab12_Ustynovych(double wid, double h);
    ClassLab12_Ustynovych();

    void setWidth(double wid);
    void setHeight (double h);

    double getWidth() {return width;}
    double getHeight() {return height;}

    double Perimeter() {return 2*(width+height);}
    double Square() {return width*height;}

private:
    double width, height;
};

ClassLab12_Ustynovych::ClassLab12_Ustynovych(double wid, double h)
{
    width = wid;
    height = h;
}

ClassLab12_Ustynovych::ClassLab12_Ustynovych()
{
    width = 5.00;
    height = 4.00;
}

void ClassLab12_Ustynovych::setWidth(double wid)
{
    if(wid < 0) { wid = 0;}
    width = wid;
}

void ClassLab12_Ustynovych::setHeight(double h)
{
    if(h < 0) { h = 0;}
    height = h;
}



#endif // MODULESUSTYNOVYCH_H_INCLUDED
