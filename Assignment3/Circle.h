#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>

using namespace std;

class Circle
{
private:
    double mRadius;
    const float pi = 3.14;
public:
    Circle();
    Circle(double rad);
    ~Circle();
    double circumference();
    double getRadius();
    Circle operator++();
};



#endif /* CIRCLE_H_ */
