#include <iostream>

using namespace std;

int main()
{
    int i = 5;
    int *ptr = &i;

    int **ptr2 = &ptr;

    cout << "Value in Ptr: " << *ptr << endl;
    cout << "Print Ptr: " << ptr << endl;
    cout << "Print address of Ptr: " << &ptr << endl;

    cout << "---- Double Pointer ----\n";

    cout << "Value in Ptr2: " << *ptr2 << endl;
    cout << "Value in Ptr2 in Ptr: " << **ptr2 << endl;
    return 0;
}