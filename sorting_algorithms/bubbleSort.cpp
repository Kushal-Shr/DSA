// sorts the array by swapping two alternate contiguous elements

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr)
{
    for (int i = arr.size(); i > 0; i--)
    {
        bool isSwapped = false;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false)
            break;
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

    bubbleSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}