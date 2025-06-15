#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int binNum = 101;
    int power = 0;
    int decNum = 0;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum /= 10;

        decNum += rem * pow(2, power);
        power += 1;
    }

    cout << decNum;
    return 0;
}