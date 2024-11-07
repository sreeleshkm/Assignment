#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>

using namespace std;

class Student
{
private:
    string m_name;
    int m_mark1;
    int m_mark2;

public:
    void enterDetails();
    int calculateMarks();
    void display(int totalMark);
};

#endif /* STUDENT_H_ */
