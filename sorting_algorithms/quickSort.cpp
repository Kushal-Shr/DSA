#include <iostream>

using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[0];

    int pivotIdx = 0;

    int scount = 0;

    for (int i = 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            scount++;
        }
    }

    pivotIdx = scount;

    swap(arr[0], arr[pivotIdx]);

    int i = s,
        j = e;

    while (i < pivotIdx && j > pivotIdx)
    {
        if (arr[i] < pivot)
            i++;
        if (arr[j] >= pivot)
            j--;
        else if (arr[j] < pivot && arr[i] > pivot)
            swap(arr[i++], arr[j--]);
    }

    return pivotIdx;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {6, 4, 2, 5, 6};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, 4);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}