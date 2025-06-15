#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }

        for (int k = n; k > i; k--)
        {
            cout << num << " ";
        }

        num++;
        cout << endl;
    }
}