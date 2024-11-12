#include <iostream>
#include "employee.h"
#include "rectangle.h"

#define QUESTION 2
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

#elif (QUESTION == 2)
    Rectangle rec1(4, 5);
    cout << "Area of the rectangl : " << rec1.area() << endl;

    Rectangle rec2(5, 8);
    cout << "Area of the rectangl : " << rec2.area() << endl;

#endif

    cout << "\nProgram end" << endl;
    return 0;
}