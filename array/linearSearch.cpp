// searches element in an array using linear search

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {5, 7, -1, 2, 10, 22, 5, 0, 5, 8};

    int size = arr.size();

    int num;

    bool found = false;

    cout << "Enter a number you want to search: ";
    cin >> num;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
            found = true;
    }

    if (found == true)
        cout << "Found YAYYYY!" << endl;
    else
        cout << "Not present" << endl;

    return 0;
}