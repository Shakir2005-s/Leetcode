class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>array;
        for(int i{};i<m;++i)
        {
            for(int j{};j<n;++j)
            {
                if(grid[i][j]%x!=grid[0][0]%x)
                return -1;
                else
                array.push_back(grid[i][j]);
            }
        }
        sort(array.begin(),array.end());
        int length=array.size();
        int mid=length/2;
        int count{};
        for(int i{};i<length;++i)
        {
            if(array[i]!=array[mid])
            {
            int req=abs(array[mid]-array[i]);
            int divide=req/x;
            count+=divide;
            }
        }
        return count;
    }
};