class Solution
{
public:
    bool isLetter(char ch)
    {
        if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z'))
        {
            return true;
        }
        return false;
    }

    string reverseOnlyLetters(string S)
    {
        string ans = "";
        int j = S.length() - 1;
        int i = 0;
        while (i < S.length())
        {
            if (isLetter(S[i]))
            {
                while (!isLetter(S[j]))
                {
                    j--;
                }
                if (j >= 0)
                {
                    ans += S[j];
                }
                j--;
            }
            else
            {
                ans += S[i];
            }
            i++;
        }
        return ans;
    }
};