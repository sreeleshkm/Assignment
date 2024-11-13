#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double rad) : mRadius(rad)
{
}

Circle::~Circle()
{
}

double Circle::circumference()
{
    double cir;
    cir = 2 * pi * mRadius;
    return cir;
}

double Circle::getRadius()
{
    return mRadius;
}

Circle Circle::operator++()
{
    return Circle(++mRadius);
}
