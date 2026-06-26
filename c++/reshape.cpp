class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int row = mat.size();
        int col = mat[0].size();
        if (row * col != r * c)
        {
            return mat;
        }
        int k{};
        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i{}; i < row; ++i)
        {
            for (int j{}; j < col; ++j)
            {
                res[k / c][k % c] = mat[i][j];
                ++k;
            }
        }
        return res;
    }
};