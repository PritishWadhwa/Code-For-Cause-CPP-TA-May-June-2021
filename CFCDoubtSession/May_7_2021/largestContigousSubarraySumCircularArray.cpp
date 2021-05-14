#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void offline()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int kadane(vector<int> arr)
{
    // maxSoFar - abhi tak ka best sum
    // maxTillNow - abhi tak ka best sum that is ending here
    int maxSoFar = INT_MIN;
    int maxTillNow = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxTillNow += arr[i];
        maxSoFar = max(maxSoFar, maxTillNow);
        maxTillNow = max(maxTillNow, 0);
    }
    return maxSoFar;
}

int circularKadane(vector<int> arr)
{
    int totalSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        totalSum += arr[i];
        arr[i] *= -1;
    }

    int maxSoFar = INT_MIN;
    int maxTillNow = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        maxTillNow += arr[i];
        maxSoFar = max(maxSoFar, maxTillNow);
        maxTillNow = max(maxTillNow, 0);
    }
    return totalSum + maxSoFar;
}

int main()
{
    offline();
    vector<int> arr = {1, 2, 3, 4, -1, 5};
    int ans1 = kadane(arr);
    int ans2 = circularKadane(arr);
    cout << max(ans1, ans2) << endl;
    return 0;
}