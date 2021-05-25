class Solution
{
public:

    void helper(int curr, int n, vector<int>& ans)
    {
        if (curr > n)
        {
            return;
        }
        ans.push_back(curr);
        helper(curr * 10, n, ans);
        if (curr % 10 != 9)
        {
            helper(curr + 1, n, ans);
        }
    }

    vector<int> lexicalOrder(int n)
    {
        vector<int> ans;
        helper(1, n, ans);
        return ans;
    }
};