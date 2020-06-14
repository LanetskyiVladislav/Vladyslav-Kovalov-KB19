#include <iostream>
#include "calculation.h"
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    double x[5]={1,2,3,4,7};
    double y[5]={2,3,4,5,8};
    double z[5]={3,4,5,6,9};
    double exresultQ[5]={0.887387, 2.56094, -1.33686, 2.96969, 2.91248};
    double exresultS[5]={-5.47782, -20.8964, -51.6586, -103.514, -437.682};
    double result;
    cout << "Result Q: " << endl;
    for(int i = 0;i < 5; i++){
        result = q_calculation(x[i],y[i],z[i]);
            cout << "Expected: " << exresultQ[i] << endl;
            cout << "Result: " <<  result << endl;
    }
    cout << endl;
    cout << "Result S: " << endl;
    for(int i = 0; i < 5; i++){
       result = s_calculation(x[i],y[i],z[i]);
            cout << "Expected: " << exresultS[i] << endl;
            cout << "Result: " <<  result << endl;
    }
}
