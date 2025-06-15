#include <iostream>

using namespace std;

int main()
{
    // Creation of an array
    int marks[5] = {99, 95, 96, 91, 93}; // Array creation with initialization

    // Alternatively, you can also use:
    // int marks[] = {99, 95, 96, 91, 93}; Array creation without specifying size

    // Accessing elements of the array
    cout << marks[0] << endl; // Output: 99
    cout << marks[1] << endl; // Output: 95
    cout << marks[2] << endl; // Output: 96
    cout << marks[3] << endl; // Output: 91
    cout << marks[4] << endl; // Output: 93

    // Looping through the array
    for (int i = 0; i < sizeof(marks); i++)
    {
        cout << marks[i] << endl; // Output each element of the array
    }

    return 0;
}