#include <iostream>
#include "employee.h"
#include "rectangle.h"
#include "ResidentialBuilding.h"
#include "commerialBuilding.h"

#define QUESTION 3
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
    cout << "********** Question 2 **********\n" << endl;

    Rectangle rec1(4, 5);
    cout << "Area of the rectangle : " << rec1.area() << endl;

    Rectangle rec2(5, 8);
    cout << "Area of the rectangle : " << rec2.area() << endl;

#elif (QUESTION == 3)
    cout << "********** Question 3 **********\n" << endl;
    string Add = "Trenser Tvm";
    int totalRent = 0;

    ResidentialBuilding resBuilding(Add, 10, 1000, 20);
    cout << "\nResidential Building" << endl;
    totalRent = resBuilding.calculateRent();
    cout << "Total Rent = " << totalRent << endl;
    
    CommercialBuilding comBuilding(Add, 6, 400, 8);
    cout << "\nCommercial Building" << endl;
    totalRent = comBuilding.calculateRent();
    cout << "Total Rent = " << totalRent << endl;

#endif

    cout << "\nProgram end" << endl;
    return 0;
}