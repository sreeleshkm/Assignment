#include <iostream>
#include "Increment.h"

using namespace std;

int main()
{
    MyIncrement<int> myInc(100);

    myInc.toIncrement();
    myInc.toIncrement();
    myInc.toIncrement();
    myInc.toIncrement();
    myInc.toIncrement();

    int currentValue = 0;

    currentValue = myInc.getValue();

    cout << "Curent Value : " <<currentValue << endl;

    return 0;
}