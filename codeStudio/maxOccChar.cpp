//  finds out the maximum occurring character in a string

#include <iostream>
#include <cctype>

using namespace std;

char maxOccChar(string s)
{
    int arr[26] = {0};
    int max_occ = 0;
    char ans = 'a';

    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);

        arr[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > max_occ)
        {
            max_occ = arr[i];
            ans = 'a' + i;
        }
    }

    return ans;
}

int main()
{
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << maxOccChar(s) << endl;

    return 0;
}