// it reverses the array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    int i = 0;
    int j = arr.size() - 1;

    while (i <= arr.size() / 2)
    {
        int buc = arr[i];
        arr[i] = arr[j];
        arr[j] = buc;
        i++;
        j--;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}