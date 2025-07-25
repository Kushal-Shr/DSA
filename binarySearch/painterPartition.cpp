// finds the maximum number of time k number of painter will take to paint a board

#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> arr, int n, int k, int m)
{
    int sum = 0;
    int painterCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= m)
        {
            sum += arr[i];
        }

        else
        {
            painterCount++;

            if (painterCount > k || arr[i] > m)
            {
                return false;
            }

            sum = 0;
            sum += arr[i];
        }
    }
    return true;
}

int maxTimeforPainting(vector<int> arr, int n, int k)
{
    int s = 0;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int e = sum;

    int m;
    int ans = -1;

    while (s <= e)
    {
        m = (s + e) / 2;

        if (isPossible(arr, n, k, m))
        {
            ans = m;
            e = m - 1;
        }

        else
        {
            s = m + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {5, 5, 5, 5};
    int n = 4;
    int k = 2;

    cout << maxTimeforPainting(arr, n, k) << endl;
    return 0;
}