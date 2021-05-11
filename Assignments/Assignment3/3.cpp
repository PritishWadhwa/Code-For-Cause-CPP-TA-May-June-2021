#include <bits/stdc++.h>
using namespace std;

void printSwastika(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "* ";
            for (int j = 1; j < n / 2; j++)
            {
                cout << "  ";
            }
            for (int j = n / 2; j < n; j++)
            {
                cout << "* ";
            }
        }
        else if (0 < i && i < n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == n / 2)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else if (i == n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else if (n / 2 < i && i < n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n - 1 || j == n / 2)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        else
        {
            for (int j = 0; j <= n / 2; j++)
            {
                cout << "* ";
            }
            for (int j = n / 2 + 1; j < n - 1; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printSwastika(n);
    return 0;
}