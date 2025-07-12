// 1 1 1
// 2 2 2
// 3 3 3

#include <iostream>

using namespace std;

int main()
{
    int row = 3;
    int col = 3;

    int i = 0;

    while (i < row)
    {
        int j = 0;

        while (j < col)
        {
            cout << i + 1 << " ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}