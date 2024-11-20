#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> elements;
    queue<int> result;
    int size = 0;

    elements.push(10);
    elements.push(5);
    elements.push(30);
    elements.push(3);
    elements.push(5);
    elements.push(21);
    elements.push(12);
    elements.push(12);
    elements.push(5);
    elements.push(12);
    elements.push(19);
    elements.push(12);

    cout << "Number of elements : " << elements.size() << endl;
    size = elements.size();
    cout << "values : ";
    for (int i = 0; i < size; i++)
    {
        cout << elements.front() << "  ";
        if (elements.front() % 2 != 0)
        {
            result.push(elements.front());
        }
        elements.pop();
    }

    cout << "\n\nAfter remove even elements : ";
    size = result.size();
    for (int i = 0; i < size; i++)
    {
        cout << result.front() << "  ";
        result.pop();
    }
    cout << endl;

    return 0;
}