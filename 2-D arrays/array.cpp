#include <iostream>

using namespace std;

int main()
{
    // creating a 2D array of size 3x4
    int arr1[3][4];
    int arr2[3][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 0, 1, 2}};

    // taking input for the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
            cin >> arr1[i][j];
        }
    }

    // displaying the 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // displaying the predefined 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}