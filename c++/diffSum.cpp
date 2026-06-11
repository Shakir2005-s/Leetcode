class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum{};
        int digitSum{};
        int length = nums.size();
        for (int i{}; i < length; ++i)
        {
            sum += nums[i];
            int value = nums[i];
            while (value > 0)
            {
                digitSum += (value % 10);
                value = value / 10;
            }
        }
        return abs(sum - digitSum);
    }
};