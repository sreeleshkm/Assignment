#ifndef CANDIDATE_H_
#define CANDIDATE_H_

#include <iostream>

using namespace std;

class Candidate
{
private:
    int mRollNo;
    float mScore;
    string mName;
    string mRemarks;

public:
    void enterDetails();
    void assignRemarks();   
};


#endif /* CANDIDATE_H_ */
