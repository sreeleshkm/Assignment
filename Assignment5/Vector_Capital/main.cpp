#include <iostream>
#include <vector>

using namespace std;

void display(vector<string> elements)
{
    vector<string>::iterator itr;

    for (auto itr : elements)
    {
        cout << itr << "  ";
    }
    cout << endl;
}

int main()
{
    vector<string> words = {"hi", "python", "go", "c++"};
    
    cout << "Before capitalize : ";
    display(words);

    for (int i = 0; i < words.size(); i++)
    {
        words[i][0] = toupper(words[i][0]);
    }

    cout << "After capitalize  : ";
    display(words);

    return 0;
}