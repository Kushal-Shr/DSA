#include <iostream>

using namespace std;

int count(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    return count(n - 1) + count(n - 2);
}

int main()
{
    int n = 5;
    int ans = count(n);
    cout << ans << endl;
    return 0;
}