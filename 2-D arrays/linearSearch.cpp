#include <iostream>

using namespace std;

void linearSearch(int arr[3][4], int row, int col, int target)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found in row " << i + 1 << ", column " << j + 1 << endl;
            }
        }
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 0, 1, 2}};

    int target = 7;

    linearSearch(arr, 3, 4, target);

    return 0;
}