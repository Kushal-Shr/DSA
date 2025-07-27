#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr; // the size of vector is 0 right now

    // size() --> gives the size of the vector
    cout << arr.size() << endl;

    // push_back() --> pushes the element at the end of the vector
    arr.push_back(0);
    cout << arr.size() << endl;

    arr.push_back(1);
    cout << arr.size() << endl;

    arr.push_back(2);
    cout << arr.size() << endl;

    // capacity() --> gives how many elements can the vector hold for the current size
    cout << "Capacity: " << arr.capacity() << endl;

    // at() --> works similar to indexing
    cout << arr.at(0) << endl;

    // front() and back() --> gives the first and last element respectively
    cout << "Front: " << arr.front() << endl;
    cout << "Back: " << arr.back() << endl;

    // pop_back() --> removes the last element of the vector
    arr.pop_back();
    cout << arr.size() << endl;

    // clear() --> clears the whole vector
    arr.clear();
    cout << arr.size() << endl;

    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);

    // loop can be used like this in vectors
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> arr2(5, 1); // creates a vector of size 5 with all 1s
    for (int num : arr2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}