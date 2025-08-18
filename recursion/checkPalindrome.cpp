#include <iostream>

using namespace std;

bool checkPalidrome(string str, int i, int n)
{
    if (i > n)
        return true;

    if (str[i] != str[n])
        return false;
    else
        return checkPalidrome(str, i + 1, n - 1);
}

int main()
{
    string str = "abbccbba";

    bool isPalidrome = checkPalidrome(str, 0, str.size() - 1);

    cout << isPalidrome << endl;

    return 0;
}