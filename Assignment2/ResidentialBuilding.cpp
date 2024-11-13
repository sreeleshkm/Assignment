#include "ResidentialBuilding.h"

ResidentialBuilding::ResidentialBuilding(string add, int floor, int area, int numOfApt) :
    Building(add, floor, area), numberOfAparatement(numOfApt)
{
}
int ResidentialBuilding::calculateRent()
{
    const int rent = 3000;
    int totalRent = 0;
    totalRent = rent * numberOfAparatement * mFloors;
    return totalRent;
}