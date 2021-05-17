#include <iostream>
#include <string>

using namespace std;

string removeDupl(string s, int i)
{
    if (i == s.length())
    {
        return "";
    }
    if (i == 0)
    {
        return s[i] + removeDupl(s, i + 1);
    }
    if (s[i] == s[i - 1])
    {
        return removeDupl(s, i + 1);
    }
    return s[i] + removeDupl(s, i + 1);
}

int main()
{
    string s;
    cin >> s;
    cout << removeDupl(s, 0);
}