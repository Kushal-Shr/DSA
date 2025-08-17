#include <iostream>

using namespace std;

int getSum(int *arr, int size)
{
    if (size == 1)
        return *arr;

    else
        return *arr + getSum(arr + 1, size - 1);
}

int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter a number: ";
        cin >> arr[i];
    }

    int sum = getSum(arr, n);

    cout << sum << endl;

    return 0;
}