class Solution
{
public:
    int minElement(vector<int> &nums)
    {
        int Min = INT_MAX;
        for (int i{}; i < nums.size(); ++i)
        {
            int sum = 0;
            int num = nums[i];
            while (num > 0)
            {
                int rem = num % 10;
                sum += rem;
                num = num / 10;
            }
            nums[i] = sum;
            if (sum < Min)
            {
                Min = sum;
            }
        }
        return Min;
    }
};