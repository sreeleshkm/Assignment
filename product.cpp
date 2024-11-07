#include "product.h"

Product::Product(string name, int price, double quantity) : mName{name}, 
    mPrice{price}, mQuantity{quantity}
{
}

void Product::printProduct()
{
    cout << mName << ": price " << mPrice <<  ": " << mQuantity << "pcs" << endl;
}
