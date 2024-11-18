#include <iostream>

template<typename T>
T minimumValue(T num1, T num2, T num3)
{
    T min = 0;
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }

    return min;
}

using namespace std;

int main()
{
    // Minimum Value
    int intValue1 = 20;
    int intValue2 = 30;
    int intValue3 = 20;
    int intResult = 0;

    intResult = minimumValue<int>(intValue1, intValue2, intValue3);

    cout << "Minimum Value = " << intResult << endl;

    double doubleValue1 = 2.35;
    double doubleValue2 = 4.54;
    double doubleValue3 = 2.345;
    double doubleResult = 0;

    doubleResult = minimumValue<double>(doubleValue1, doubleValue2, doubleValue3);

    cout << "Minimum Value = " << doubleResult << endl;

    return 0;
}