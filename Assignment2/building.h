#ifndef BUILDING_H_
#define BUILDING_H_

#include <iostream>

using namespace std;

class Building
{
private:
    string mAddress;
    int mTotalArea;
protected:
    int mFloors;
public:
    Building(string add, int floor, int area);
};

#endif /* BUILDING_H_ */
