#include <iostream>

using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int size = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        size++;
    }

    int s = 0, e = size - 1;

    while (s < e)
    {
        if (str[s] != str[e])
        {
            cout << "The string is not a palindrome." << endl;
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }

    cout << "The string is a palindrome." << endl;

    return 0;
}