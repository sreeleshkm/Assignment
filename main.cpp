#include <iostream>
#include "rectangle.h"

#define QUESTION 1

using namespace std;

int main()
{
    cout << "Program started" << endl;

#if (QUESTION == 1)
    cout << "****** Rectangle ******" << endl;
    Rectangle rec(10, 12);
    int area = 0;

    area = rec.areaRec();
    cout << "Area = " << area << endl;

#endif

    cout << "Program end" << endl;
    return 0;
}