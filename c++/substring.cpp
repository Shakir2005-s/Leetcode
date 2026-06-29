class Solution
{
public:
    int numOfStrings(vector<string> &patterns, string word)
    {
        int length = patterns.size();
        int wlen = word.size();
        int count{};
        for (int i{}; i < length; ++i)
        {
            string str = patterns[i];
            if (word.find(str) != string::npos)
            {
                count++;
            }
        }
        return count;
    }
};