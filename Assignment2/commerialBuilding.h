#ifndef COMMERIALBUILDING_H_
#define COMMERIALBUILDING_H_

#include <iostream>
#include "building.h"

using namespace std;

class CommercialBuilding : public Building
{
private:
    int NumberOfOfficeSpace;

public:
    CommercialBuilding(string add, int floor, int area, int numOfApt);
    int calculateRent();
};

#endif /* COMMERIALBUILDING_H_ */
