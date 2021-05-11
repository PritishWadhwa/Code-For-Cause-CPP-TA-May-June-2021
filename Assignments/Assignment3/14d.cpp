class Solution
{
public:
    int oddCells(int m, int n, vector<vector<int>> &indices)
    {
        int col[m];
        int row[n];
        memset(col, 0, sizeof(col));
        memset(row, 0, sizeof(row));
        for (int i = 0; i < indices.size(); i++)
        {
            col[indices[i][0]]++;
            row[indices[i][1]]++;
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((col[i] + row[j]) % 2 != 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};