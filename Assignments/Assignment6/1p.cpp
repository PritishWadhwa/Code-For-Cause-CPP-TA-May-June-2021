class Solution
{
public:
    vector<int> mostCompetitive(vector<int>& nums, int k)
    {
        stack<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            if (st.empty())
            {
                st.push(nums[i]);
                continue;
            }
            if (st.top() < nums[i])
            {
                st.push(nums[i]);
            }
            else
            {
                while (!st.empty() && st.top() > nums[i] && (st.size() - 1 + nums.size() - i >= k))
                {
                    st.pop();
                }
                st.push(nums[i]);
            }
        }
        vector<int> temp, ans;
        while (!st.empty())
        {
            temp.push_back(st.top());
            st.pop();
        }
        reverse(temp.begin(), temp.end());
        for (int i = 0; i < k; i++)
        {
            ans.push_back(temp[i]);
        }
        return ans;
    }
};