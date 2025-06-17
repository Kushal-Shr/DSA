#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 1},
        size1 = 6;
    int arr2[] = {6, 7, 3, 1},
        size2 = 4;

    for (int i = 0; i < size1; i++)
    {
        int count = 0;

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }

        if (count > 0)
        {
            cout << arr1[i] << " ";
        }
    }
}