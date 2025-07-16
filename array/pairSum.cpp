// get the pair that sums up to target

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 9;

    vector<vector<int>> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> temp;

                temp.push_back(arr[i]);
                temp.push_back(arr[j]);

                ans.push_back(temp);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}