class Solution
{
public:
    int numIdenticalPairs(vector<int>& nums)
    {
        map<int, int> freq;
        int ans = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            freq[nums[i]]++;
            ans += freq[nums[i]] - 1;
        }
        return ans;
    }
};