#ifndef RESIDENTIALBUILDING_H_
#define RESIDENTIALBUILDING_H_

#include <iostream>
#include "building.h"

using namespace std;

class ResidentialBuilding : public Building
{
private:
    int numberOfAparatement;

public:
    ResidentialBuilding(string add, int floor, int area, int numOfApt);
    int calculateRent();
};

#endif /* RESIDENTIALBUILDING_H_ */
