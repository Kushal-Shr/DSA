#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // size() --> gives the size of the array
    cout << arr.size() << endl;

    // at() --> works similar to indexing
    cout << arr.at(2) << endl;

    // empty() --> checks if the array is empty or not
    cout << arr.empty() << endl;

    // front() --> gives the first element
    cout << arr.front() << endl;

    // back() --> gives the last element
    cout << arr.back() << endl;

    return 0;
}