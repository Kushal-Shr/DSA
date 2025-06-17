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

    return 0;
}