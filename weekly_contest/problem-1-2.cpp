// Ninja has an array 'ARR' consisting of 'N' integers. Your primary work is to split it into three parts so that each integer is a component of a single part only. Each part must be a consecutive contiguous subsegment of the original array and can also be empty. So, the sum of each part is denoted as 'S1', 'S2' and 'S3'. Ninja made the problem even harder by declaring a condition that 'S1' must be equal to 'S3' and 'S1' must be the maximum possible amongst all possible ways.

// The sum of the empty subsegment is 0.

// EXAMPLE:
// Input: 'N' = 5, ‘ARR’ = [5, 2, 4, 1, 4].
// Output: 5
// Explanation: We will split the array as [5], [2, 4] and [1, 4]. Thus, the maximum sum of the first part will be 5 and equal to the third part.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= ‘T’ <= 10
// 1 <= ‘N’<= 10^4
// 1 <= ‘ARR[i]’ <= 10^6

#include <iostream>
#include <vector>

using namespace std;

long long threeWaySplit(int n, vector<int> arr)
{
    // Write your code here.

    int s = 0;
    int e = arr.size() - 1;
    int s1 = arr[s], s2 = arr[e], s3 = 0;
    int ans = 0;

    while (s < e)
    {
        if (s1 == s2 && s < e)
        {
            ans = s1;
            e--;
            s++;
            s1 += arr[s], s2 += arr[e];
        }
        else if (s1 > s2)
        {
            e--;
            s2 += arr[e];
        }
        else
        {
            s++;
            s1 += arr[s];
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {10, 34, 12, 14, 54, 41, 15};

    cout << threeWaySplit(arr.size(), arr);

    return 0;
}