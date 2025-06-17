#include <iostream>

using namespace std;

void swap(int &val1, int &val2)
{
    int rev;

    rev = val1;
    val1 = val2;
    val2 = rev;
}

void reverseArray(int arr[], int size)
{
    int start = 0,
        end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    cout << "The original array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "The reversed array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}