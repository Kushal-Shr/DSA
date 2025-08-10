#include <iostream>

using namespace std;

int main()
{
    int row;
    int col;

    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the col: ";
    cin >> col;

    // creating 2D array
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // taking inputs
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter a number: ";
            cin >> arr[i][j];
        }
    }

    // giving outputs
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}