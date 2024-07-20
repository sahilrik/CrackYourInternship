class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int mini = INT_MAX;
        int profit = 0;
        for (auto num : prices)
        {
            mini = min(mini, num);
            profit = max(num - mini, profit);
        }
        return profit;
    }
};