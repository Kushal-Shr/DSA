#include <iostream>

using namespace std;

int linearSearch(int *arr, int size, int target)
{
    if (size == 0)
        return -1;

    if (*arr == target)
        return *arr;

    else
        return linearSearch(arr + 1, size - 1, target);
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number: ";
        cin >> *(arr + i);
    }

    int ans = linearSearch(arr, size, target);

    cout << ans;

    return 0;
}