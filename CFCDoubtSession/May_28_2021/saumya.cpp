/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

vector<int> arrayOfIndices(vector<int>& arr, int x, int y, vector<int>& z)
{
    if (y == arr.size())
        return z;
    if (arr[y] == x)
        z.push_back(y);
    arrayOfIndices(arr, x, y + 1, z);
}
void arrayOfIndices()
{
    vector<int>arr = {0, 4, 2, 2, 1, 2, 3, 4, 2};
    int n;
    cout << "Enter the target\n";
    cin >> n;
    vector<int> temp;
    vector<int> x = arrayOfIndices(arr, n, 0, temp);
    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
}
void arrayInverse(vector<int>& arr, int id, int ele)
{
    if (id == arr.size())
        return;
    if (id + 1 == arr[ele])
    {
        int temp = arr[id];
        arr[id] = arr[ele];
        arr[ele] = temp;
        arrayInverse(arr, id + 1, id + 1 + 1);
    }
    else
        arrayInverse(arr, id, id + 1);
}

void arrayInverse()
{
    vector<int>arr = {2, 5, 4, 1, 3};
    arrayInverse(arr, 0, 0);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}


int main()
{
    arrayOfIndices();
    // arrayInverse();
}

