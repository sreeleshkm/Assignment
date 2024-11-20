#include "Restaurant.h"


Table::Table(int tabNo, int cap, string st) : m_tableNo(tabNo), m_capacity(cap), m_status(st)
{
}

void Table::display()
{
    if (m_status == "Free")
    {
        cout << "Table " << m_tableNo << " is Free. Capacity : " << m_capacity << endl;
    }
    else
    {
        cout << "Table " << m_tableNo << " is Occupied\n";
    }
}

void Restaurant::addTable(Table& tab)
{
    table.push_back(tab);
}

void Restaurant::displayTableStatus()
{
    for (auto& tab : table)
    {
        tab.display();
    }
}