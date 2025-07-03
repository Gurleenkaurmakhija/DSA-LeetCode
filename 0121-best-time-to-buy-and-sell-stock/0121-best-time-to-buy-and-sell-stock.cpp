class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=INT_MAX;
        int sell=0;
       
        for(int i=0;i<prices.size();i++){
            if(prices[i]<cost){
                cost=prices[i];
            }
            if(prices[i]>cost){
                sell=max(sell,prices[i]-cost);
            }

        }
        return sell;
        
    }
};