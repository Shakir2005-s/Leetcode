class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int length = timeSeries.size();
        int total{};

        for (int i{1}; i < length; ++i)
        {
            total += min(duration, timeSeries[i] - timeSeries[i - 1]);
        }
        total += duration;
        return total;
    }
};
