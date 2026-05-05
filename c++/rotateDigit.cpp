class Solution
{
public:
    int rotatedDigits(int n)
    {
        int count{};

        for (int i{1}; i <= n; ++i)
        {
            bool isDiff = false;
            bool isValid = true;
            int num = i;
            while (num > 0)
            {
                int rem = num % 10;
                if (rem == 2 || rem == 5 || rem == 6 || rem == 9)
                {
                    isDiff = true;
                }
                else if (rem == 3 || rem == 4 || rem == 7)
                {
                    isValid = false;
                    break;
                }
                num = num / 10;
            }
            if (isValid && isDiff)
                count++;
        }
        return count;
    }
};