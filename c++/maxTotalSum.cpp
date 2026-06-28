class Solution
{
public:
    long long maxSum(vector<int> &nums, int k, int mul)
    {
        int length = nums.size();
        sort(nums.rbegin(), nums.rend());
        long long sum{};
        for (int i{}; i < k; ++i)
        {
            long long value = nums[i];
            long long Multiply = (long long)value * mul;
            sum += max(value, Multiply);
            --mul;
        }

        return sum;
    }
};