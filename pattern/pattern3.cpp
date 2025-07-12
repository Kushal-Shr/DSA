// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <iostream>

using namespace std;

int main()
{
    int row = 4;
    int col = 4;

    int i = 0;

    while (i < row)
    {
        int j = 0;
        while (j < col)
        {
            cout << j + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}