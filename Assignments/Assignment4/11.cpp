#include <iostream>
#include <string>

using namespace std;

void printAscii(string s, int i, string ans)
{
    if (i == s.length())
    {
        cout << ans << endl;
        return;
    }
    printAscii(s, i + 1, ans);
    printAscii(s, i + 1, ans + s[i]);
    printAscii(s, i + 1, ans + to_string(int(s[i])));
}

int countAscii(string s, int i, string ans)
{
    if (i == s.length())
    {
        return 1;
    }
    return countAscii(s, i + 1, ans) + countAscii(s, i + 1, ans + s[i]) + countAscii(s, i + 1, ans + to_string(int(s[i])));
}

int main()
{
    string s;
    cin >> s;
    cout << countAscii(s, 0, "") << endl;
    printAscii(s, 0, "");
    return 0;
}