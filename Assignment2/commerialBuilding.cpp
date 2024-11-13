#include "commerialBuilding.h"

CommercialBuilding::CommercialBuilding(string add, int floor, int area, int numOfApt) :
    Building(add, floor, area), NumberOfOfficeSpace(numOfApt)
{
}
int CommercialBuilding::calculateRent()
{
    const int rent = 10000;
    int totalRent = 0;
    totalRent = rent * NumberOfOfficeSpace * mFloors;
    return totalRent;
}