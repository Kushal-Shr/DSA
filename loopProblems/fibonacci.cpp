// prints the fibonacci series with n number of numbers

#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    int sum = 0;

    for (int i = 0; i < n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;

        cout << sum << " ";
    }

    return 0;
}