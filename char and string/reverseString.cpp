#include <iostream>

using namespace std;

int main()
{
    char name[100];

    cout << "Enter a message: ";
    cin.getline(name, 100);

    int size = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        size++;
    }

    int s = 0, e = size - 1;

    while (s < e)
    {
        swap(name[s], name[e]);
        s++, e--;
    }

    cout << "Reversed message: " << name << endl;

    return 0;
}