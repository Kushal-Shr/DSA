// searches through the sorted rotated array

#include <iostream>
#include <vector>

using namespace std;

int findPivot(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;

    while (s < e)
    {
        int m = (s + e) / 2;

        if (arr[m] >= arr[0])
        {
            s = m + 1;
        }

        else
        {
            e = m;
        }
    }

    return s;
}

int binarySearch(vector<int> &arr, int target, int s, int e)
{
    while (s <= e)
    {
        int m = (s + e) / 2;

        if (arr[m] == target)
        {
            return m;
        }

        else if (arr[m] > target)
        {
            e = m - 1;
        }

        else
        {
            s = m + 1;
        }
    }
}

int findNumber(vector<int> &arr, int target, int pivot)
{
    int s, e;

    if (target >= arr[0])
    {
        s = 0, e = pivot - 1;
    }

    else if (target < arr[0])
    {
        s = pivot, e = arr.size() - 1;
    }

    int ans = binarySearch(arr, target, s, e);

    return ans;
}

int main()
{
    vector<int> arr = {7, 9, 1, 2, 3};

    int pivot = findPivot(arr);

    int ans = findNumber(arr, 3, pivot);

    cout << ans << endl;

    return 0;
}