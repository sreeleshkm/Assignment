#include <iostream>

template<typename Temp>
void swap(Temp* val1, Temp* val2)
{
   *val1 = *val1 + *val2;
   *val2 = *val1 - *val2;
   *val1 = *val1 - *val2; 
}

using namespace std;

int main()
{
    // Swap
    int intVal1 = 20;
    int intVal2 = 30;

    cout << "Value before swap : " << intVal1 << "  " << intVal2 << endl;
    swap(intVal1,intVal2);
    cout << "Value after swap : " << intVal1 << "  " << intVal2 << endl;

    
    double doubleVal1 = 1.234;
    double doubleVal2 = 3.134;

    cout << "Value before swap : " << doubleVal1 << "  " << doubleVal2 << endl;
    swap(doubleVal1,doubleVal2);
    cout << "Value after swap : " << doubleVal1 << "  " << doubleVal2 << endl;

    return 0;
}