class Solution
{
public:
    int maxRotateFunction(vector<int> &nums)
    {
        int length = nums.size();
        int sum{}, F{};

        for (int i{}; i < length; ++i)
        {
            sum += nums[i];
            F += i * nums[i];
        }
        int maxi = F;

        for (int i = 1; i < length; i++)
        {
            F += sum - length * nums[length - i];
            maxi = max(maxi, F);
        }

        return maxi;
    }
};