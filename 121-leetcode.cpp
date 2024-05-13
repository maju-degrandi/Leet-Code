class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minp = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            if(prices[i] < minp) minp = prices[i];
            if(prices[i] - minp > maxprofit) maxprofit = prices[i] - minp;
        }
        
        return maxprofit;
    }
};
