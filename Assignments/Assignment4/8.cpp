#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr, int i, int j, int minIdx)
{
    if (i == arr.size() - 1)
    {
        return;
    }
    if (j == arr.size())
    {
        swap(arr[i], arr[minIdx]);
        selectionSort(arr, i + 1, i + 1, i + 1);
    }
    else
    {
        if (arr[j] < arr[minIdx])
        {
            minIdx = j;
        }
        selectionSort(arr, i, j + 1, minIdx);
    }
}

int main()
{
    vector<int> arr{5, 3, -1, 10, 0, 2};
    selectionSort(arr, 0, 0, 0);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}