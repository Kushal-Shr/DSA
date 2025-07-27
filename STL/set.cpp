#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s = {5, 5, 5, 5, 5}; // doesn't store duplicates
    cout << "Size: " << s.size() << endl;

    s.insert(1);
    s.insert(3);

    for (auto num : s)
    {
        cout << num << " ";
    }
    cout << endl;

    cout << s.count(2) << endl; // checks if 2 is present in the set
    cout << s.count(3) << endl; // checks if 3 is present in the set

    return 0;
}