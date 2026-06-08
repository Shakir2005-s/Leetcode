class Solution
{
public:
    vector<int> pivotArray(vector<int> &nums, int pivot)
    {
        int length = nums.size();
        vector<int> res(length);
        int k{};
        for (int i{}; i < length; ++i)
        {
            if (nums[i] < pivot)
            {
                res[k++] = nums[i];
            }
        }
        for (int i{}; i < length; ++i)
        {
            if (nums[i] == pivot)
            {
                res[k++] = nums[i];
            }
        }
        for (int i{}; i < length; ++i)
        {
            if (nums[i] > pivot)
            {
                res[k++] = nums[i];
            }
        }
        return res;
    }
};