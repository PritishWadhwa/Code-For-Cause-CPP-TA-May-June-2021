#include<iostream>
#include<vector>
using namespace std;

vector <string> allSubsetsWithReturnType(vector<int>& arr, int id)
{
    if (id == arr.size())
    {
        vector<string>base;
        base.push_back("");
        return base;
    }
    vector<string> ans = allSubsetsWithReturnType(arr, id + 1);
    vector<string> fans;
    for (int i = 0;i < arr.size();i++)
    {
        fans.push_back(ans[i]);
    }
    for (int i = 0;i < ans.size();i++)
    {
        fans.push_back(to_string(arr[id]) + ans[i]);
    }
    return fans;
}

void allSubsetsWithReturnType()
{
    vector<int>arr = { 1,2,3 };
    vector<string>ans1 = allSubsetsWithReturnType(arr, 0);
    for (int i = 0; i < ans1.size(); i++)
    {
        cout << ans1[i];
    }
}

int main()
{
    allSubsetsWithReturnType();
    return 0;
}
