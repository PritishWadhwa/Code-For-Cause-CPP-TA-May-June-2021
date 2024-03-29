class Solution
{
public:
    bool isValid(string s)
    {
        unordered_map<char, char> pair;
        pair.reserve(3);
        pair[')'] = '(';
        pair[']'] = '[';
        pair['}'] = '{';
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                if (st.top() == pair[s[i]])
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};