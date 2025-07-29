#include <iostream>

using namespace std;

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin.getline(name, 20);

    cout << "Your name is: " << name << endl;

    return 0;
}