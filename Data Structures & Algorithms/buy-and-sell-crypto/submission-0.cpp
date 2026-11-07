class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price_idx = 0;
        int max_diff = 0;
        if(prices.size() <= 1) return 0;
        
        for(int i = 0; i < prices.size()-1; ++i){

        if (prices[buy_price_idx] > prices[i]) buy_price_idx = i;
        int diff = prices[i+1] - prices[buy_price_idx];
        if(diff > max_diff) max_diff = diff;

        }
        return max_diff;
    }
};
