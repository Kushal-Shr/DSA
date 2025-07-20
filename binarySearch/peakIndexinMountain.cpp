#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
            s = mid + 1;
        else
            e = mid;
    }
    return s;
}

int main()
{
    vector<int> arr = {24, 69, 100, 99, 79, 78, 67, 36, 26, 19};

    cout << peakIndexInMountainArray(arr) << endl;

    return 0;
}