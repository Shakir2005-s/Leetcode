class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        if(length<=nums[length-1])
        return false;
        for(int i{};i<length-2;++i)
        {
            if(nums[i]+1!=nums[i+1])
            {
                return false;   
            }
        }
        return nums[length-2]==nums[length-1];
        
    }
};