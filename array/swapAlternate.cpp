// swaps the each pair in the array

#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b)
{
    int buc = a;
    a = b;
    b = buc;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < arr.size() - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}