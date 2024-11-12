#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>

using namespace std;

class Employee
{
private:
    string mEmpName;
    int mEmpID;
    string mEmpBloodGrp;

public:
    void setEmpDetails();
    void printEmpDetails();
};

#endif /* EMPLOYEE_H_ */
