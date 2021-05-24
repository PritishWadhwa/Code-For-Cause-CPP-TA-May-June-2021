class Solution
{
public:

    void helpParan(int n, vector<string>& ans, int o, int e, string curr)
    {
        if (curr.length() == n * 2 && o == n)
        {
            ans.push_back(curr);
            return;
        }
        if (o > n)
        {
            return;
        }
        if (e > o)
        {
            return;
        }
        curr.push_back('(');
        helpParan(n, ans, o + 1, e, curr);
        curr.pop_back();
        curr.push_back(')');
        helpParan(n, ans, o, e + 1, curr);
        curr.pop_back();
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        helpParan(n, ans, 0, 0, "");
        return ans;
    }
};