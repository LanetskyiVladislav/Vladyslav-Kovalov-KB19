#include <iostream>
#include "calculation.h"
#include <windows.h>

using namespace std;

string name()
{
      return "===================\n"
    + string(" © Kovalev Vlad\n")
    + string("===================");
}

void calc(int x, int y, int z)
{
    cout << "Result Q : " << q_calculation (x,y,z) << endl;
    cout << "Result S : " << s_calculation (x,y,z) << endl << endl;

    cout << "x : dec : "<< dec << int (x) << " | oct : " <<  oct << int(x) << endl;
    cout << "y : dec : "<< dec << int (y) << " | oct : " <<  oct << int(y) << endl;
    cout << "z : dec : "<< dec << int (z) << " | oct : " <<  oct << int(z) << endl;
}


string chek (int a, int b)
{
     return a<=b -32 ? "True" : "False";
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");


    double x, y, z;
    char v;

    while(true)
    {

        cout << name() << endl << endl;
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
        cout << "Enter z: ";
        cin >> z;
        cout << endl;

        int a, b;

        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Result of a logical expression: " << chek(a,b) << endl;
        calc(x,y,z);
        cout << "Press ( y ) to exit: ";
        cin >> v;
        if( v == 'y' or v == 'Y')
            exit(0);
        system ("CLS");
    }
    return 0;
}
