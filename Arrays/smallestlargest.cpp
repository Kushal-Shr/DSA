#include <iostream>

using namespace std;

int main()
{
    // Initializing the array
    int arr[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    // Storing the first element as both smallest and largest
    int smallest = arr[0],
        largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The smallest number is : " << smallest << endl;
    cout << "The largest number is : " << largest << endl;

    return 0;
}