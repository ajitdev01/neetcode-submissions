class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        int max_profit = 0;
        int min_price = prices[0];

        for (int i = 1; i < n; i++) {
            // Update the minimum price seen so far
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // Calculate potential profit and update max_profit
            else {
                int current_profit = prices[i] - min_price;
                if (current_profit > max_profit) {
                    max_profit = current_profit;
                }
            }
        }

        return max_profit;
    }
};