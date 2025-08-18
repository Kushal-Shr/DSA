#include <iostream>
#include <string>

using namespace std;

void reverseString(string &name, int i, int j)
{
    if (i >= j)
        return;

    swap(name[i], name[j]);

    return reverseString(name, i + 1, j - 1);
}

int main()
{
    string name = "Kushal";
    int i = 0, j = name.length() - 1;

    cout << name << endl;

    reverseString(name, i, j);

    cout << name << endl;

    return 0;
}