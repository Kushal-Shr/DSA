#include <iostream>
using namespace std;

int main()
{
    int decNum = 5;
    int binNum = 0;
    int power = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum = decNum / 2;

        binNum += rem * power;
        power *= 10;
    }

    cout << binNum;

    return 0;
}
