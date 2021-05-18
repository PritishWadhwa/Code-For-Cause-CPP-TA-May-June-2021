class Solution
{
public:

    void sumHelper(vector<int> arr, int i, vector<int> curr, int sum, int tgt, set<vector<int>>& ans)
    {
        if (sum == tgt)
        {
            sort(curr.begin(), curr.end());
            ans.insert(curr);
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
                sumHelper(arr, i + 1, val, sum + arr[i], tgt, ans);
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> ans1;
        vector<int> curr;
        vector<vector<int>> ans;
        int sum = 0;
        for (auto i : candidates)
        {
            sum += i;
        }
        if (sum < target)
        {
            return ans;
        }
        sumHelper(candidates, 0, curr, 0, target, ans1);
        for (auto i : ans1)
        {
            ans.push_back(i);
        }
        return ans;
    }

};