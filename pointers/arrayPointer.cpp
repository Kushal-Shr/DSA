#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Address of the first element of the array: " << arr << endl;
    cout << "Address of the first element of the array: " << &arr[0] << endl;
    cout << "Address of the second element of the array: " << &arr[1] << endl;

    cout << *(arr + 2) << endl;

    return 0;
}