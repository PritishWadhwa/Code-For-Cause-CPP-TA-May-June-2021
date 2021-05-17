#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr, int i, int j)
{
    if (i >= j)
    {
        return;
    }
    swap(arr[i], arr[j]);
    reverseArray(arr, i + 1, j - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr, 0, arr.size() - 1);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}