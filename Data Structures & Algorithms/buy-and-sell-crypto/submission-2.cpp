class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int maxPf = 0;

        for (int i = 1; i < prices.size(); i++) {
            maxPf = max(maxPf, prices[i] - bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxPf;
    }
};