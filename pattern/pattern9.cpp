//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int row = 4;
    int s_col = 3;

    int i = 0;

    while (i < row)
    {
        // space
        int j = 0;

        while (j < s_col)
        {
            cout << "  ";
            j++;
        }

        s_col--;

        // numbers in left
        int k = 0;

        while (k < i)
        {
            cout << k + 1 << " ";
            k++;
        }

        // numbers in right
        int l = 0;
        int count = i + 1;

        while (l <= i)
        {
            cout << count << " ";
            l++;
            count--;
        }

        cout << endl;
        i++;
    }
    return 0;
}