class Solution
{
public:
    vector<int> separateDigits(vector<int> &nums)
    {
        int length = nums.size();
        vector<int> res;
        for (int i = length - 1; i >= 0; --i)
        {
            int value = nums[i];
            while (value > 0)
            {
                res.push_back(value % 10);
                value = value / 10;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};