class Solution
{
public:
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        int n = A.size();
        vector<int> common(n);
        for (int i{}; i < n; ++i)
        {
            int count{};
            for (int j{}; j <= i; ++j)
            {
                for (int k{}; k <= i; ++k)
                {
                    if (A[j] == B[k])
                    {
                        count++;
                        break;
                    }
                }
            }
            common[i] = count;
        }
        return common;
    }
};
