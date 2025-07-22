// gives the book with minimum of the maximum number of pages to each students

#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int sum = 0;
    int studentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }

        else
        {
            studentCount += 1;

            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            sum = 0;
            sum += arr[i];
        }
    }

    return true;
}

int allocateBook(vector<int> &arr, int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid;
    int ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
            s = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int n = 4;
    int m = 2;

    cout << allocateBook(arr, n, m) << endl;

    return 0;
}