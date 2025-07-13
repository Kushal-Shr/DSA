//       *
//     * *
//   * * *
// * * * *

#include <iostream>

using namespace std;

int main()
{
    int row = 4;
    int col = 4;

    int i = 0;

    while (i < row)
    {
        // space
        int j = 0;

        while (j < col - 1)
        {
            cout << "  ";
            j++;
        }

        col--;

        // stars
        int k = 0;

        while (k <= i)
        {
            cout << "* ";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}