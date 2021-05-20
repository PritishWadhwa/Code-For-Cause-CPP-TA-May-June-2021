#include <iostream>
#include <vector>

using namespace std;

void printDistri(vector<int>& arr, vector<int> arr1, int sum1, vector<int> arr2, int sum2, int i)
{
    if (i == arr.size())
    {
        if (sum1 == sum2)
        {
            for (auto i : arr1)
            {
                cout << i << " ";
            }
            cout << ": ";
            for (auto i : arr2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
    }
    arr1.push_back(arr[i]);
    printDistri(arr, arr1, sum1 + arr[i], arr2, sum2, i + 1);
    arr1.pop_back();
    arr2.push_back(arr[i]);
    printDistri(arr, arr1, sum1, arr2, sum2 + arr[i], i + 1);
    arr2.pop_back();
}

int main()
{
    vector<int> arr{-1, 3, 7, 4, 2, 1};
    vector<int> arr1, arr2;
    printDistri(arr, arr1, 0, arr2, 0, 0);
    return 0;
}