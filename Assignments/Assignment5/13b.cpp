class Solution
{
public:
    void sumHelper(vector<int> arr, int i, int tgt, vector<int> curr, int sum, vector<vector<int>>& ans)
    {
        if (sum == tgt)
        {
            ans.push_back(curr);
            return;
        }
        if (i == arr.size())
        {
            return;
        }
        for (i; i < arr.size(); i++)
        {
            if (sum + arr[i] > tgt)
            {
                return;
            }
            if (sum + arr[i] <= tgt)
            {
                vector<int> val = curr;
                val.push_back(arr[i]);
                sumHelper(arr, i, tgt, val, sum + arr[i], ans);
            }
        }

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> curr;
        sort(candidates.begin(), candidates.end());
        sumHelper(candidates, 0, target, curr, 0, ans);
        return ans;
    }
};