#include <iostream>
#include <vector>
#include "Restaurant.h"

using namespace std;

int main()
{
    Restaurant res;

    Table table1(1, 10, "Free");
    Table table2(2, 6, "Occupied");
    Table table3(3, 4, "Occupied");
    Table table4(4, 3, "Free");

    res.addTable(table1);
    res.addTable(table2);
    res.addTable(table3);
    res.addTable(table4);

    res.displayTableStatus();
}