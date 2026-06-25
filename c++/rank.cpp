class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        unordered_map<int, int> map;
        int length = score.size();
        for (int i{}; i < length; ++i)
        {
            map[score[i]] = i;
        }
        sort(score.rbegin(), score.rend());
        vector<string> res(length);
        if (length > 0)
            res[map[score[0]]] = "Gold Medal";
        if (length > 1)
            res[map[score[1]]] = "Silver Medal";
        if (length > 2)
            res[map[score[2]]] = "Bronze Medal";

        for (int i = 3; i < length; ++i)
        {
            res[map[score[i]]] = to_string(i + 1);
        }
        return res;
    }
};
