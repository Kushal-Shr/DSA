#include <iostream>

using namespace std;

void merge(int *arr, int s, int e)
{
    int m = (s + e) / 2;

    int len1 = m - s + 1;
    int len2 = e - m;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = m + 1;

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    int i = 0, j = 0;

    k = s;

    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
            arr[k++] = first[i++];

        else
            arr[k++] = second[j++];
    }

    while (i < len1)
        arr[k++] = first[i++];

    while (j < len2)
        arr[k++] = second[j++];

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    int m = (s + e) / 2;

    if (s >= e)
        return;

    mergeSort(arr, s, m);

    mergeSort(arr, m + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[5] = {45, 2, 4, 6, 2};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, 0, 5 - 1);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}