// binary search

#include <iostream>
#include <vector>

using namespace std;

int binary_search(vector<int> &arr, int size, int target)
{
    int start = 0,
        end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;

        else if (arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;

        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{
    vector<int> even = {2, 4, 6, 8, 12, 18};
    vector<int> odd = {3, 8, 11, 14, 16};

    int idx = binary_search(even, 6, 18);

    cout << idx << endl;

    return 0;
}