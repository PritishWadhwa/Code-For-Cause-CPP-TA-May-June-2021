class Solution
{
public:
    int maxProfit(vector<int>& prices)
    {
        int maxTillNow[prices.size()];
        int maxVal = prices[prices.size() - 1];
        for (int i = prices.size() - 1; i >= 0; i--)
        {
            maxVal = max(maxVal, prices[i]);
            maxTillNow[i] = maxVal;
        }
        int ans = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            ans = max(ans, maxTillNow[i] - prices[i]);
        }
        return ans;
    }
};