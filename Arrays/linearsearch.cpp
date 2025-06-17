#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    int target = 8;

    int target_index = linearSearch(arr, size, target);

    if (target_index != -1)
        cout << "The " << target << " is in the index " << target_index << endl;

    return 0;
}