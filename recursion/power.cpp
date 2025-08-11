#include <iostream>
#include <cmath>

using namespace std;

int power(int num, int p)
{
    if (p == 1)
        return num;

    else if (p > 1)
    {
        return num * pow(num, p - 1);
    }
}

int main()
{
    int num = 2;
    int pow = 5;

    int ans = power(num, pow);

    cout << ans << endl;

    return 0;
}