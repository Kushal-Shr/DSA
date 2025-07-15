// an array has elements which has all unique value except 1 find the number with duplicate value

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {8, 7, 2, 5, 4, 7, 1, 3, 6};

    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }

    cout << ans;

    return 0;
}