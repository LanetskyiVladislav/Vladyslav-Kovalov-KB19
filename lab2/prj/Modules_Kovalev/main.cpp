#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

double const  e=2.71828182846;

bool xValidation(double x, char func)
{
    bool check = 1;

    if(func == 's')
    {
        if(x < -2)
            check = 0;
    }else{
        if(x == 5)
            check = 0;
    }

    return check;
}

bool yValidation(double y, char func)
{
    bool check = 1;


    return check;
}

bool zValidation(double z, char func)
{
    bool check = 1;

    if(func == 's')
    {
        if(z < 0)
            check = 0;
    }

    return check;
}
bool rootValidation(double x, double y, double z, char ch)
{
    double part;
    bool check = 1;
    if (ch=='s')
    {
        part = sqrt((abs(pow(z,2)*pow(e,x)))/((12*x)+(pow(y,2)-M_PI*sqrt(z))));
        if (part < 0)
            check = 0;
    }
    else
    {
        part = sqrt ( ( 12*pow ( x,abs ( z ) ) ) - ( ( M_PI * ( z + y ) ) / ( abs ( 5 - x ))));
        if (part < 0)
            check = 0;
    }
    return check;
}
string name()
{
      return "===================\n"
    + string(" © Kovalev Vlad\n")
    + string("===================");
}

string chek (int a, int b)
{
     return a<=b -32 ? "True" : "False";
}
double s_calculation(double x, double y, double z)
{
    if(rootValidation(x,y,z,'s')==1&&xValidation(x,'s')==1&&yValidation(y,'s')==1&&zValidation(z,'s')==1)
        return pow(x,2)-pow(y,3)+sqrt((abs(pow(z,2)*pow(e,x)))/((12*x)+(pow(y,2)-M_PI*sqrt(z))));
    else
    {
        cout << "\nError, try again" << endl;
        return 0;
    }
}

double q_calculation(double x, double y, double z)
{
    if(rootValidation(x,y,z,'q')==1&&xValidation(x,'q')==1&&yValidation(y,'q')==1&&zValidation(z,'q')==1)
        return 3 * sin ( sqrt ( ( 12*pow ( x,abs ( z ) ) ) - ( ( M_PI * ( z + y ) ) / ( abs ( 5 - x )))));
    else
    {
        cout << "\nError, try again" << endl;
        return 0;
    }
}
