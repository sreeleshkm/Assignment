#ifndef RESTAURANT_H_
#define RESTAURANT_H_

#include <iostream>
#include <vector>

using namespace std;

class Table
{
private:
    int m_tableNo;
    int m_capacity;
    string m_status;

public:
    Table(int tabNo, int cap, string st);
    void display();
};

class Restaurant
{
private:
    vector<Table> table;
public:

    void addTable(Table& tab);
    void displayTableStatus();
};

#endif /* RESTAURANT_H_ */
