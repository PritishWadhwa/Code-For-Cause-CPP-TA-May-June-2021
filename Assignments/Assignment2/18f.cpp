class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        int i = 0, j = nums.size() - 1;
        vector<int> arr;
        arr.reserve(nums.size());
        while (i <= j)
        {
            if ((nums[i] * nums[i]) >= (nums[j] * nums[j]))
            {
                arr.insert(arr.begin(), nums[i] * nums[i]);
                i++;
            }
            else
            {
                arr.insert(arr.begin(), nums[j] * nums[j]);
                j--;
            }
        }
        return arr;
    }
};