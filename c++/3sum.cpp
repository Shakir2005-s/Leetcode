int threeSumClosest(vector<int>& nums, int target) {
        int length = nums.size();
        sort(nums.begin(), nums.end());
        
        int outerSum = nums[0] + nums[1] + nums[2];
        
        for (int i = 0; i < length - 2; ++i) {
            int start = i + 1;
            int end = length - 1;
            
            while (start < end) {
                int innerSum = nums[i] + nums[start] + nums[end];
                
                
                if (abs(target - innerSum) < abs(target - outerSum)) {
                    outerSum = innerSum;
                }
                
                if (innerSum < target) {
                    ++start;
                } else if (innerSum > target) {
                    --end;
                } else {
                    return innerSum; 
                }
            }
        }
        return outerSum;
    }

