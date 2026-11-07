class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX; 
        int max_profit = 0;
        
        for(int price : prices) {
            // Update the lowest price seen so far
            min_price = min(min_price, price);
            
            // Update the max profit if selling today is better
            max_profit = max(max_profit, price - min_price);
        }
        
        return max_profit;
    }
};