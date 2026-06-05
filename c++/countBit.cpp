class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> res(n + 1);
        for (int i = 0; i <= n; ++i)
        {
            int bit = __builtin_popcount(i);
            res[i] = bit;
        }
        return res;
    }
};