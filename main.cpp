#include <iostream>
#include "rectangle.h"
#include "student.h"
#include "candidate.h"
#include "employee.h"

#define QUESTION 4
using namespace std;

int main()
{
    cout << "Program started" << endl;

#if (QUESTION == 1)
    cout << "****** Rectangle ******" << endl;
    Rectangle rec(10, 12);
    int area = 0;

    area = rec.areaRec();
    cout << "Area = " << area << endl;

#elif (QUESTION == 2)
    cout << "****** Student ******" << endl;
    Student student;
    int totalMark = 0;
    student.enterDetails();
    totalMark = student.calculateMarks();
    student.display(totalMark);

#elif (QUESTION == 3)
    cout << "****** Candidate ******" << endl;
    Candidate candidate;
    candidate.enterDetails();
    candidate.assignRemarks();

#elif (QUESTION == 4)
    cout << "****** Employee ******" << endl;
    
    Employee emp;
    emp.enterDetails();
    emp.display();
    
#endif

    cout << "Program end" << endl;
    return 0;
}