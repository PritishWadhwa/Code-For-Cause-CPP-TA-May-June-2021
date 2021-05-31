class Solution
{
public:
    int longestValidParentheses(string s)
    {
        stack<char> paran;
        stack<int> id;
        id.push(-1);
        int ans = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (paran.empty())
            {
                paran.push(s[i]);
                id.push(i);
            }
            else if (s[i] == ')' && paran.top() == '(')
            {
                paran.pop();
                id.pop();
                ans = max(ans, i - id.top());
            }
            else
            {
                paran.push(s[i]);
                id.push(i);
            }
        }
        return ans;
    }
};