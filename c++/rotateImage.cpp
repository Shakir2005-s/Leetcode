class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>res(n,vector<int>(n));
        int temp=n;
        for(int i{};i<n;++i)
        {
            temp--;
            for(int j{};j<n;++j)
            {
                res[j][temp]=matrix[i][j]; 
            }
        }
           for(int i{};i<n;++i)
        {

            for(int j{};j<n;++j)
            {
                matrix[i][j]=res[i][j]; 
            }
        }
        
    }
};