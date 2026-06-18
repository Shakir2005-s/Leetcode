class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int row[4] = {1, -1, 0, 0};
        int cols[4] = {0, 0, 1, -1};
        queue<pair<int, int>> Q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i{}; i < m; ++i)
        {
            int j{};
            for (; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    Q.push({i, j});
                    visited[i][j] = true;
                    break;
                }
            }
            if (j < n)
            {
                break;
            }
        }
        int Perimeter{};
        while (!Q.empty())
        {
            auto [rw, cl] = Q.front();
            Q.pop();
            for (int i{}; i < 4; ++i)
            {
                int newRw = rw + row[i];
                int newCol = cl + cols[i];
                if (newRw >= m || newRw < 0 || newCol >= n || newCol < 0 || grid[newRw][newCol] == 0)
                {
                    Perimeter++;
                }
                else if (!visited[newRw][newCol])
                {
                    Q.push({newRw, newCol});
                    visited[newRw][newCol] = true;
                }
            }
        }
        return Perimeter;
    }
};