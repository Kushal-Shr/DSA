// sorts the array by selecting and swapping the elements with each other

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min_idx = i;
        for (int j = i; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    vector<int> arr = {5, 3, 6, 7, 2, 9, 4};

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    selectionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}