#include "candidate.h"

void Candidate::enterDetails()
{
    cout << "Enter Roll No : ";
    cin >> mRollNo;
    cout << "Enter Name : ";
    cin >> mName;
    cout << "Enter the score : ";
    cin >> mScore;
};

void Candidate::assignRemarks()
{
    cout << "RollNo\tName\t\tScore\tRemarks" << endl;
    cout << mRollNo << "\t" << mName;
    
    if (mName.length() > 5)
    {
        cout << "\t";
    }
    else
    {
        cout << "\t\t";
    }

    cout << mScore << "\t";

    if (mScore >= 50)
    {
        cout << "Selected" << endl;
    }
    else if (mScore < 50)
    {
        cout << "Not Selected" << endl;
    }
}
