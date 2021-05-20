#include <iostream>
#include <vector>
#include<unistd.h>
unsigned int microsecond = 1000000;
using namespace std;

void bubbleSort(vector<int>& arr, int i, int j)
{
    if ((i >= (arr.size() - 1)) && (j >= (arr.size() - 2)))
    {
        return;
    }
    if (i >= (arr.size() - 1))
    {
        bubbleSort(arr, 0, j + 1);
    }
    else
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
        bubbleSort(arr, i + 1, j);
    }
}

int main()
{
    vector<int> arr{5, 3, -1, 10, 0, 2};
    bubbleSort(arr, 0, 0);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
