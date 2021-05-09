class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int ans = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int val = 0;
            for (auto j : accounts[i])
            {
                val += j;
            }
            ans = max(ans, val);
        }
        return ans;
    }
};