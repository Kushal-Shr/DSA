#include <iostream>

using namespace std;

int main()
{
    int a = 72, b = 48;

    if (a == 0)
        cout << b << endl;
    if (b == 0)
        cout << a << endl;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    cout << a << endl;

    return 0;
}