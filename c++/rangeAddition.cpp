class Solution
{
public:
    int maxCount(int m, int n, vector<vector<int>> &ops)
    {
        int row = ops.size();
        if (row == 0)
            return m * n;

        int col = ops[0].size();
        int minRow{ops[0][0]}, minCol{ops[0][1]};
        for (int i{1}; i < row; i++)
        {
            if (ops[i][0] < minRow)
            {
                minRow = ops[i][0];
            }
            if (ops[i][1] < minCol)
            {
                minCol = ops[i][1];
            }
        }
        return minRow * minCol;
    }
};