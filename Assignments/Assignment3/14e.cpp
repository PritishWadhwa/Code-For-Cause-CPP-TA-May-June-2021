class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        while (k--)
        {
            int x = grid[grid.size() - 1][grid[0].size() - 1];
            for (int i = grid.size() - 1; i >= 0; i--)
            {
                for (int j = grid[0].size() - 1; j >= 0; j--)
                {
                    if (j == 0 && i > 0)
                    {
                        grid[i][j] = grid[i - 1][grid[0].size() - 1];
                    }
                    else if (j > 0)
                    {
                        grid[i][j] = grid[i][j - 1];
                    }
                }
            }
            grid[0][0] = x;
        }
        return grid;
    }
};