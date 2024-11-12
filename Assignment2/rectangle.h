#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int lenght;
    int width;
    
public:
    Rectangle(int len, int wid);
    int area();
};


#endif /* RECTANGLE_H_ */
