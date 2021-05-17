

#include <iostream>
#include<vector>
#include <string>


using namespace std;
vector<string> allsubset(vector<int>& arr, int id)
{
    if (id == arr.size())
    {
        vector<string>base;
        base.push_back("");
        return base;
    }
    vector<string>ans = allsubset(arr, id + 1);
    vector<string>fans;
    for (int i = 0;i < ans.size();i++)
    {
        fans.push_back(ans[i]);
    }
    for (int i = 0;i < ans.size();i++)
    {
        fans.push_back(to_string(arr[id]) + ans[i]);
    }
    return fans;
}


void allsubset()
{
    vector<int>arr = { 1,2,3 };
    allsubset(arr, 0);
}

int main()
{
    allsubset();

    return 0;
}

