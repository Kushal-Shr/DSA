// replaces all the spaces with '@40'

#include <iostream>
#include <cstring>

using namespace std;

string replaceSpace(string &str)
{
    string new_string = "";

    for (char ch : str)
    {
        if (ch == ' ')
        {
            new_string.push_back('@');
            new_string.push_back('4');
            new_string.push_back('0');
        }

        else
        {
            new_string.push_back(ch);
        }
    }

    return new_string;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Original string: " << str << endl;

    string new_string = replaceSpace(str);

    cout << "Modified string: " << new_string << endl;

    return 0;
}