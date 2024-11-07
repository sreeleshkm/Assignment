#include "rectangle.h"

Rectangle::Rectangle(int len, int wid) : length{len}, width{wid}{}
Rectangle::~Rectangle(){}

int Rectangle::areaRec()
{
    cout << "Lenght : " << length << endl;
    cout << "Width : " << width << endl;
    return length * width;
}