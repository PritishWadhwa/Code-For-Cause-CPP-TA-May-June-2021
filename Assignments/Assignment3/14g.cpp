class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int ans = 0;
        int j = 0;
        for (int i = grid.size() - 1; i >= 0; i--)
        {
            while (j < grid[0].size() && grid[i][j] >= 0)
            {
                j++;
            }
            if (j >= grid[0].size())
            {
                break;
            }
            ans += (grid[i].size() - j);
        }
        return ans;
    }
};