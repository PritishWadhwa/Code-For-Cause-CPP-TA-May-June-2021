#include <iostream>
#include <vector>

using namespace std;

bool isValid(int n, int i, int j, vector<vector<char>>& grid)
{
    if (i >= 1 && j >= 2)
    {
        if (grid[i - 1][j - 2] == 'K')
        {
            return false;
        }
    }
    if (i >= 2 && j >= 1)
    {
        if (grid[i - 2][j - 1] == 'K')
        {
            return false;
        }
    }
    if (i >= 2 && j <= n - 2)
    {
        if (grid[i - 2][j + 1] == 'K')
        {
            return false;
        }
    }
    if (i >= 1 && j <= n - 3)
    {
        if (grid[i - 1][j + 2] == 'K')
        {
            return false;
        }
    }
    return true;
}


void nKnight(int n, int i, int j, int curr, vector<vector<vector<char>>>& ans, vector<vector<char>>& grid)
{
    if (curr == n)
    {
        ans.push_back(grid);
        return;
    }
    if (i == n && j == 0)
    {
        return;
    }
    if (j == n)
    {
        return nKnight(n, i + 1, 0, curr, ans, grid);
    }
    if (grid[i][j] == '0' && curr < n)
    {
        if (isValid(n, i, j, grid))
        {
            grid[i][j] = 'K';
            nKnight(n, i, j + 1, curr + 1, ans, grid);
            grid[i][j] = '0';
        }
        nKnight(n, i, j + 1, curr, ans, grid);
    }
}


int main()
{
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '0'));
    vector<vector<vector<char>>> ans;
    nKnight(n, 0, 0, 0, ans, grid);
    for (auto vec : ans)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}