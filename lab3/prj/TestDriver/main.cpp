#include <iostream>
#include "calculation.h"
#include <windows.h>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    cout << "\t\t\t\tTEST DRIVER\n\n";

    cout << "----------------------------------Task 3.1----------------------------------\n\n";

    string actual;
    double price31[5] = {2000, 1500, 1300, 750, 10000};

    int month31[5] = {2, 3, 5, 10, 11};
    string expected31[5] = {"2053.33","1560","1386.67","862.5","11650"};

    stringstream ss;

    for(int i=0; i<5; i++)
    {
        cout << "Test suite #" << i+1;

        ss << bank(price31[i],month31[i]);
        ss >> actual;
        ss.clear();

        if (actual == expected31[i])
            cout << ". Status - PASSED;\n";
        else
            cout << ". Status - FAILED;\n";
    }

    cout << "\n----------------------------------Task 3.2----------------------------------\n\n";

    double size32[5] = {5,8.2,14,17.5,40};

    string expected32[5] = {"3","5","7","8", "12"};

    for(int i=0; i < 5; i++)
    {
        if (expected32[i] == windPower(size32[i]))
            cout << "Test suite #" << i+1 << ". Status - PASSED\n";
        else
            cout << "Test suite #" << i+1 << ". Status - FAILED\n";
    }

    cout << "\n----------------------------------Task 3.3----------------------------------\n\n";

    int in33[5] = {2000,1999,3000,101,9};

    string expected33[5] = {"Kilkist' '1' v znachenni: 6","Kilkist' '1' v znachenni: 8",
                            "Kilkist' '1' v znachenni: 7","Kil'kist  '0' v znachenni: 13","Kil'kist  '0' v znachenni: 15"};

    for(int i=0; i < 5; i++)
    {
        if( expected33[i] == task33(in33[i]) )
            cout << "Test suite #" << i+1 << ". Status - PASSED\n";
        else
            cout << "Test suite #" << i+1 << ". Status - FAILED\n";
    }
}
