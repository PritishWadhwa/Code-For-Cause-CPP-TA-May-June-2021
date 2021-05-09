#include <iostream>
using namespace std;
void offline()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void printEven()
{
    int lim = 500;
    int curr = 2;
    int jump = 1;
    while (curr < lim)
    {
        cout << curr << " ";
        curr += 2 * (jump + 1);
        jump += 2;
    }
    return;
}

int main()
{
    offline();
    printEven();
    return 0;
}