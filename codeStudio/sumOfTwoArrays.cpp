// finds the sum of elements of two arrays for example: a1 = {4, 5, 1} and a2 = {3, 4, 5} will give 451 + 345 = 796 and will return {7, 9, 6}

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};

    int a_int = 0, b_int = 0;
    int x = 0, y = 0;

    for (int i = 0; i < a.size(); i++)
    {
        a_int = (a_int * 10) + a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        b_int = (b_int * 10) + b[i];
    }

    int sum = a_int + b_int;

    vector<int> result;

    while (sum > 0)
    {
        result.push_back(sum % 10);
        sum /= 10;
    }

    reverse(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}