class Solution
{
public:
    int maxPower(string s)
    {
        int ans = 0;
        int start = 0, end = 0;
        while (end < s.length())
        {
            while (s[start] == s[end])
            {
                end++;
            }
            ans = max(ans, end - start);
            start = end;
        }
        return ans;
    }
};