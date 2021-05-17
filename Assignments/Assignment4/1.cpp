#include <iostream>
#include <vector>
using namespace std;

void printPatt(int i, int n, vector<int> prev)
{
    if (i > n)
    {
        return;
    }
    if (i == 0)
    {
        cout << 1 << endl;
        prev.clear();
        prev.push_back(1);
        printPatt(i + 1, n, prev);
    }
    else if (i == 1)
    {
        cout << 1 << " " << 1 << endl;
        prev.clear();
        prev.push_back(1);
        prev.push_back(1);
        printPatt(i + 1, n, prev);
    }
    else
    {
        vector<int> next;
        cout << 1 << " ";
        next.push_back(1);
        for (int j = 1; j < i; j++)
        {
            int val = prev[j - 1] + prev[j];
            cout << val << " ";
            next.push_back(val);
        }
        cout << 1 << " " << endl;
        next.push_back(1);
        printPatt(i + 1, n, next);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> prev(1, 1);
    printPatt(0, n, prev);
}