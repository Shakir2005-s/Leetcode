class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        for (int i{}; i < n; ++i)
        {
            for (int j{i}; j < n; ++j)
            {
                if (i == j)
                {
                    continue;
                }
                else
                {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
        for (int i{}; i < n; ++i)
        {
            int k = 0, l = n - 1;
            while (k < l)
            {
                swap(matrix[i][k], matrix[i][l]);
                ++k;
                --l;
            }
        }
    }
};