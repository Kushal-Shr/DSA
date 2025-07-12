// A
// B C
// D E F
// G H I J

#include <iostream>

using namespace std;

int main()
{
    int row = 4;
    int col = 4;

    int i = 0;
    char ch = 'A';

    while (i < row)
    {
        int j = 0;

        while (j <= i)
        {
            cout << ch++ << " ";
            j++;
        }

        cout << endl;

        i++;
    }

    return 0;
}