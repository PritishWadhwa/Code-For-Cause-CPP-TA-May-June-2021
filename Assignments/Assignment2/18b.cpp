class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int maxVal = -1;
        for (int i = 0; i < candies.size(); i++)
        {
            maxVal = max(maxVal, candies[i]);
        }
        vector<bool> ans(candies.size(), false);
        for (int i = 0; i < candies.size(); i++)
        {
            if (maxVal - candies[i] <= extraCandies)
            {
                ans[i] = true;
            }
        }
        return ans;
    }
};