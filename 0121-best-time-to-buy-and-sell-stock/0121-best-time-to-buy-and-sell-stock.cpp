class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost=INT_MAX;
        int sell=0;
       
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<cost){
                cost=prices[i];
            }
            if(prices[i+1]>cost){
                sell=max(sell,prices[i+1]-cost);
            }

        }
        return sell;
        
    }
};