// finds the square root of a number

#include <iostream>
#include <vector>

using namespace std;

int mySqrt(int x)
{
    int s = 0, e = x;
    long long int m;
    int ans = 0;

    while (s <= e)
    {
        m = (s + e) / 2;

        if ((m * m) < x)
        {
            ans = m;
            s = m + 1;
        }

        else if ((m * m) > x)
        {
            e = m - 1;
        }

        else
        {
            return m;
        }
    }

    return ans;
}

int main()
{

    cout << mySqrt(10);

    return 0;
}
