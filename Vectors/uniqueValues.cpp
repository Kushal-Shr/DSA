#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    int size = 5;

    int ans = 0;

    for (int val : nums)
    {
        ans = ans ^ val;
    }

    return ans;
}