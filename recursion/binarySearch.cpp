#include <iostream>

using namespace std;

bool binarySearch(int *arr, int size, int target)
{
    int s = 0, e = size - 1;
    int m = (s + e) / 2;

    if (s > e)
        return false;

    if (arr[m] == target)
        return true;

    else if (arr[m] > target)
        return binarySearch(arr + m, size, target);

    else
        return binarySearch(arr, size - m - 1, target);
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int target;
    cout << "Enter the number you want to search: ";
    cin >> target;

    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> *(arr + i);
    }

    cout << binarySearch(arr, size, target) << endl;

    return 0;
}