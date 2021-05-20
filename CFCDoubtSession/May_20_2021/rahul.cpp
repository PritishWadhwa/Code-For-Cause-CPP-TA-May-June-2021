
#include <iostream>
#include<vector>
using namespace std;
vector<string> subwithreturn(vector<int>& arr, int id)
{
    if (id == arr.size())
    {
        vector<string>base;
        base.push_back("");
        return base;
    }

    vector<string>ans = subwithreturn(arr, id + 1);
    vector<string>fans;
    for (int i = 0; i < ans.size(); i++)
    {
        fans.push_back(ans[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        fans.push_back(to_string(arr[id]) + ans[i]);
    }
    return fans;
}

void subwithreturn()
{
    vector<int>arr = {1, 2, 3};
    subwithreturn(arr, 0);

}

int main()
{
    subwithreturn();
    return 0;
}

