// reverses the array from the given index to the end of the array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {11, 7, 3, 12, 4, 9, 10, 6};
    int m = 3;

    int s = m, e = arr.size() - 1;

    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++, e--;
    }
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}