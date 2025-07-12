// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>

using namespace std;

int main()
{
    int row = 3;
    int col = 3;

    int i = 0;
    int num = 1;

    while (i < row)
    {
        int j = 0;

        while (j < col)
        {
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;

        i++;
    }

    return 0;
}