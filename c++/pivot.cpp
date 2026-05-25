class Solution
{
public:
    int pivotInteger(int n)
    {
        if (n == 1)
            return 1;

        int totalSum = (n * (1 + n)) / 2;

        for (int i = 2; i <= n; ++i)
        {
            int subTotal = (i * (1 + i)) / 2;

            if (totalSum - subTotal + i == subTotal)
            {
                return i;
            }
        }
        return -1;
    }
};
