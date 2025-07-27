//

#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    insertionSort(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}