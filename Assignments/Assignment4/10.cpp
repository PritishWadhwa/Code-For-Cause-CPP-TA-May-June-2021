#include <iostream>
#include <string>

using namespace std;

int calcTwins(string s, int i)
{
    if (i >= s.length() - 2)
    {
        return 0;
    }
    else
    {
        if (s[i] == s[i + 2])
        {
            return 1 + calcTwins(s, i + 1);
        }
        else
        {
            return calcTwins(s, i + 1);
        }
    }
}

int main()
{
    string s;
    cin >> s;
    cout << calcTwins(s, 0);
}