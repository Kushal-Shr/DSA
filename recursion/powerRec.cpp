#include <iostream>

using namespace std;

int calcPower(int a, int b)
{
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    int ans = calcPower(a, b / 2);

    if (b % 2 == 0)
        return ans * ans;
    else
        return ans * ans * a;
}

int main()
{
    int a, b;

    cout << "Enter the base: ";
    cin >> a;

    cout << "Enter the power: ";
    cin >> b;

    int ans = calcPower(a, b);

    cout << ans;

    return 0;
}