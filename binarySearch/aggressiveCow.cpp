#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int> arr, int n, int k, int m)
{
    int lastPos = arr[0];
    int cowCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] - lastPos >= m)
        {
            cowCount++;
            if (cowCount == k)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}

int findDistance(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    int s = 0;

    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int e = max;
    int m;
    int ans = -1;

    while (s <= e)
    {
        m = (s + e) / 2;

        if (isPossible(arr, n, k, m))
        {
            ans = m;
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {0, 3, 4, 7, 10, 9};
    int n = arr.size();
    int k = 4;

    cout << findDistance(arr, n, k);

    return 0;
}