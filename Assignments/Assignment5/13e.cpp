class Solution
{
public:

    int goldAmount(vector<vector<int>>& grid, int m, int n, int i, int j, vector<vector<int>>& bg)
    {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || bg[i][j] == 1)
        {
            return 0;
        }
        else
        {
            int val = grid[i][j];
            // grid[i][j] = 0;
            bg[i][j] = 1;
            int amt1 = goldAmount(grid, m, n, i, j - 1, bg);
            int amt2 = goldAmount(grid, m, n, i, j + 1, bg);
            int amt3 = goldAmount(grid, m, n, i - 1, j, bg);
            int amt4 = goldAmount(grid, m, n, i + 1, j, bg);
            // grid[i][j] = val;
            bg[i][j] = 0;
            return max(amt1 + val, max(amt2 + val, max(amt3 + val, amt4 + val)));
        }
    }

    int getMaximumGold(vector<vector<int>>& grid)
    {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> bg(n, vector<int>(m, 0));
        // fill(bg.begin(), bg.end(), 0);
        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         bg[i][j] = 0;
        //     }
        // }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != 0)
                {
                    int val = goldAmount(grid, m, n, i, j, bg);
                        // bg[i][j] = 1;
                    ans = max(ans, val);
                }

            }
        }
        return ans;
    }
};