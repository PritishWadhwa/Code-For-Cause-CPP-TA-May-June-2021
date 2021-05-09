#include <iostream>
using namespace std;
void offline()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void printPattern(int n)
{
    int curr = n;
    int subFlag = 0;
    int i = 0;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int printVal = n;
        for (int j = 0; j < n; j++)
        {
            cout << printVal << " ";
            if (printVal != curr)
            {
                printVal--;
            }
        }
        int times = printVal - 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (times > 0)
            {
                cout << printVal << " ";
                times--;
            }
            else
            {
                printVal++;
                cout << printVal << " ";
            }
        }
        if (subFlag == 0)
        {
            curr--;
            if (curr == 1)
            {
                subFlag = 1;
            }
        }
        else if (subFlag == 1 && curr < n)
        {
            curr++;
        }
        cout << endl;
    }
}

void printButterfly(int n)
{
}

int main()
{
    offline();
    int n;
    cin >> n;
    // printPattern(n);
    printButterfly(n);
    return 0;
}