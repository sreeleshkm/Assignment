#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> mp;

    mp[10001] = "Manhattan";
    mp[10451] = "Bronx";
    mp[11004] = "Queens";
    mp[11201] = "Brooklyn";
    
    map<int, string>::iterator itr;

    cout << "Pincode\t| Place Name" << endl;
    cout << string(21, '-') << endl;
    
    for (itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << "\t| " << itr->second << endl;
    }

    cout << string(21, '-') << endl;

    return 0;
}