#include "employee.h"

void Employee::setEmpDetails()
{
    cout << "Employee name : ";
    getline(cin, mEmpName);
    cout << "Employee ID : ";
    cin >> mEmpID;
    cout << "Employee Blood Group : ";
    cin >> mEmpBloodGrp;
    cin.ignore();
}



void Employee::printEmpDetails()
{
    cout << "\n***** ID *****\n" << endl;
    cout << "\t" << mEmpName << endl;
    cout << "\tID : " << mEmpID << endl;
    cout << "\t" << mEmpBloodGrp << "ve\n" << endl;
#if 0
    cout << string(39, '-') << endl;
    cout << "Name\t\t| ID\t| Blood Group |" << endl;
    cout << string(16, '-') << "|" << string(7, '-') << "|" << string(13, '-') << "|" <<  endl;

    cout << mEmpName;
    if (mEmpName.length() > 5)
    {
        cout << "\t| ";
    }
    else
    {
        cout <<"\t\t| ";
    }
    cout << mEmpID << "\t| ";
    cout << mEmpBloodGrp << "ve\t\t\b\b|" << endl;
    cout << string(16, '-') << "|" << string(7, '-') << "|" << string(13, '-') << "|" <<  endl;
#endif
}