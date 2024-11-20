#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> vec)
{
    vector<int>::iterator itr;
    for (auto itr : vec)
    {
        cout << itr << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> elements = {14, 43, 34, 4, 5, 3, 6, 1, 23, 5, 3};

    cout << "Elements in the vector : ";
    display(elements);

    sort(elements.begin(), elements.end());

    cout << "After sorting : ";
    display(elements);

    return 0;
}