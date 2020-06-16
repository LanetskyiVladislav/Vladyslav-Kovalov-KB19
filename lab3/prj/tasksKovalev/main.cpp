#include <iomanip>
#include <iostream>
#include <windows.h>
#include "calculation.h"
#include <cmath>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    double money = 0;
    int mounth_amount = 0;
    setlocale(LC_ALL, "Ukr");
    double wind;
    int value;
    char ch;

    while(true)
    {
        cout << "Oberit' diyu(1- task_3_1; 2- task_3_2; 3- task_3_3;): ";
        cin >> ch;

        switch(ch)
        {
        case '1':
            system("CLS");
            cout << "Vvedit' kil'kist' groshey pid deposit: " << endl;
            while(!(cin>>money))
            {
                cout<<"\nPLEASE ENTER A NUMBER!!!\n";
                cin.clear();
                cin.sync();
                cout<<"\nEnter please a value: ";
            }
            cout << "Kil'kist' ìiñÿöiâ: ";
            while(!(cin>>mounth_amount))
            {
                cout<<"\nPLEASE ENTER A NUMBER!!!\n";
                cin.clear();
                cin.sync();
                cout<<"\nEnter please a value: ";
            }
            cout << bank(money, mounth_amount);
            Sleep(5000);
            system("CLS");
            break;
        case '2':
            system("CLS");
            cout << "Vvedit' shvydkist' vitru: " ;
            while(!(cin>>wind))
            {
                cout<<"\nPLEASE ENTER A NUMBER!!!\n";
                cin.clear();
                cin.sync();
                cout<<"\nEnter please a value: ";
            }
            cout << "Bal Boforta: " << windPower(wind);

            cout << "\n(Pochekaite 5 secund...)";
            Sleep(5000);
            system("CLS");

            break;
        case '3':
            system("CLS");
            cout << "Vvedit' chislo: ";
            while(!(cin>>value))
            {
                cout<<"\nPLEASE ENTER A NUMBER!!!\n";
                cin.clear();
                cin.sync();
                cout<<"\nEnter please a value: ";
            }
            cout << task33(value) << endl;
            break;
        default:
            system("CLS");
            cout << "\a";
            cout << "Yakscho vy hochete zakryty programu, natysnit' 'd'/'D'/'c': ";
            cin >> ch;
            if(ch == 'c'||ch == 'D'||ch == 'd')
                exit(0);
            else
            {
                system("CLS");
                break;
            }
        }
    }

}
