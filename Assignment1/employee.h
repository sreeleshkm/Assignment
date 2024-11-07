#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>

using namespace std;

class Employee
{
private:
    string mName[3];
    int mJoinYear[3];
    int mSalary[3];
    string mAddress[3];

public:
    void enterDetails();
    void display();
};

#endif /* EMPLOYEE_H_ */
