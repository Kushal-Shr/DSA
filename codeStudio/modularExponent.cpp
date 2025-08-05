#include <iostream>

using namespace std;

int main()
{
    int res = 1;
    int x = 2;
    int n = 4;
    int m = 3;

    while (n > 0)
    {
        if (n % 2 != 0)
        {
            res = (res * (x) % m) % m;
        }

        x = ((x) % m * (x) % m) % m;
        n = n >> 1;
    }

    cout << res << endl;

    return 0;
}