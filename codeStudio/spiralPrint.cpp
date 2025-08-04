#include <iostream>

using namespace std;

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    int startRow = 0;
    int endCol = 3;
    int endRow = 3;
    int startCol = 0;

    int count = 0;
    int total = 4 * 4;

    while (count < total)
    {
        for (int i = startRow; count < total && i <= endCol; i++)
        {
            cout << arr[startRow][i] << " ";
            count++;
        }
        startRow++;

        for (int i = startRow; count < total && i <= endRow; i++)
        {
            cout << arr[i][endCol] << " ";
            count++;
        }
        endCol--;

        for (int i = endCol; count < total && i >= startCol; i++)
        {
            cout << arr[endRow][i] << " ";
            count++;
        }
        endRow--;

        for (int i = endRow; count < total && i >= startRow; i++)
        {
            cout << arr[i][startCol] << " ";
            count++;
        }
        startCol++;
    }
    return 0;
}