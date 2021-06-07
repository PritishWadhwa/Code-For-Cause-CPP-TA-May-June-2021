class Solution
{
public:
    int leastInterval(vector<char>& tasks, int n)
    {
        map<char, int> freq;
        int maxFreq = -1;
        for (int i = 0; i < tasks.size(); i++)
        {
            freq[tasks[i]]++;
            maxFreq = max(maxFreq, freq[tasks[i]]);
        }
        int ans = (maxFreq - 1) * (n + 1);
        for (auto p : freq)
        {
            if (p.second == maxFreq)
            {
                ans++;
            }
        }
        return max(ans, int(tasks.size()));
    }
};