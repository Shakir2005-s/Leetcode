class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int length = nums.size();

        int currentSum = 0;
        for (int i = 0; i < k; ++i)
        {
            currentSum += nums[i];
        }

        int maxSum = currentSum;

        for (int i = k; i < length; ++i)
        {

            currentSum = currentSum - nums[i - k] + nums[i];
            maxSum = max(maxSum, currentSum);
        }
        return (double)maxSum / k;
    }
};
