#include <iostream>

using namespace std;

inline void fibonacci(int n) 
{
    int nextNum = 0; 
    int preNum = 0;
    int curNum = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << "0, ";
        }
        else if (i == 2)
        {
            cout << "1, ";
        }
        else
        {
            nextNum = preNum + curNum;
            preNum = curNum;
            curNum = nextNum;
            cout << nextNum << ", ";
        }
    }
}

int main() 
{
    int num;

    cout << "Enter the number : ";
    cin >> num;

    cout << "Fibonacci Series: ";
    fibonacci(num);
    
    return 0;
}