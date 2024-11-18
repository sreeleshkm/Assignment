#include <iostream>

template<typename T>
T multiply (T val1, T val2)
{
    return val1 * val2;
}

using namespace std;

int main()
{
    // Product of 2 Values
    int ival1 = 20;
    int ival2 = 39;
    int intResult = 0;

    intResult = multiply(ival1, ival2);
    cout << "int Result = " << intResult << endl;

    double dVal1 = 10.23;
    double dVal2 = 34.2;
    double doubleResult = 0;

    doubleResult = multiply(dVal1, dVal2);
    
    cout << "double Result = " << doubleResult << endl;

    return 0;
}