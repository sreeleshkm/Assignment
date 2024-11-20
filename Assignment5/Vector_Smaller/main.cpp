#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1 = {1, 3, 2, 4, 3, 4, 5, 10, 5, 9, 3, 4, 4, 2, 2, 5};
    vector<int> result;

    cout << "\nElements in the vector : ";
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << "  ";
    }
    cout << endl;

    for (int i = 1; i < vec1.size(); i++)
    {
        if ((vec1[i] < vec1[i -1]) && (vec1[i] < vec1[i + 1]))
        {
            result.push_back(vec1[i]);
        }
    }

    cout << "Smaller than their neighbours : ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "  ";
    }
    cout << endl;

    return 0;
}