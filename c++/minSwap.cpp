class Solution
{
public:
    int minimumSwaps(vector<int> &nums)
    {
        int i = 0;
        int j = nums.size() - 1;
        int count = 0;

        while (i < j)
        {
            if (nums[i] != 0)
            {
                i++;
            }
            else if (nums[j] == 0)
            {
                j--;
            }
            else
            {
                swap(nums[i], nums[j]);
                count++;
                i++;
                j--;
            }
        }
        return count;
    }
};
©leetcode