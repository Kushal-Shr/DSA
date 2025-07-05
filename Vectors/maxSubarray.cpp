#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int curr_sum = 0, max_sum = nums[0];

    for (int val : nums)
    {
        curr_sum += val;
        max_sum = max(max_sum, curr_sum);

        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }

    cout << "Max sum is: " << max_sum;

    return 0;
}