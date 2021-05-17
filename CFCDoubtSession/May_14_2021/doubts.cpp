#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void func(int n)
{
    cout << n + 1 << endl;
}

vector<int> fun2(int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(i);
    }
    return ans;
}

string fun3()
{
    return "Pritish";
}

int main()
{
    int n = 7;
    // func(n);
    // int a = fun(asdfa);
    vector<int> ans2 = fun2(n);
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i] << " " << endl;
    }
    string ans3 = fun3();
    cout << ans3 << endl;
    return 0;
}