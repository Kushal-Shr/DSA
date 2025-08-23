#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSafe(vector<vector<int>> &maze, int x, int y, vector<vector<bool>> &visited)
{
    int n = maze.size();
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == false && maze[x][y] == 1)
        return true;
    else
        return false;
}

void solve(vector<vector<int>> &maze, vector<string> &ans, string output, int x, int y, vector<vector<bool>> &visited)
{
    int n = maze.size();
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(output);
        return;
    }

    visited[x][y] = 1;

    // down
    int newx = x + 1;
    int newy = y;

    if (isSafe(maze, newx, newy, visited))
    {
        output.push_back('D');
        solve(maze, ans, output, newx, newy, visited);
        output.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;

    if (isSafe(maze, newx, newy, visited))
    {
        output.push_back('R');
        solve(maze, ans, output, newx, newy, visited);
        output.pop_back();
    }

    // up
    newx = x - 1;
    newy = y;

    if (isSafe(maze, newx, newy, visited))
    {
        output.push_back('U');
        solve(maze, ans, output, newx, newy, visited);
        output.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;

    if (isSafe(maze, newx, newy, visited))
    {
        output.push_back('L');
        solve(maze, ans, output, newx, newy, visited);
        output.pop_back();
    }

    visited[x][y] = false;
}

vector<string> ratInMaze(vector<vector<int>> &maze)
{
    // code here
    int n = maze.size();
    vector<string> ans;
    string output;
    int x = 0, y = 0;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    if (maze[n - 1][n - 1] == 0 || maze[0][0] == 0)
        return ans;

    solve(maze, ans, output, x, y, visited);

    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> ans = ratInMaze(maze);

    for (auto &val : ans)
        cout << val << endl;

    return 0;
}