#include <iostream>
#include <string>

using namespace std;

bool check(string s, int i)
{
    if (i == s.length())
    {
        return true;
    }
    if (i == 0)
    {
        if (s[i] != 'a')
        {
            return false;
        }
        else
        {
            return check(s, i + 1);
        }
    }
    if (s[i - 1] == 'a')
    {
        if (s[i] == '\0' || s[i] == 'a' || s[i] == 'b')
        {

        }
    }
    else
    {
        return check(s, i + 1);
    }

}

int main()
{
    string s = "abba";
    cout << check(s, 0) << endl;
    return 0;
}