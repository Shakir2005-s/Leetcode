class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        int length1 = s.size();
        int length2 = goal.size();
        if (length1 != length2)
            return false;
        for (int i{}; i < length1; ++i)
        {
            if (s == goal)
                return true;
            int j{};
            char temp = s[0];
            for (; j < length1 - 1; ++j)
            {
                s[j] = s[j + 1];
            }
            s[j] = temp;
        }
        return false;
    }
};