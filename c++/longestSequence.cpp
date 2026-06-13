class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int length = nums.size();
        if (length == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int MaxCount{1};
        int count{1};
        int i{};

        while (i < nums.size() - 1)
        {
            if (nums[i] == nums[i + 1] - 1)
            {
                count++;
                MaxCount = max(count, MaxCount);
            }
            else if (nums[i] == nums[i + 1])
            {
                ++i;
                continue;
            }
            else
            {
                count = 1;
            }
            ++i;
        }
        return MaxCount;
    }
};