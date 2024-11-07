#include <iostream>
#include "rectangle.h"
#include "student.h"
#include "candidate.h"

#define QUESTION 3
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
    
#endif

    cout << "Program end" << endl;
    return 0;
}