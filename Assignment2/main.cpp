#include <iostream>
#include "employee.h"

#define QUESTION 1
using namespace std;

int main()
{
    cout << "Program started\n" << endl;

#if (QUESTION == 1)
    cout << "********** Question 1 **********\n" << endl;

    Employee emp;
    while (true)
    {
        emp.setEmpDetails();
        emp.printEmpDetails();
    }

#endif

    cout << "\nProgram end" << endl;
    return 0;
}