#include <iostream>

using namespace std;

void sayDigit(int n)
{
    string digits[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n == 0)
        return;

    sayDigit(n / 10);
    cout << digits[n % 10] << " ";
}

int main()
{
    int n = 412;

    sayDigit(n);

    return 0;
}