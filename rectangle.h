#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int len, int wid);
    ~Rectangle();

    int areaRec();
};

#endif /* RECTANGLE_H_ */
