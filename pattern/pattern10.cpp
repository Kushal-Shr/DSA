// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>

using namespace std;

int main()
{
    int row = 5;

    int i = 0;
    int count = 5;

    while (i < row)
    {
        // left number triangle

        int j = 0;

        while (j < count)
        {
            cout << j + 1 << " ";
            j++;
        }

        // left star triangle

        int k = 0;

        while (k < i * 2)
        {
            cout << "* ";
            k++;
        }

        // right number triangle

        int m = count;

        while (m >= 1)
        {
            cout << m << " ";
            m--;
        }

        count--;

        cout << endl;
        i++;
    }

    return 0;
}