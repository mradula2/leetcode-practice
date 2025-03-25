#include <vector>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int maxProfit = 0;
        int buy = 0;
        int sell = 1;

        while(sell < prices.size()) {
            if (prices[buy] < prices[sell]) {
                int profit = prices[sell] - prices[buy];
                maxProfit = max(maxProfit, profit);
            } else {
                buy = sell;
            }
            sell++;
        }

        return maxProfit;

    }
};