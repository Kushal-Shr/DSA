// *
// * *
// * * *
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
        int j = 0;

        while (j <= i)
        {
            cout << "* ";
            j++;
        }

        cout << endl;
        i++;
    }

    return 0;
}