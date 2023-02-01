class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int max_p = 0;
        int curr_p = 0;
        for(int i = 1; i < prices.size(); i++) {
                if(prices[i] < buy) {
                        buy = prices[i];
                }
                curr_p = prices[i] - buy;
                if(curr_p > max_p) max_p = curr_p;
        }        
        return max_p;
    }
};
