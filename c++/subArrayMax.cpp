class Solution
{
public:
    long long maxTotalValue(vector<int> &nums, int k)
    {
        int length = nums.size();
        int MAX = INT_MIN, MIN = INT_MAX;
        for (int i{}; i < length; ++i)
        {
            if (nums[i] > MAX)
            {
                MAX = nums[i];
            }
            if (nums[i] < MIN)
            {
                MIN = nums[i];
            }
        }
        long long value = MAX - MIN;
        return value * k;
    }
};