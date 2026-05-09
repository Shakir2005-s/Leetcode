class Solution
{
public:
    vector<vector<int>> rotateGrid(vector<vector<int>> &grid, int k)
    {
        int m = grid.size(), n = grid[0].size();
        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        while (top < bottom && left < right)
        {
            vector<int> layer;

            for (int j = left; j < right; ++j)
                layer.push_back(grid[top][j]);
            for (int i = top; i < bottom; ++i)
                layer.push_back(grid[i][right]);
            for (int j = right; j > left; --j)
                layer.push_back(grid[bottom][j]);
            for (int i = bottom; i > top; --i)
                layer.push_back(grid[i][left]);

            int len = layer.size();
            int netShift = k % len;

            int idx = netShift;
            for (int j = left; j < right; ++j)
                grid[top][j] = layer[idx++ % len];
            for (int i = top; i < bottom; ++i)
                grid[i][right] = layer[idx++ % len];
            for (int j = right; j > left; --j)
                grid[bottom][j] = layer[idx++ % len];
            for (int i = bottom; i > top; --i)
                grid[i][left] = layer[idx++ % len];

            top++;
            bottom--;
            left++;
            right--;
        }
        return grid;
    }
};
