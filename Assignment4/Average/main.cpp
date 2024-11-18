#include <iostream>

using namespace std;

template <typename T>
T calculateAverage(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum / size;
}

int main() 
{
    int intArray[5] = {1, 2, 3, 4, 5};
    int intSize = 5;
    int intAverage = 0;
    intAverage = calculateAverage(intArray, intSize);
    cout << "Average of intArray: " << intAverage << endl;

    double doubleArray[6] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.7};
    int doubleSize = 6;
    double doubleAverage = 0;
    doubleAverage = calculateAverage(doubleArray, doubleSize);
    cout << "Average of doubleArray: " << doubleAverage << endl;

    return 0;
}