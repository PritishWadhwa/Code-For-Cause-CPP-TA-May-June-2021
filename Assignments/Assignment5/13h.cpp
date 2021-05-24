class Solution
{
public:

    int helper(int n, int i, int ans, vector<bool>& arr)
    {
        if (ans == n)
        {
            return 1;
        }
        int sum = 0;
        for (int j = 1; j <= n; j++)
        {
            if ((!arr[j - 1]) && (j % i == 0 || i % j == 0))
            {
                arr[j - 1] = true;
                sum += helper(n, i + 1, ans + 1, arr);
                arr[j - 1] = false;
            }
        }
        return sum;
    }

    int countArrangement(int n)
    {
        vector<bool> arr(n, false);
        int ans = helper(n, 1, 0, arr);
        return ans;
    }
};