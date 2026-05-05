class Solution
{
public:
    int furthestDistanceFromOrigin(string moves)
    {
        int n = moves.size();
        int left{}, right{}, dashed{};
        for (int i{}; i < n; ++i)
        {
            if (moves[i] == 'L')
                left++;
            else if (moves[i] == 'R')
                right++;
            else
                dashed++;
        }
        return abs(left - right) + dashed;
    }
};