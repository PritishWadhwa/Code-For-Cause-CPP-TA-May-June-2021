class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> ans2;
        ans2.reserve(nums2.size());
        stack<int> st;
        for (int i = 0; i < nums2.size(); i++)
        {
            ans2[nums2[i]] = -1;

            while (!st.empty() && nums2[st.top()] < nums2[i])
            {
                ans2[nums2[st.top()]] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            nums1[i] = ans2[nums1[i]];
        }
        return nums1;
    }
};