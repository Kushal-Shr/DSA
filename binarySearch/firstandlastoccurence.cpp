// finds the first and last occurrence of the element in array

#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{
    int even[] = {1, 2, 3, 3, 5};

    cout << "First Occurence of 3 is " << firstOcc(even, 5, 3) << endl;
    cout << "Last Occurence of 3 is " << lastOcc(even, 5, 3) << endl;

    cout << "Number of Occurence of 2 is " << lastOcc(even, 5, 2) - firstOcc(even, 5, 2) + 1 << endl;

    return 0;
}