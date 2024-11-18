#include <iostream>

using namespace std;

int equal(int val1, int val2)
{
    bool result = false;
    if (val1 == val2)
    {
        result = true;
    }
    else
    {
        result = false;
    }
    
    return result;
}

int sumSquare(int val1, int val2)
{
    return (val1 * val1) + (val2 * val2);
}

int sum(int val1, int val2)
{
    int sum = 0;
    while(val1 <= val2)
    {
        sum += val1;
        val1++;
    }

    return sum;
}


int main()
{
    int value1 = 0; 
    int value2 = 0;
    int result = 0;

    cout << "Enter first number : ";
    cin >> value1;
    cout << "Enter second number : ";
    cin >> value2;

    int (*funcPointer)(int, int);

    funcPointer = equal;
    result = funcPointer(value1, value2);
    if (result == 1)
    {
        cout << "\nTha values are same" << endl;
    }
    else
    {
        cout << "\nThe values not same" << endl;
    }

    funcPointer = sumSquare;
    result = funcPointer(value1, value2);
    cout << "\nSum square = " << result << endl;

    funcPointer = sum;
    result = funcPointer(value1, value2);
    cout << "\nsum of ";
    while (value1 <= value2)
    {
        cout << value1 << ", ";
        value1++;
    }
    cout << "\b\b = " << result << endl;

    return 0;
}