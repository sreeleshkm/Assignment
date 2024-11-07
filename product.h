#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>

using namespace std;

class Product
{
private:
    string mName;
    int mPrice;
    double mQuantity;

public:
    Product(string name, int price, double quantity);
    void printProduct();
};


#endif
