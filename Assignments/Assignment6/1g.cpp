class Solution
{
public:

    string helper(string& s, int& i)
    {
        string ans = "";
        while (i < s.length() && s[i] != ']')
        {
            if (isdigit(s[i]))
            {
                int n = 0;
                while (i < s.length() && isdigit(s[i]))
                {
                    n = 10 * n + (s[i] - '0');
                    i++;
                }
                i++;
                string temp = helper(s, i);
                i++;
                for (int j = 0; j < n; j++)
                {
                    ans += temp;
                }
            }
            else
            {
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
    string decodeString(string s)
    {
        int i = 0;
        return helper(s, i);
    }
};