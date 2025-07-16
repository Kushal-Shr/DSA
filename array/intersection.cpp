// find the intersection between 2 arrays

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr1 = {1, 2, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 3};

    vector<int> ans = {};

    int i = 0, j = 0;

    while (i < arr1.size() || j < arr2.size())
    {
        if (arr1[i] < arr2[j])
            i++;
        if (arr1[i] > arr2[j])
            j++;
        if (arr1[i] == arr2[j])
        {
            if (i > j)
                ans.push_back(arr1[i]);
            else
                ans.push_back(arr2[j]);
            i++;
            j++;
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}