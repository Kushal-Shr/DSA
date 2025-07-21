// finds the pivot value of a sorted rotated array

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

int main()
{
    vector<int> arr = {8, 10, 17, 1, 3};

    cout << findPivot(arr) << endl;

    return 0;
}