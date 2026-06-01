class Solution
{
public:
    int minimumCost(vector<int> &cost)
    {
        int length = cost.size();
        sort(cost.begin(), cost.end(), greater<>());
        int totalCost{};
        int count{};
        for (int i{}; i < length; i++)
        {
            if (i % 3 != 2)
            {
                totalCost += cost[i];
            }
        }
        return totalCost;
    }
};