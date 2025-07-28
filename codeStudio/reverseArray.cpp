#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {11, 7, 3, 12, 4, 3, 5, 2, 2, 5, 6, 7, 2};

    int s = 0, e = arr.size() - 1;

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