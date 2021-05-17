#include <iostream>
#include <vector>

using namespace std;

void findGroups(vector<int> arr, int i, vector<int> arr1, int sum1, vector<int> arr2, int sum2)
{
    if (i == arr.size())
    {
        if (sum1 == sum2)
        {
            for (auto i : arr1)
            {
                cout << i << " ";
            }
            cout << "and ";
            for (auto i : arr2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }
    vector<int> temp1 = arr1;
    temp1.push_back(arr[i]);
    vector<int> temp2 = arr2;
    temp2.push_back(arr[i]);
    findGroups(arr, i + 1, temp1, sum1 + arr[i], arr2, sum2);
    findGroups(arr, i + 1, arr1, sum1, temp2, sum2 + arr[i]);
}

int findNos(vector<int> arr, int i, vector<int> arr1, int sum1, vector<int> arr2, int sum2)
{
    if (i == arr.size())
    {
        if (sum1 == sum2)
        {
            return 1;
        }
        return 0;
    }
    vector<int> temp1 = arr1;
    temp1.push_back(arr[i]);
    vector<int> temp2 = arr2;
    temp2.push_back(arr[i]);
    return findNos(arr, i + 1, temp1, sum1 + arr[i], arr2, sum2) + findNos(arr, i + 1, arr1, sum1, temp2, sum2 + arr[i]);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int> arr1, arr2;
    cout << findNos(arr, 0, arr1, 0, arr2, 0) << endl;
    findGroups(arr, 0, arr1, 0, arr2, 0);
    return 0;
}