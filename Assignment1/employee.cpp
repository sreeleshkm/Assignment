#include "employee.h"

void Employee::enterDetails()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee name : ";
        getline(cin, mName[i]);
        cout << "Year of Joining : ";
        cin >> mJoinYear[i];
        cout << "Salary : ";
        cin >> mSalary[i];
        cin.ignore();
        cout << "Address : ";
        getline(cin, mAddress[i]);
        cout << "next employee" << endl;
    }
}



void Employee::display()
{
    cout << "Name\t\tYear of Joining\tSalary\tAddress" << endl;
    
    for (int i = 0; i < 3; i++)
    {
        cout << mName[i];
        if (mName->length() > 5)
        {
            cout << "\t";
        }
        else
        {
            cout << "\t\t";
        }
        cout << mJoinYear[i] << "\t\t" << mSalary[i] << "\t" << mAddress[i] << endl;
    }
}
