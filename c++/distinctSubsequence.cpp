class Solution
{
public:
    string smallestSubsequence(string s)
    {
        vector<int> freq(26, 0);
        int length = s.size();
        for (int i{}; i < length; ++i)
        {
            int index = s[i] - 'a';
            freq[index]++;
        }
        stack<char> stk;
        unordered_map<char, bool> seen;
        seen[s[0]] = true;
        stk.push(s[0]);
        freq[s[0] - 'a']--;
        string res{};
        int j{1};
        while (j < length)
        {
            freq[s[j] - 'a']--;
            if (seen[s[j]])
            {
                ++j;
                continue;
            }

            while (!stk.empty() && s[j] < stk.top() && freq[stk.top() - 'a'] != 0)
            {
                seen[stk.top()] = false;
                stk.pop();
            }

            stk.push(s[j]);
            seen[s[j]] = true;

            ++j;
        }
        while (!stk.empty())
        {
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};