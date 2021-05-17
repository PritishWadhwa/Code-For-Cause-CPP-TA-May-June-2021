#include <iostream>
#include <string>

using namespace std;

void separate(string s, int i, string ans)
{
    if (i == s.length())
    {
        cout << ans << endl;
        return;
    }
    if (s[i] == s[i - 1])
    {
        separate(s, i + 1, ans + "-" + s[i]);
    }
    else
    {
        separate(s, i + 1, ans + s[i]);
    }
}

string sepStr(string s, int i)
{
    if (i == s.length())
    {
        return "";
    }
    if (i == 0)
    {
        return s[0] + sepStr(s, i + 1);
    }
    if (s[i] == s[i - 1])
    {
        string ans = "-";
        ans += s[i];
        return ans + sepStr(s, i + 1);
    }
    else
    {
        return s[i] + sepStr(s, i + 1);
    }
}

int main()
{
    string s;
    cin >> s;
    separate(s, 0, "");
    cout << sepStr(s, 0) << endl;
    return 0;
}