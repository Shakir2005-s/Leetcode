class Solution
{
public:
    bool isPalindrome(int x)
    {
        int original = x;
        long long reverse{};
        while (x > 0)
        {
            int rem = x % 10;
            x = x / 10;
            reverse = (reverse * 10) + rem;
        }
        return original == reverse;
    }
};