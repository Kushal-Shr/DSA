#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Kushal";
    m[2] = "Shrestha";
    m[13] = "Hello";
    m[4] = "World";

    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl;

    m.insert({11, "Boi"});

    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl;

    cout << m.count(13) << endl;

    return 0;
}