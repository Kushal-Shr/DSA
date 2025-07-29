#include <iostream>

using namespace std;

int main()
{
    char name[100];

    cout << "Enter your name: ";
    cin.getline(name, 100);

    int size = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        size++;
    }

    cout << size << endl;

    return 0;
}