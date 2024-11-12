#include "rectangle.h"

Rectangle::Rectangle(int len, int wid) : lenght{len}, width{wid}
{
}

int Rectangle::area()
{
    int area;
    area = lenght * width;
    return area;
}