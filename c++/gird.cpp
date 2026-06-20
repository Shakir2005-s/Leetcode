class Solution
{
public:
    vector<string> createGrid(int m, int n)
    {
        vector<string> res(m);
        for (int i{}; i < m; ++i)
        {
            string temp{};
            for (int j{}; j < n; ++j)
            {
                if (i == 0 || j == n - 1)
                    temp += '.';
                else
                {
                    temp += '#';
                }
            }
            res[i] = temp;
        }

        return res;
    }
};