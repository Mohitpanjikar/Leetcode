class Solution {
public:
    int maxProfit(vector<int>& price) {
        int maxprofit = 0;
        int minprice = INT_MAX;
        
        for(int i=0; i<price.size(); i++){
            minprice = min(minprice,price[i]);
            maxprofit = max(maxprofit,price[i]-minprice);
        }
        return maxprofit;
    }
};