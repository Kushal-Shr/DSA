// find the max and min from an array

#include <iostream>

using namespace std;

int get_min(int arr[], int size)
{
    int min = INT32_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int get_max(int arr[], int size)
{
    int max = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main()
{
    int size = 7;

    int arr[] = {2, 4, 6, 2, 1, 4, -1};

    int min_num = get_min(arr, size);
    int max_num = get_max(arr, size);

    cout << "Max: " << max_num << " and Min: " << min_num << endl;

    return 0;
}
