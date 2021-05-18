class Solution
{
public:

    void genComb(int n, int i, vector<int> curr, int k, vector<vector<int>>& ans)
    {
        if (curr.size() == k)
        {
            ans.push_back(curr);
            return;
        }
        if (i == n)
        {
            return;
        }
        for (; i < n; i++)
        {
            curr.push_back(i + 1);
            genComb(n, i + 1, curr, k, ans);
            curr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        set<vector<int>> ans1;
        vector<vector<int>> ans;
        vector<int> curr;
        genComb(n, 0, curr, k, ans);
        return ans;
    }
};