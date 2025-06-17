#include <iostream>
#include <vector> // header file for vector

using namespace std;

int main()
{
    // creation of vector
    vector<int> vec = {1, 2, 3};

    // or
    // vector<int> vec(5, 0) --> this will create a vector of 5 elements with 0 in each space.

    // loop in vector
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // vector functions

    // size --> .size()
    int size = vec.size();

    cout << "Size: " << size << endl;

    // append --> .push_back()
    vec.push_back(4);

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // pop --> .pop_back()
    vec.pop_back();

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // get the first element --> .front()
    cout << vec.front() << endl;

    // get the last element --> .back()
    cout << vec.back() << endl;

    // get element at a certain position --> .at()
    cout << vec.at(1) << endl;

    return 0;
}