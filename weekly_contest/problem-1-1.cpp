// Ninja took you to an apple store where there is 'N' number of different apples present in the store and ith apple cost 'ARR[i]' coins. It is pre-decided that you have to buy all of them. You would be given a coupon by Ninja that allows you to buy ‘M’ apples while paying only for 'M - 1' most expensive apples. Thus, you will get the cheapest apple for free. You can use the coupon once only.

// Now, Ninja requested you to tell the minimum total coins required to buy all apples if the coupon is used optimally. It is necessary to use the coupon and have to select ‘M’ apples for using it.

// EXAMPLE:
// Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 3], ‘M’ = 3.
// Output: 12
// Explanation: We will select apples present in indices(1 based) 1, 3, and 5. So, we will get apple at index five for free. Thus, the total coins that should be paid are 5 + 2 + 4 + 1 = 12.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= ‘T’ <= 10
// 1 <= ‘M’ <= ‘N’<= 10^4
// 1 <= ‘ARR[i]’ <= 10^9

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long appleAndCoupon(int n, int m, vector<int> arr)
{
    sort(arr.begin(), arr.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    sum -= arr[n - m];

    return sum;
}

int main()
{
    vector<int> arr = {10, 34, 12, 14, 54, 12, 15};
    int m = 4;
    cout << appleAndCoupon(arr.size(), m, arr);
    return 0;
}