class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int length = nums.size();
        vector<int> leftSum(length, 0);
        vector<int> rightSum(length, 0);
        for (int i{1}; i < length; ++i)
        {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
        }
        for (int i = length - 2; i >= 0; --i)
        {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
        }
        vector<int> res(length, 0);
        for (int i{}; i < length; ++i)
        {
            res[i] = abs(leftSum[i] - rightSum[i]);
        }
        return res;
    }
};