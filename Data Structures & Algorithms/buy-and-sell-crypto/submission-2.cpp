class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int e = 1, s = 0;

        while (e < n) {
            int diff = prices[e] - prices[s];
            if (diff < 0) {
                s=e;

            } else {
                profit = max(profit, diff);
            }
            e++;
        }
        return profit;
    }
};
