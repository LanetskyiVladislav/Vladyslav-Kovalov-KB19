#include <iomanip>
#include <iostream>
#include <cmath>
#include <windows.h>
#include <bitset>
#include <string>
#include <sstream>

using namespace std;

double bank(double money, int mounth_amount)
{
    if (mounth_amount <=0){
        cout << "Pomylka" << endl;
    }
    if(mounth_amount <= 6 and mounth_amount >= 1){
        return ( money + ((money * 0.16)/12) * mounth_amount );
    }
    if(mounth_amount >= 12 or mounth_amount > 6){
        return ( money + ((money * 0.18)/12) * mounth_amount );
    }
}

string windPower(double wind)
{
    if (wind <= 0)
    {
        return "Pomylka";
    }
    if (wind < 0.3)
    {
        return "0";
    }
    if (wind >= 0.3 and wind <= 1.5)
    {
        return "1";
    }
    if (wind >= 1.6 and wind <= 3.4)
    {
        return "2";
    }
    if (wind > 3.4 and wind <= 5.4)
    {
        return "3";
    }
    if (wind >= 5.5 and wind <= 7.9)
    {
        return "4";
    }
    if (wind >= 8.0 and wind <= 10.7)
    {
        return "5";
    }
    if (wind >= 10.8 and wind <= 13.8)
    {
        return "6";
    }
    if (wind >= 13.9 and wind <= 17.1)
    {
        return "7";
    }
    if (wind >= 17.2 and wind <= 20.7)
    {
        return "8";
    }
    if (wind >= 20.8 and wind <= 24.4)
    {
        return "9";
    }
    if (wind >= 24.5 and wind <= 28.4)
    {
        return "10";
    }
    if (wind >= 28.5 and wind <= 32.6)
    {
        return "11";
    }
    if (wind >= 32.7)
    {
        return "12";
    }
}

string task33(int value)
{
    if(value > 0 and value < 9008000)
    {
        string result;
        int i=0, counter=0, sum=0;
        stringstream ss;

        bitset<17> bit = value;
        result = bit.to_string();

        if(result[12] == '0')
        {
            while(result[i] != 0)
            {
                if(result[i] == '0')
                counter++;
                i++;
            }
            ss << counter;
            ss >> result;
            ss.clear();
            return ( "Kil'kist  '0' v znachenni: "+result );
        }
        else
        {
        while(result[i] != 0)
        {
            if(result[i] == '1')
            sum++;
            i++;
        }
        ss << sum;
        ss >> result;
        ss.clear();
        return ( "Kilkist' '1' v znachenni: "+result );
        }
    }
    else
    {
        cout << "Pomylka!!! " << endl;
    }

    cout << "\n(Pochekaite 5 secund...)";
    Sleep(5000);
    system("CLS");
}
