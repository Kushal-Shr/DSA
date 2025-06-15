#include <iostream>

using namespace std;

int main()
{
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest_index = 0,
        largest_index = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[smallest_index])
        {
            smallest_index = i;
        }
        if (arr[i] > arr[largest_index])
        {
            largest_index = i;
        }
    }

    cout << "The smallest number is at index: " << smallest_index << endl;
    cout << "The largest number is at index: " << largest_index << endl;

    return 0;
}