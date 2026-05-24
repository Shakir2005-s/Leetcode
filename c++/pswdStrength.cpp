class Solution
{
public:
    int passwordStrength(string password)
    {
        set<char> s;
        int length = password.size();
        int count{};
        for (int i{}; i < length; ++i)
        {
            char value = password[i];
            if (password[i] >= 'a' && password[i] <= 'z' && s.find(value) == s.end())
            {
                count = count + 1;
                s.insert(value);
            }
            else if (password[i] >= 'A' && password[i] <= 'Z' && s.find(value) == s.end())
            {
                count = count + 2;
                s.insert(value);
            }
            else if (password[i] >= '0' && password[i] <= '9' && s.find(value) == s.end())
            {
                count = count + 3;
                s.insert(value);
            }
            else if (s.find(value) == s.end())
            {
                count = count + 5;
                s.insert(value);
            }
        }
        return count;
    }
};