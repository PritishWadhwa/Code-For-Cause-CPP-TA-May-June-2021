/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

    }

    for (int itr = 1; itr <= n - 1; itr++)
    {

        for (int j = 0; j <= n - 1 - itr; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

