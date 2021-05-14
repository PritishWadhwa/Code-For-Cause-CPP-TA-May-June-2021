#include <bits/stdc++.h>

using namespace std;

int decimalToOctal(int n)
{
    int ans = 0;
    int ctr = 1;
    while (n > 0)
    {
        int rem = n % 8;
        ans += ctr * (n % 8);
        n /= 8;
        ctr *= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = decimalToOctal(n);
    cout << ans;
    return 0;
}
