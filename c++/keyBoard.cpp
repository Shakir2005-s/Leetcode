class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        unordered_map<char, int> map = {
            {'q', 1}, {'w', 1}, {'e', 1}, {'r', 1}, {'t', 1}, {'y', 1}, {'u', 1}, {'i', 1}, {'o', 1}, {'p', 1}, {'a', 2}, {'s', 2}, {'d', 2}, {'f', 2}, {'g', 2}, {'h', 2}, {'j', 2}, {'k', 2}, {'l', 2}, {'z', 3}, {'x', 3}, {'c', 3}, {'v', 3}, {'b', 3}, {'n', 3}, {'m', 3}};

        vector<string> res;
        int length = words.size();

        for (int i{}; i < length; ++i)
        {
            string word = words[i];
            if (word.empty())
                continue;

            int row = map[tolower(word[0])];
            bool isValid = true;

            int wordLength = word.size();
            for (int j{1}; j < wordLength; ++j)
            {
                if (map[tolower(word[j])] != row)
                {
                    isValid = false;
                    break;
                }
            }
            if (isValid)
            {
                res.push_back(word);
            }
        }
        return res;
    }
};
