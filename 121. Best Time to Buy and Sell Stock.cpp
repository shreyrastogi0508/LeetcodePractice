class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar = prices[0];  // store min element which searching array 
        int MaxProfit = 0; 
        
        for(int i=0;i<prices.size();i++)
        {
            minsofar = min(minsofar,prices[i]); //min of array
            int profit = prices[i] - minsofar; //current profit
            MaxProfit = max(MaxProfit, profit); //max profit
        }
        return MaxProfit;
    }
};
