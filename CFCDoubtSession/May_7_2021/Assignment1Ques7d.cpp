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

    // int n = 5;
    // int id = 0;
    int nsp = n - 1;
    int csp = 1;
    while (csp <= nsp)
    {
        cout << " ";
        csp++;
    }
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // int nst = 1;
    // while (id < 5)
    // {
    //     int csp = 1;
    //     while (csp <= nsp)
    //     {
    //         cout << " ";
    //         csp++;
    //     }
    //     int cst = 1;
    //     while (cst <= nst)
    //     {
    //         int k = cst;
    //         if (k < cst)
    //         {
    //             k = cst - 1;
    //         }

    //         cout << k;
    //         cst++;
    //     }
    //     cout << "\n";
    //     nst = nst + 2;
    //     nsp = nsp - 1;
    //     id++;
    // }
    // int curr;
    // int i = 0;
    // for (int j = 0; j < n; j++)
    // {
    //     curr = j + 1;
    //     for (i; i < n - curr; i++)
    //     {
    //         cout << "  ";
    //     }
    //     for (i; i < n; i++)
    //     {
    //         cout << curr << " ";
    //         if (i < n - 1 && curr > 1)
    //         {
    //             curr--;
    //         }
    //     }
    //     curr++;
    //     cout << endl;
    // }
    for (int i = 0; i < 5; i++)
    {
        int start = i + 1;
    }
    cout << endl;
}

void pat(int n)
{
    int nsp = n - 1;
    int csp = 1;
    for (int j = 0; j < n; j++)
    {
        int curr = j + 1;
        for (int i = 0; i < n - curr; i++)
        {
            cout << "  ";
        }
        for (int i = curr; i <= 2 * (curr)-1; i++)
        {
            cout << i << " ";
        }
        for (int i = 2 * curr - 2; i >= curr; i--)
        {
            cout << i << " ";
        }

        // for (int i = 2 * (j + 1) - 1; i >= j + 1; i--)
        // {
        //     cout << i << " ";
        // }
        cout << endl;
    }
}

int main()
{
    offline();
    int n;
    cin >> n;
    pat(n);
    return 0;
}