#include <iostream>

using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    cout << "Address of num: " << &num << endl;

    int *ptr = &num; // ptr is storing the address of num

    cout << *ptr << endl;

    return 0;
}