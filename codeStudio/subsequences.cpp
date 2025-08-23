#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int idx, vector<string> &ans)
{
    if (idx >= str.length())
    {
        ans.push_back(output);
        return;
    }

    // exclude current char
    solve(str, output, idx + 1, ans);

    // include current char
    output.push_back(str[idx]); // valid now because output is a string
    solve(str, output, idx + 1, ans);
}

int main()
{
    string str = "abc";

    vector<string> ans;
    string output = "";
    int idx = 0;

    solve(str, output, idx, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}
