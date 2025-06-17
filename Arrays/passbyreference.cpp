#include <iostream>
using namespace std;

void changeArr(int arr[], int size) // arrays passes by reference when passed in a function
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += 5;
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int size = 3;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    changeArr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}