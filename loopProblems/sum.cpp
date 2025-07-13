// prints the sum of all numbers from 1 to n

#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum;

    return 0;
}