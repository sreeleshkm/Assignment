#include "student.h"


void Student::enterDetails()
{
    cout << "Enter Name : ";
    cin >> m_name;
    cout << "Enter mark1 : ";
    cin >> m_mark1;
    cout << "Enter mark2 : ";
    cin >> m_mark2;
}

int Student::calculateMarks()
{
    return m_mark1 + m_mark2;
}

void Student::display(int totalMark)
{
    cout << "Name : " << m_name << endl;
    cout << "Total mark : " << totalMark << endl;
}