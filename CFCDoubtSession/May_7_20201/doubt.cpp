#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    const int N = 1e6 + 2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int mi = INT16_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            mi = min(idx[arr[i]], mi);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (mi == INT16_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << mi + 1 << endl;
    }

    return 0;
}
