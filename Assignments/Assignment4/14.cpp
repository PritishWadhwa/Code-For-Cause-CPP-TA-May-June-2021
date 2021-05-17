#include <iostream>
#include <string>

using namespace std;

bool isBalanced(string s, int i, string ans)
{
    if (i == s.length())
    {
        if (ans == "")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (s[i] == '(' || s[i] == '[' || s[i] == '{')
    {
        return isBalanced(s, i + 1, ans + s[i]);
    }
    if (s[i] == ')' || s[i] == ']' || s[i] == '}')
    {
        char ch;
        if (s[i] == ')')
        {
            ch = '(';
        }
        else if (s[i] == '}')
        {
            ch = '{';
        }
        else
        {
            ch = '[';
        }
        if (ans.length() > 0 && ans[ans.length() - 1] == ch)
        {
            return isBalanced(s, i + 1, ans.substr(0, ans.length() - 1));
        }
        else
        {
            return false;
        }
    }
    else
    {
        return isBalanced(s, i + 1, ans);
    }
}

int main()
{
    string s;
    cin >> s;
    bool ans = isBalanced(s, 0, "");
    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}