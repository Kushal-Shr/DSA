// finds the unique number from the pairs in an array

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {2, 3, 1, 6, 3, 6, 2};
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = (ans ^ arr[i]);
    }

    cout << ans << endl;
    return 0;
}