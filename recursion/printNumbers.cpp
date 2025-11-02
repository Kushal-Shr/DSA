#include <bits/stdc++.h>

using namespace std;

void printNums(int n)
{
    if (n == 1)
    {
        cout << 1 << " ";
        return;
    }

    printNums(n - 1);
    cout << n << " ";
}

int main()
{
    int n;
    cin >> n;

    printNums(n);

    return 0;
}