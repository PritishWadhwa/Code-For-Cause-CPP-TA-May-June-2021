#include <bits/stdc++.h>

using namespace std;

int perfectness(int k, string s)
{
    int ac = 0, bc = 0;
    int st = 0, e = 0;
    int ans = 0;
    while (e < s.length())
    {
        if (s[e] == 'a')
        {
            ac++;
        }
        else
        {
            bc++;
        }
        if (min(ac, bc) <= k)
        {
            ans = max(ans, e - st + 1);
        }
        else
        {
            while (min(ac, bc) > k)
            {
                if (s[st] == 'a')
                {
                    ac--;
                }
                else
                {
                    bc--;
                }
                st++;
            }
            ans = max(ans, e - st + 1);
        }
        e++;
    }
    return ans;
}

int main()
{
    int k;
    cin >> k;
    string s;
    cin >> s;
    cout << perfectness(k, s);
    return 0;
}