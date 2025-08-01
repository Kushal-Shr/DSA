#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter string 1: ";
    cin.getline(str1, 100);

    cout << str1 << endl;

    cout << "Length of the string 1: " << strlen(str1) << endl;

    cout << "Enter string 2: ";
    cin.getline(str2, 100);

    cout << str2 << endl;

    cout << "Length of the string 2: " << strlen(str2) << endl;

    cout << "Comparing str1 and str2: " << strcmp(str1, str2) << endl;

    char str3[100];

    strcpy(str3, str1);

    cout << "Copying str1 to str3: " << str3 << endl;

    return 0;
}