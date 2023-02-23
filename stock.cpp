class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int mini_Value = INT_MAX;

        for(int i=0;i<prices.size();i++){
            if(mini_Value > prices[i]){
                mini_Value = prices[i];
            }
            profit = max(prices[i]-mini_Value,profit);
        }
    return profit;
    }
};