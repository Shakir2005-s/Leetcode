class Solution
{
    int FindCommonDigit(vector<int> &nums, int value)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] == value)
            {
                return nums[mid];
            }
            else if (nums[mid] > value)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }

public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        for (int i{}; i < nums1.size(); ++i)
        {
            int value = FindCommonDigit(nums2, nums1[i]);
            if (value != -1)
                return value;
        }
        return -1;
    }
};